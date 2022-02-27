#pragma once

#include <string>

namespace naivesql
{
    std::string getDBCatalogFileName(const std::string& basedir, 
                    const std::string& db)
    {
        return basedir + "/" + db + ".naivesql";
    }

    std::string getTableDefFileName(const std::string& basedir, 
                    const std::string& db, const std::string table_name) {
        return basedir + "/" + db + "_" + table_name + ".def";
    }

    std::string getTableDataFileName(const std::string& basedir,
                    const std::string& db, const std::string table_name) {
        return basedir + "/" + db + "_" + table_name + ".data";
    }
} // namespace naivesql
