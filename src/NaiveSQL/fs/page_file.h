#pragma once

#include "page_fs/buffer_manager.h"

class page_file {
private:
    int fid;
public:
    page_file() : fid(0) { };
    page_file(const char* filename) : fid(0) { open(filename); }
    ~page_file() { close(); }

public:
    // suport that one file open than one time.
    bool open(const char* filename) {
        buffer_manager* bm = buffer_manager::get_instance();
        if (fid) {
            bm->close(fid);
        }
        fid = bm->open(filename);
        return fid;
    }

    void close() {
        if (fid) {
            buffer_manager::get_instance()->close(fid);
        }
        fid = 0;
    }

    void flush() {
        buffer_manager::get_instance()->writeback(fid);
    }

    int new_page() {
        return buffer_manager::get_instance()->allocate(fid);
    }

    void free_page(int page_id) {
        buffer_manager::get_instance()->deallocate(fid, page_id);
    }

    char* read(int page_id) {
        return buffer_manager::get_instance()->read(fid, page_id);
    }

    char* read_for_write(int page_id) {
        return buffer_manager::get_instance()->read_for_write(fid, page_id);
    }

    void mark_dirty(int page_id) {
        buffer_manager::get_instance()->mark_dirty(fid, page_id);
    }
};