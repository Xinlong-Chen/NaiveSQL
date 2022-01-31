#pragma once

#include <cassert>
#include <cstring>

#include "common_defs.h"

class file_id_manager {
private:
    int free_num, free[MAX_FILE_ID];
    char used[MAX_FILE_ID];

public:
    file_id_manager() {
        free_num = MAX_FILE_ID;
        for (short i = 0; i != MAX_FILE_ID; ++i) {
            free[i] = MAX_FILE_ID - i;
        }
        std::memset(used, 0, sizeof used);
    }

    // 1 -> MAX_FILE_ID - 1
    int allocate() {
        if (free_num > 1) {
            int id = free[--free_num];
            used[id] = 1;
            return id;
        } else {
            return 0;
        }
    }

    void deallocate(int fid) {
        if (fid < 1 || fid >= MAX_FILE_ID) {
            return;
        }

        if (used[fid]) {
            free[free_num++] = fid;
        }
        used[fid] = 0;
    }

    bool is_used(int fid) const {
        return used[fid];
    }
};