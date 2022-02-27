#include "runner.h"

#include <iostream>
#include <unistd.h>

#include "common/logger.h"

#include "sql_runner.h"
#include "catalogs/catalogs.h"

#include "sql-parser/src/sql/DBStatement.h"

void Runner::createDB(std::string dbname)
{    
    catalogs::get_instance()->create(dbname);
}

void Runner::useDB(std::string dbname)
{
    catalogs::get_instance()->use(dbname);
}

void Runner::dropDB(std::string dbname)
{
    catalogs::get_instance()->drop(dbname);
}

void Runner::run(const hsql::SQLStatement *stmt)
{
    if (stmt->isType(hsql::kStmtDB))
    {
        const auto *db_stmt = static_cast<const hsql::DBStatement *>(stmt);
        switch (db_stmt->type)
        {
        case hsql::kCreateDB:
            this->createDB(db_stmt->schema);
            break;
        case hsql::kDropDB:
            this->dropDB(db_stmt->schema);
            break;
        case hsql::kUseDB:
            this->useDB(db_stmt->schema);
            break;
        default:
            // printf()
            break;
        }
        return;
    }
    // run other sql
}
