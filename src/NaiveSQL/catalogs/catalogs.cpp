#include "catalogs.h"

#include <cstdio>
#include <cassert>
#include <cstring>
#include <fstream>
#include <string>

    
catalogs::~catalogs() {
    if (is_opened()) {
        close();
    }
}

void catalogs::use(const std::string db_name) {
    if (is_opened()) {
        if (strcmp(db_name.c_str(), info.db_name) == 0) { // reopen, do noting
            return;
        }
        close();
    }
    std::string filename = getDBCatalogFileName(db_name);
    std::ifstream ifs(filename, std::ios::binary);
    ifs.read((char*)&info, sizeof(info));
    printf ("use %s\n",info.db_name);
    // TODO: open table manager

    opened = true;
}

void catalogs::create(const std::string db_name) {
    if (is_opened()) {
        close();
    }
    // TODO: check same database?
    std::memset(&info,  0, sizeof(info));
    std::memset(tables, 0, sizeof(tables));
    std::strncpy(info.db_name, db_name.c_str(), MAX_NAME_LEN);
    opened = true;
    // TODO: lazy flush?
    flush_header();
}

void catalogs::drop(const std::string db_name) {
    // TODO: is database exits?
    
    // judge self
    if (is_opened() && strcmp(info.db_name, db_name.c_str()) == 0) {
        drop_db_helper(db_name);
        opened = false;
        return;
    }

    std::string tmp_db;
    if (is_opened()) {
        tmp_db = info.db_name;
        close();
    }

    // drop a close database, must open it and read data
    this->use(db_name);
    
    drop_db_helper(db_name);
    opened = false;

    if (tmp_db.length() != 0) {
        this->use(tmp_db);
    }
}

void catalogs::drop_db_helper(const std::string db_name) {
    //TODO: drop table
    info.table_num = 0;

    // remove header
    std::string filename = getDBCatalogFileName(db_name);
    printf("remove file: %s\n", filename.c_str());
    
    if (std::remove(filename.c_str()) != 0) {
        printf ("remove error");
    }
}

/**
 * @brief write back database header and data
 * 
 */
void catalogs::close() {
    flush_header();
    //TODO: flush table
    opened = false;
}


void catalogs::flush_header() {
    assert(is_opened());
    std::string filename = getDBCatalogFileName(info.db_name);
    std::ofstream ofs(filename, std::ios::binary);
    ofs.write((char*)&info, sizeof(info));
}
