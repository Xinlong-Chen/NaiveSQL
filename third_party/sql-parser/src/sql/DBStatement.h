#ifndef SQLPARSER_DB_STATEMENT_H
#define SQLPARSER_DB_STATEMENT_H

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {

enum DBType { kUseDB, kCreateDB, kDropDB };

// Represents SQL DB statements.
// Example "use xxx;"
struct DBStatement : SQLStatement {
  DBStatement(DBType type);
  ~DBStatement() override;

  DBType type;
  char* schema;
};

}  // namespace hsql
#endif
