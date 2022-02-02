#pragma once

#include <cstring>
#include <utility>
#include <cassert>
#include <stdint.h>

#include "page/pager.h"
#include "page/page_def.h"

class variant_page : public general_page {
private:
    // in-page linklist-node
    struct free_block_header {
        uint16_t size;
        uint16_t next;
    };
public:
    // will return to user, so it is public
    struct block_header {
        uint16_t size; // block size (overflow_page's size is not included)
        int ov_page;   // overflow page
    };
public:
    static constexpr int FREE_BLOCK_HEADER_SIZE = sizeof(free_block_header);
    static constexpr int BLOCK_HEADER_SIZE      = sizeof(block_header);

private:
    char* allocate(int sz);
    // merge free block and rebuilt page
    void defragment();
    void set_freeblock(int offset);
    void erase(int pos, bool is_erase_overflow);
    
    // header, data pointer
    std::pair<block_header, char*> get_block(int id) {
        assert(0 <= id && id < size());
        char* addr = buf + slots()[id];
        return { *(block_header*)addr, addr + BLOCK_HEADER_SIZE };
    }
public:
    using general_page::general_page;

    PAGE_FIELD_REF(magic,       uint16_t, 0);  // page type
    PAGE_FIELD_REF(free_block,  uint16_t, 2);  // pointer to the first free slot
    PAGE_FIELD_REF(free_size,   uint16_t, 4);  // size of free space
    PAGE_FIELD_REF(size,        uint16_t, 6);  // number of items
    PAGE_FIELD_REF(tail_max,    uint16_t, 8);  // biggest distance from back to front
    PAGE_FIELD_REF(next_page,   uint32_t, 10);
    PAGE_FIELD_REF(prev_page,   uint32_t, 14);
    
    PAGE_FIELD_PTR(slots,       uint16_t, 18); // slots -> point to used block
    
    static constexpr int header_size() { return 18; }
    static constexpr int slot_size()   { return 2; }

public:
    int used_size() {
        return PAGE_SIZE - free_size() - size() * slot_size() - header_size();
    } 

    // same as fixed_page
    // simple b_tree code
    void init(int = 0);
    void erase(int pos) { erase(pos, true); }
    bool insert(int pos, const char* data, int data_size);
    void move_from(variant_page page, int src_pos, int dest_pos);

public:
    // used for b+ tree
    bool underflow() {
        return free_size() > PAGE_FREE_SPACE_MAX ||
            size() < PAGE_BLOCK_MAX_SIZE / 2;
    }

    bool underflow_if_remove(int pos) {
        assert(0 <= pos && pos < size());
        int free_size_if_remove = free_size() - get_block(pos).first.size - slot_size();
        return free_size_if_remove > PAGE_FREE_SPACE_MAX ||
            size() - 1 < PAGE_BLOCK_MIN_NUM / 2;
    }

    /* Split the (full) page into two parts, each of which has at least
	 * (PAGE_BLOCK_MIN_NUM / 2) used blocks, and the upper part of the
	 * splited page id is returned. If the block requirement cannnot be
	 * satisfied, 0 is returned. The free_size of the two parts is
	 * as close as possible. */
    std::pair<int, variant_page> split(int cur_id);
    bool merge(variant_page page, int cur_id);
    
};