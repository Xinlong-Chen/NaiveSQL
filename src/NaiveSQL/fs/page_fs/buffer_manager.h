#pragma once

#include <utility>
#include <cstdio>
#include <unordered_map>

#include "common_defs.h"
#include "file_id_manager.h"
#include "lru_replacer.h"

/**
 * The first page is file info, not counted into `page_num`
 * `first_freepage` indicates the first freepage if it is not zero
 * and there is no freepage if it is zero
 */
struct page_fs_header_t {
    int page_num;
    int first_freepage;
};

class buffer_manager {
private:
    // a hash functor
    struct pair_hash {
        template<typename T1, typename T2>
        std::size_t operator() (const std::pair<T1, T2> &p) const {
            return (std::hash<T1>{}(p.first)) ^ (std::hash<T2>{}(p.second) << 1);
        }
    };
private:
    // cache
    lru_replacer replacer;
    char dirty[PAGE_CACHE_CAPACITY];

    char buffer[PAGE_CACHE_CAPACITY * PAGE_SIZE];
    char tmp_buffer[PAGE_SIZE];

    // file_id, page_id
    using file_page_t = std::pair<int, int>;
    std::unordered_map<file_page_t, int, pair_hash> page2index;

    // cache is used if 'first' != 0
    file_page_t index2page[PAGE_CACHE_CAPACITY];

    // file
    file_id_manager fm;
    FILE *files[MAX_FILE_ID];
    page_fs_header_t file_info[MAX_FILE_ID];

private:
    // index will be changed in this function
    char* read(int file_id, int page_id, int &index);
    void free_last_cache();
    void write_page_to_file(int file_id, int page_id, const char* data);

    // private for singleton
    buffer_manager();
    
public:
    ~buffer_manager();

    int open(const char *filename);
    void close(int file_id);
    void writeback(int file_id);

    // allocate a new page
    int allocate(int file_id);
    // free an existed page
    void deallocate(int file_id, int page_id);

    void mark_dirty(int file_id, int page_id);

    char* read(int file_id, int page_id) {
        int id = 0;
        return read(file_id, page_id, id);
    }

    char* read_for_write(int file_id, int page_id) {
        int index = 0;
        char *buf = read(file_id, page_id, index);
        dirty[index] = 1;
        return buf;
    }

public:
    // singleton
    static buffer_manager* get_instance() {
        static buffer_manager bm;
        return &bm;
    }
};