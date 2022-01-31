#include "buffer_manager.h"

#include <cstring>

inline bool file_exists(const char* filename);

buffer_manager::buffer_manager() {
    std::memset(dirty, 0, sizeof dirty);
    std::memset(index2page, 0, sizeof index2page);
}

buffer_manager::~buffer_manager() {
    for (int i = 1; i < MAX_FILE_ID; ++i) {
        if (fm.is_used(i)) {
            close(i);
        }
    }
}

int buffer_manager::open(const char* filename) {
    // allocate file id and open it
    int fid = fm.allocate();
    if (fid == 0) { 
        return 0;
    }
    
    bool exists = file_exists(filename);
    FILE *f = std::fopen(filename, exists ? "rb+" : "wb+");
    if (!f) return 0;

    // setup file header
    page_fs_header_t header;
    if (!exists) {
        // new a file, set a header
        header.page_num = 0;
        header.first_freepage = 0;
        std::memset(tmp_buffer, 0, PAGE_SIZE);
        std::memcpy(tmp_buffer, &header, sizeof header);
        std::fwrite(tmp_buffer, PAGE_SIZE, 1, f);
    } else {
        std::fread(&header, sizeof header, 1, f);
    }

    files[fid] = f;
    file_info[fid] = header;
    return fid;
}

void buffer_manager::close(int file_id) {
    writeback(file_id);
    fm.deallocate(file_id);
    std::fclose(files[file_id]);
    files[file_id] = nullptr;
    file_info[file_id] = {0, 0};
}

void buffer_manager::writeback(int file_id) {
    if (file_id < 1) {
        return ;
    }
    FILE *file = files[file_id];
    for (int i = 0; i != PAGE_CACHE_CAPACITY; ++i) {
        file_page_t info = index2page[i];
        if (info.first == file_id && dirty[i]) {
            std::fseek(file, (long)PAGE_SIZE * info.second, SEEK_SET);
            std::fwrite(buffer + i * PAGE_SIZE, PAGE_SIZE, 1, file);
            page2index.erase(page2index.find(info));
            index2page[i] = {0, 0};
        }
    }

    std::fseek(file, 0, SEEK_SET);
    std::fwrite(file_info + file_id, sizeof(page_fs_header_t), 1, file);
}

// page_id >= 1
int buffer_manager::allocate(int file_id) {
    if (file_id <= 0) {
        return 0;
    }
    page_fs_header_t &info = file_info[file_id];
    int page_id;
    if (info.first_freepage == 0) {
        page_id = ++(info.page_num);
        std::memset(tmp_buffer, 0, PAGE_SIZE);
        std::fseek(files[file_id], 0, SEEK_END);
        std::fwrite(tmp_buffer, PAGE_SIZE, 1, files[file_id]);
        read(file_id, page_id);
    } else {
        page_id = info.first_freepage;
        const char* data = read(file_id, info.first_freepage);
        info.first_freepage = reinterpret_cast<const int*>(data)[1];
    }

    return page_id;
}

void buffer_manager::deallocate(int file_id, int page_id) {
    if (file_id == 0 || page_id == 0) {
        return;
    }
    page_fs_header_t &info = file_info[file_id];
    char *page_buf = read_for_write(file_id, page_id);
    int data[2] = {PAGE_FREEBLOCK, info.first_freepage};
    std::memcpy(page_buf, data, sizeof data);
    info.first_freepage = page_id;
}

char* buffer_manager::read(int file_id, int page_id, int& index) {
    if (file_id == 0) {
        return nullptr;
    }
    file_page_t key = {file_id, page_id};
    auto iter = page2index.find(key);
    if (iter == page2index.end()) { // not in cache
        free_last_cache();
        index = replacer.last();
        replacer.access(index);
        dirty[index] = 0;
        page2index[key] = index;
        index2page[index] = key;

        std::fseek(files[file_id], (long)PAGE_SIZE * page_id, SEEK_SET);
        std::fread(buffer + index * PAGE_SIZE, PAGE_SIZE, 1, files[file_id]);
    } else { // in cache
        replacer.access(index = iter->second);
    }
    return buffer + index * PAGE_SIZE;
}

void buffer_manager::mark_dirty(int file_id, int page_id) {
    dirty[page2index[file_page_t(file_id, page_id)]] = 1;
}

void buffer_manager::write_page_to_file(int file_id, int page_id,  const char* data) {
    std::fseek(files[file_id], (long)PAGE_SIZE * page_id, SEEK_SET);
    std::fwrite(data, PAGE_SIZE, 1, files[file_id]);
}

void buffer_manager::free_last_cache() {
    // the remove element
    int last = replacer.last();
    file_page_t key = index2page[last];
    if (key.first != 0) { // file_id != 0
        if (dirty[last]) {
            write_page_to_file(key.first, key.second, buffer + last * PAGE_SIZE);
        }
        page2index.erase(page2index.find(key));
        index2page[last] = {0, 0};
    }
}


inline bool file_exists(const char* filename) {
    FILE *f = std::fopen(filename, "r");
    if (f)  {
        std::fclose(f);
    }
    return f;
}

