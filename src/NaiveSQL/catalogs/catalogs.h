#pragma once

#include <string>
#include <cstring>

#include "common_defs.h"


class table_manager;

class catalogs {
private:
    struct database_info
    {
        int table_num;
        char db_name[MAX_NAME_LEN];
        char table_name[MAX_TABLE_NUM][MAX_NAME_LEN];
    } info;
    table_manager* tables[MAX_TABLE_NUM];
    bool opened;
    std::string basedir;

public:
    ~catalogs();
    bool is_opened() { return opened; }

    // database operator
    void use(const std::string db_name);
    void create(const std::string db_name);
    void drop(const std::string db_name);
    void show_tables();
    
    // table operator
    void cretate_table();
    void drop_table();
    void get_table();
    
    // index operator
    void create_index();
    void drop_index();
private:
    void close();
    void flush_header();
    void drop_db_helper(const std::string db_name);

private:
    catalogs() : opened(false) { }
    
    // attention: exits a cast !
    std::string getDBCatalogFileName(const std::string db)
    {
        return basedir + "/" + db + ".naivesql";
    }

    std::string getTableDefFileName(const std::string db, const std::string table_name) {
        return basedir + "/" + db + "_" + table_name + ".def";
    }

    std::string getTableDataFileName(const std::string db, const std::string table_name) {
        return basedir + "/" + db + "_" + table_name + ".data";
    }

public:
    static catalogs* get_instance() {
        static catalogs db;
        return &db;
    }

    void init(const std::string& basedir) {
        this->basedir = basedir;
    }
};