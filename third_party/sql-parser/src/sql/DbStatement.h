#ifndef SQLPARSER_DB_STATEMENT_H
#define SQLPARSER_DB_STATEMENT_H

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {

enum DbType { kCreateDB, kUseDB, kDropDB };

// Represents SQL db statements.
// Example "create table xxx;"
struct DbStatement : SQLStatement {
  DbStatement(DbType type);
  ~DbStatement() override;

  DbType type;
  char* dbname;
};

}  // namespace hsql
#endif
