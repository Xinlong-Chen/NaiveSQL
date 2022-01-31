#pragma once

#include <cassert>
#include <cstring>

#include "common_defs.h"

class lru_replacer {
private:
    short head;
    // use an array to simulate a list
    struct node_t {
        short prev, next;
    } *nodes;

public:
    lru_replacer() : head(0), 
                      nodes(new node_t[PAGE_CACHE_CAPACITY]){
        for (short i = 0; i != PAGE_CACHE_CAPACITY; ++i) {
            nodes[i].next = (i + 1 == PAGE_CACHE_CAPACITY) ? 0 : i + 1;
            nodes[i].prev = i ? i - 1 : PAGE_CACHE_CAPACITY - 1;
        }
    }

    ~lru_replacer() { delete[] nodes; }

public:
    void access(int id) {
        assert(0 <= id && id < PAGE_CACHE_CAPACITY);
        if (id == head) {
            return ;
        }

        // remove a node
        nodes[nodes[id].prev].next = nodes[id].next;
        nodes[nodes[id].next].prev = nodes[id].prev;

        // insert
        nodes[nodes[head].prev].next = id;
        nodes[id].next = head;
        nodes[id].prev = nodes[head].prev;
        nodes[head].prev = id;

        head = id;
    }

    short last() const { return nodes[head].prev; }
};