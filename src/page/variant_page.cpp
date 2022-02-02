#include "page/variant_page.h"

#include <algorithm>

#include "page/overflow_page.h"

#define LOAD_FREEBLK(offset) \ 
        reinterpret_cast<free_block_header*>(buf + (offset))

#define LOAD_BLK(offset) \
        reinterpret_cast<block_header*>(buf + (offset))


void variant_page::init(int) {
    magic_ref()      = PAGE_VARIANT;
    free_block_ref() = 0;
    free_size_ref()  = PAGE_SIZE - header_size();
    size_ref()       = 0;
    tail_max_ref()       = 0;
    next_page_ref()  = prev_page_ref() = 0;
}

bool variant_page::insert(int pos, const char* data, int data_size) {
    assert(0 <= pos && pos <= size());
    int real_size = data_size + BLOCK_HEADER_SIZE;
    bool ov = (real_size > PAGE_BLOCK_MAX_SIZE);
    int size_required = ov ? PAGE_OV_KEEP_SIZE : real_size;
    
    // get a block's offset
    char* dest = allocate(size_required);
    if (!dest) {
        return false;
    }

    // set slot
    uint16_t* slots_ptr = slots();
    for (int i = size(); i > pos; --i) {
        slots_ptr[i] = slots_ptr[i - 1];
    }
    slots_ptr[pos] = dest - buf;

    // set data
    block_header* header = reinterpret_cast<block_header*>(dest);
    header->size = size_required;
    int copied_size = size_required - BLOCK_HEADER_SIZE;
    std::memcpy(dest + BLOCK_HEADER_SIZE,
                data, copied_size);

    // add count
    // block size sub in allocate()
    free_size_ref() -= slot_size();
    ++size_ref();

    if (!ov) {
        header->ov_page = 0;
    } else {
        // overflow, have next page
        auto create_page_and_copy_data = [&](const char* src, int size) {
            int pid = pg->new_page();
            overflow_page page = overflow_page(pg->read_for_write(pid), pg);
            page.init();
            page.size_ref() = size;
            std::memcpy(page.block(), src, size);
            return std::make_pair(pid, page);
        };

        // move the ptr and complute next copy size
        data += copied_size;
        int remain  = data_size - copied_size;
        int to_copy = std::min(overflow_page::block_size(), remain);

        auto ret = create_page_and_copy_data(data, to_copy);
        overflow_page ov_page = ret.second;
        data += to_copy;
        remain -= to_copy;
        header->ov_page = ret.first;

        while (remain > 0) {
            int to_copy = std::min(overflow_page::block_size(), remain);
            auto ret = create_page_and_copy_data(data, to_copy);
            ov_page.next_ref() = ret.first;
            ov_page = ret.second;
            data += to_copy;
            remain -= to_copy;
        }
    }
    return true;
}

void variant_page::move_from(variant_page page, int src_pos, int dest_pos) {
    auto src_block = page.get_block(src_pos);
    bool succ_ins  = insert(dest_pos, src_block.second,
                        src_block.first.size - BLOCK_HEADER_SIZE);
    // overflow page's next will copy
    *(block_header*)(buf + slots()[dest_pos]) = src_block.first;
    page.erase(src_pos, false);
}

char* variant_page::allocate(int sz) {
    if (free_size() < sz + BLOCK_HEADER_SIZE) {
        return nullptr;
    }

    int head_remain = PAGE_SIZE - (header_size() + size() * slot_size() + tail_max());
    auto free_blk   = LOAD_FREEBLK(free_block());

    // have too much fragments, page head isn't a large free block
    if (head_remain < slot_size() && free_size() - slot_size() >= sz) {
        defragment();
        return allocate(sz);
    }

    if (free_block() && free_blk->size >= sz) {
        // TODO: can find a free block in the link-list
        char* addr = buf + free_block();
        if (free_blk->size - sz < PAGE_FREE_BLOCK_MIN_SIZE) {
            // don't need to spilt a free block
            free_block_ref() = free_blk->next;
        } else {
            auto free_blk_new  = LOAD_FREEBLK(free_block() + sz);
            free_blk_new->size = free_blk->size - sz;
            free_blk_new->next = free_blk->next;
            free_block_ref() += sz;
        }

        free_size_ref() -= sz;
        return addr;
    } else if (head_remain - slot_size() >= sz) {
        // can allocate in page head
        tail_max_ref() += sz;
        free_size_ref() -= sz;
        return buf + PAGE_SIZE - tail_max();
    } else if (free_size() - slot_size() >= sz) {
        // the page have enough space
        // but have too muchf ragments
        defragment();
        return allocate(sz);
    }

    return nullptr;
    
}

