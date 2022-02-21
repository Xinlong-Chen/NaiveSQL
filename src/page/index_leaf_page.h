#pragma once

#include "page/fixed_page.h"

template<typename T>
class index_leaf_page : public fixed_page<T> {
public:
    using fixed_page<T>::fixed_page;
    void init(int field_size) {
        fixed_page<T>::init(field_size);
        this->magic_ref() = PAGE_INDEX_LEAF;
    }

    std::pair<int, index_leaf_page> split(int cur_id) {
        auto pw = fixed_page<T>::split(cur_id);
        return { pw.first, 
            *reinterpret_cast<index_leaf_page*>(&pw.second)
        };
    }

};