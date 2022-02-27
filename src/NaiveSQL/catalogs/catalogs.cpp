#include "catalogs.h"

#include <cstdio>
#include <cassert>
#include <cstring>
#include <fstream>
#include <string>

#include "common/common.h"
#include "common/logger.h"

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
    std::string filename = naivesql::getDBCatalogFileName(basedir, db_name);;
    std::ifstream ifs(filename, std::ios::binary);
    ifs.read((char*)&info, sizeof(info));
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
    
    std::string filename = naivesql::getDBCatalogFileName(basedir, db_name);;
    
    if (std::remove(filename.c_str()) != 0) {
        LOG_ERROR("remove %s fail", filename.c_str());
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
    std::string filename = naivesql::getDBCatalogFileName(basedir, info.db_name);
    std::ofstream ofs(filename, std::ios::binary);
    ofs.write((char*)&info, sizeof(info));
}