void variant_page::erase(int pos, bool is_erase_overflow) {
    assert(0 <= pos && pos < size());
    
    uint16_t* slots_ptr = slots();
    uint16_t slot = slots_ptr[pos];
    for (int i = pos, s = size(); i < s; ++i) {
        slots_ptr[i] = slots_ptr[i + 1];
    }

    block_header* header = LOAD_BLK(slot);
    if (header->ov_page && is_erase_overflow) {
        pg->free_overflow_page(header->ov_page);
    }

    free_size_ref() += header->size + slot_size();
    --size_ref();
    set_freeblock(slot);
}

void variant_page::set_freeblock(int offset) {
    block_header* header = LOAD_BLK(offset);
    if (offset + tail_max() == PAGE_SIZE) {
        tail_max_ref() -= header->size;
    } else {
        free_block_header* fb_header = LOAD_FREEBLK(offset);
        fb_header->size = header->size;
        fb_header->next = free_block();
        free_block_ref() = offset;
    }
}

void variant_page::defragment() {
    int sz = size();
    uint16_t* slots_ptr = slots();
    int *index = new int[sz];
    for (int i = 0; i < sz; ++i) {
        index[i] = i;
    }

    // sort with address
    std::sort(index, index + size(), [&slots_ptr](const int a, const int b) {
        return slots_ptr[a] > slots_ptr[b];
    });

    // merge fragment
    int total_blk_zs = 0;
    char* ptr = buf + PAGE_SIZE;
    for (int i = 0; i < sz; ++i) {
        char* blk = buf + slots_ptr[index[i]];
        int blk_sz = reinterpret_cast<block_header*>(blk)->size;
        total_blk_zs += blk_sz;
        ptr -= blk_sz;
        slots_ptr[index[i]] = ptr - buf;
        std::memmove(ptr, blk, blk_sz);
    }

    delete[] index;
    free_block_ref() = 0;
    tail_max_ref() = total_blk_zs;
}

std::pair<int, variant_page> variant_page::split(int cur_id) {
    if (size() < PAGE_BLOCK_MIN_NUM) {
        return {0, {nullptr, nullptr}};
    }
    
    int page_id = pg->new_page();
    if (!page_id) {
        return {0, {nullptr, nullptr}};
    }

    variant_page upper_page {pg->read_for_write(page_id), pg};
    upper_page.init();

    if (next_page()) {
        variant_page page {pg->read_for_write(next_page()), pg};
        page.prev_page_ref() = page_id;
    }
    upper_page.next_page_ref() = next_page();
    upper_page.prev_page_ref() = cur_id;
    next_page_ref() = page_id;

    int to_move = used_size() / 2, moved = 0;
    char* dest_addr = upper_page.buf + PAGE_SIZE;
    uint16_t* dest_slots_ptr = upper_page.slots();
    for (int i = size() - 1; i >= PAGE_BLOCK_MIN_NUM / 2; --i) {
        char* src_addr = buf + slots()[i];
        block_header* src_header = (block_header*)src_addr;

        int size_req = src_header->size + slot_size();
        if (to_move - size_req < 0 && upper_page.size() >= PAGE_BLOCK_MIN_NUM) {
            break;
        }

        // mov data
        dest_addr -= src_header->size;
        dest_slots_ptr[0] = dest_addr - upper_page.buf;
        ++dest_slots_ptr;
        std::memcpy(dest_addr, src_addr, src_header->size);

        // change the counter
        --size_ref();
        ++upper_page.size_ref();
        free_size_ref()            += size_req;
        upper_page.free_size_ref() -= size_req;
        set_freeblock(slots()[i]);
        to_move -= size_req;
        moved   += size_req;
    }
    std::reverse(upper_page.slots(), upper_page.slots() + upper_page.size());
    upper_page.tail_max_ref() = moved;

    return {page_id, upper_page};
}

bool variant_page::merge(variant_page page, int cur_id) {
    int space_request = PAGE_SIZE - page.free_size() - header_size();
    if (space_request > free_size()) {
        return false;
    }

    next_page_ref() = page.next_page();
    if (next_page()) {
        variant_page page { pg->read_for_write(next_page()), pg };
        page.prev_page_ref() = cur_id;
    }

    // clear page firstly
    defragment();
    uint16_t* src_slots_ptr  = page.slots();
    uint16_t* dest_slots_ptr = slots() + size();
    char* dest_data = buf + PAGE_SIZE - tail_max();
    for (int i = 0, t = page.size(); i < t; ++i) {
        char* src = page.buf + src_slots_ptr[i];
        int sz = reinterpret_cast<block_header*>(src)->size;
        dest_data -= sz;
        std::memcpy(dest_data, src, sz);
        dest_slots_ptr[i] = dest_data - buf;
        tail_max_ref() += sz;
    }

    // change counter
    size_ref() += page.size();
    free_size_ref() -= space_request;

    return true;
}
