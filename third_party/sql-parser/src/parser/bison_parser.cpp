/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* Copy the first part of user declarations.  */
#line 2 "bison_parser.y" /* yacc.c:339  */

  // clang-format on
  /**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
  /*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

  using namespace hsql;

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 104 "bison_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 38 "bison_parser.y" /* yacc.c:355  */

  // clang-format on
  // %code requires block

#include "../SQLParserResult.h"
#include "../sql/statements.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 166 "bison_parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_INTEGER = 279,
    SQL_NATURAL = 280,
    SQL_PREPARE = 281,
    SQL_PRIMARY = 282,
    SQL_SCHEMAS = 283,
    SQL_CHARACTER_VARYING = 284,
    SQL_REAL = 285,
    SQL_DECIMAL = 286,
    SQL_SMALLINT = 287,
    SQL_SPATIAL = 288,
    SQL_VARCHAR = 289,
    SQL_VIRTUAL = 290,
    SQL_DESCRIBE = 291,
    SQL_BEFORE = 292,
    SQL_COLUMN = 293,
    SQL_CREATE = 294,
    SQL_DELETE = 295,
    SQL_DIRECT = 296,
    SQL_DOUBLE = 297,
    SQL_ESCAPE = 298,
    SQL_EXCEPT = 299,
    SQL_EXISTS = 300,
    SQL_EXTRACT = 301,
    SQL_CAST = 302,
    SQL_FORMAT = 303,
    SQL_GLOBAL = 304,
    SQL_HAVING = 305,
    SQL_IMPORT = 306,
    SQL_INSERT = 307,
    SQL_ISNULL = 308,
    SQL_OFFSET = 309,
    SQL_RENAME = 310,
    SQL_SCHEMA = 311,
    SQL_SELECT = 312,
    SQL_SORTED = 313,
    SQL_USE = 314,
    SQL_TABLES = 315,
    SQL_UNIQUE = 316,
    SQL_UNLOAD = 317,
    SQL_UPDATE = 318,
    SQL_VALUES = 319,
    SQL_AFTER = 320,
    SQL_ALTER = 321,
    SQL_CROSS = 322,
    SQL_DELTA = 323,
    SQL_FLOAT = 324,
    SQL_GROUP = 325,
    SQL_INDEX = 326,
    SQL_INNER = 327,
    SQL_LIMIT = 328,
    SQL_LOCAL = 329,
    SQL_MERGE = 330,
    SQL_MINUS = 331,
    SQL_ORDER = 332,
    SQL_OUTER = 333,
    SQL_RIGHT = 334,
    SQL_TABLE = 335,
    SQL_UNION = 336,
    SQL_USING = 337,
    SQL_WHERE = 338,
    SQL_CALL = 339,
    SQL_CASE = 340,
    SQL_CHAR = 341,
    SQL_COPY = 342,
    SQL_DATE = 343,
    SQL_DATETIME = 344,
    SQL_DESC = 345,
    SQL_DROP = 346,
    SQL_ELSE = 347,
    SQL_FILE = 348,
    SQL_FROM = 349,
    SQL_FULL = 350,
    SQL_HASH = 351,
    SQL_HINT = 352,
    SQL_INTO = 353,
    SQL_JOIN = 354,
    SQL_LEFT = 355,
    SQL_LIKE = 356,
    SQL_LOAD = 357,
    SQL_LONG = 358,
    SQL_NULL = 359,
    SQL_PLAN = 360,
    SQL_SHOW = 361,
    SQL_TEXT = 362,
    SQL_THEN = 363,
    SQL_TIME = 364,
    SQL_VIEW = 365,
    SQL_WHEN = 366,
    SQL_WITH = 367,
    SQL_ADD = 368,
    SQL_ALL = 369,
    SQL_AND = 370,
    SQL_ASC = 371,
    SQL_END = 372,
    SQL_FOR = 373,
    SQL_INT = 374,
    SQL_KEY = 375,
    SQL_NOT = 376,
    SQL_OFF = 377,
    SQL_SET = 378,
    SQL_TOP = 379,
    SQL_AS = 380,
    SQL_BY = 381,
    SQL_IF = 382,
    SQL_IN = 383,
    SQL_IS = 384,
    SQL_OF = 385,
    SQL_ON = 386,
    SQL_OR = 387,
    SQL_TO = 388,
    SQL_ARRAY = 389,
    SQL_CONCAT = 390,
    SQL_ILIKE = 391,
    SQL_SECOND = 392,
    SQL_MINUTE = 393,
    SQL_HOUR = 394,
    SQL_DAY = 395,
    SQL_MONTH = 396,
    SQL_YEAR = 397,
    SQL_SECONDS = 398,
    SQL_MINUTES = 399,
    SQL_HOURS = 400,
    SQL_DAYS = 401,
    SQL_MONTHS = 402,
    SQL_YEARS = 403,
    SQL_INTERVAL = 404,
    SQL_TRUE = 405,
    SQL_FALSE = 406,
    SQL_TRANSACTION = 407,
    SQL_BEGIN = 408,
    SQL_COMMIT = 409,
    SQL_ROLLBACK = 410,
    SQL_EQUALS = 411,
    SQL_NOTEQUALS = 412,
    SQL_LESS = 413,
    SQL_GREATER = 414,
    SQL_LESSEQ = 415,
    SQL_GREATEREQ = 416,
    SQL_NOTNULL = 417,
    SQL_UMINUS = 418
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 98 "bison_parser.y" /* yacc.c:355  */

  // clang-format on
  bool bval;
  char* sval;
  double fval;
  int64_t ival;
  uintmax_t uval;

  // statements
  hsql::AlterStatement* alter_stmt;
  hsql::CreateStatement* create_stmt;
  hsql::DeleteStatement* delete_stmt;
  hsql::DropStatement* drop_stmt;
  hsql::ExecuteStatement* exec_stmt;
  hsql::ExportStatement* export_stmt;
  hsql::ImportStatement* import_stmt;
  hsql::InsertStatement* insert_stmt;
  hsql::PrepareStatement* prep_stmt;
  hsql::SelectStatement* select_stmt;
  hsql::ShowStatement* show_stmt;
  hsql::DBStatement* db_stmt;
  hsql::SQLStatement* statement;
  hsql::TransactionStatement* transaction_stmt;
  hsql::UpdateStatement* update_stmt;

  hsql::Alias* alias_t;
  hsql::AlterAction* alter_action_t;
  hsql::ColumnDefinition* column_t;
  hsql::ColumnType column_type_t;
  hsql::ConstraintType column_constraint_t;
  hsql::DatetimeField datetime_field;
  hsql::DropColumnAction* drop_action_t;
  hsql::Expr* expr;
  hsql::GroupByDescription* group_t;
  hsql::ImportType import_type_t;
  hsql::JoinType join_type;
  hsql::LimitDescription* limit;
  hsql::OrderDescription* order;
  hsql::OrderType order_type;
  hsql::SetOperation* set_operator_t;
  hsql::TableConstraint* table_constraint_t;
  hsql::TableElement* table_element_t;
  hsql::TableName table_name;
  hsql::TableRef* table;
  hsql::UpdateClause* update_t;
  hsql::WithDescription* with_description_t;

  std::vector<char*>* str_vec;
  std::vector<hsql::ConstraintType>* column_constraint_vec;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;

  std::pair<int64_t, int64_t>* ival_pair;

#line 402 "bison_parser.cpp" /* yacc.c:355  */
};

typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 432 "bison_parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   874

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  181
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  121
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  556

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   418

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   170,     2,     2,
     175,   176,   168,   166,   179,   167,   177,   169,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   178,
     159,   156,   160,   180,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   173,     2,   174,   171,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   157,   158,   161,   162,   163,   164,   165,   172
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   296,   296,   315,   321,   328,   332,   336,   337,   338,
     339,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   356,   357,   359,   363,   368,   372,   382,   383,   384,
     386,   386,   392,   398,   400,   404,   415,   421,   428,   443,
     448,   449,   455,   467,   468,   473,   485,   489,   493,   504,
     517,   525,   532,   539,   548,   549,   551,   555,   560,   561,
     563,   568,   569,   570,   571,   572,   573,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   587,   588,   590,   591,
     592,   594,   595,   597,   601,   606,   607,   608,   609,   611,
     612,   620,   626,   632,   638,   644,   645,   652,   658,   660,
     670,   677,   688,   695,   703,   704,   711,   718,   722,   727,
     737,   741,   745,   757,   757,   759,   760,   769,   770,   772,
     782,   793,   798,   802,   806,   811,   812,   814,   824,   825,
     827,   829,   830,   832,   834,   835,   837,   842,   844,   845,
     847,   848,   850,   854,   859,   861,   862,   863,   867,   868,
     870,   871,   872,   873,   874,   875,   880,   884,   889,   890,
     892,   896,   901,   909,   909,   909,   909,   909,   911,   912,
     912,   912,   912,   912,   912,   912,   912,   913,   913,   917,
     917,   919,   920,   921,   922,   923,   925,   925,   926,   927,
     928,   929,   930,   931,   932,   933,   934,   936,   937,   939,
     940,   941,   942,   946,   947,   948,   949,   951,   952,   954,
     955,   957,   958,   959,   960,   961,   962,   963,   965,   966,
     968,   970,   972,   973,   974,   975,   976,   977,   979,   980,
     981,   982,   983,   984,   986,   986,   988,   990,   992,   994,
     995,   996,   997,   999,   999,   999,   999,   999,   999,   999,
    1001,  1003,  1004,  1006,  1007,  1009,  1011,  1013,  1024,  1028,
    1039,  1071,  1080,  1080,  1087,  1087,  1089,  1089,  1096,  1100,
    1105,  1113,  1119,  1123,  1128,  1129,  1131,  1131,  1133,  1133,
    1135,  1136,  1138,  1138,  1144,  1144,  1146,  1148,  1152,  1157,
    1167,  1174,  1182,  1198,  1199,  1200,  1201,  1202,  1203,  1204,
    1205,  1206,  1207,  1209,  1215,  1215,  1218,  1222
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS",
  "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "SPATIAL", "VARCHAR",
  "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT",
  "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "CAST", "FORMAT",
  "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME",
  "SCHEMA", "SELECT", "SORTED", "USE", "TABLES", "UNIQUE", "UNLOAD",
  "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP",
  "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER",
  "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR",
  "COPY", "DATE", "DATETIME", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG",
  "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH",
  "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF",
  "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO",
  "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS", "YEARS",
  "INTERVAL", "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT",
  "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "db_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_list", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "datetime_field_plural", "duration_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "date_literal", "interval_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "table_alias", "opt_table_alias", "alias", "opt_alias",
  "opt_with_clause", "with_clause", "with_description_list",
  "with_description", "join_clause", "opt_join_type", "join_condition",
  "opt_semicolon", "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,    61,   411,   412,    60,
      62,   413,   414,   415,   416,   417,    43,    45,    42,    47,
      37,    94,   418,    91,    93,    40,    41,    46,    59,    44,
      63
};
# endif

#define YYPACT_NINF -440

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-440)))

#define YYTABLE_NINF -305

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-305)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     541,    27,    63,   168,   192,    63,   102,    81,   113,   105,
     214,    63,   167,    63,   158,    23,   229,    87,    87,    87,
     256,    86,  -440,   166,  -440,   166,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,   -23,
    -440,   286,   119,  -440,   125,   208,  -440,   325,   215,   215,
     215,    63,   338,    63,  -440,   224,  -440,   221,   -47,   351,
     221,   221,   221,    63,  -440,   233,   176,  -440,  -440,  -440,
    -440,  -440,  -440,   519,  -440,   262,  -440,  -440,   236,   -23,
     121,  -440,   132,  -440,   358,    35,   364,  -440,   248,   373,
      63,    63,   294,  -440,   285,   217,   379,   349,    63,   396,
     396,  -440,   398,    63,    63,  -440,   227,   229,  -440,   228,
     400,   392,   232,   235,  -440,  -440,  -440,   -23,   299,   288,
     -23,     5,  -440,  -440,  -440,  -440,   426,  -440,   429,  -440,
    -440,  -440,   258,   257,  -440,  -440,  -440,  -440,   279,  -440,
    -440,  -440,  -440,  -440,  -440,   390,  -440,   307,   -51,   217,
     195,  -440,   396,   436,    24,   284,   -54,  -440,  -440,   356,
     330,  -440,   330,  -440,  -440,  -440,  -440,  -440,   442,  -440,
    -440,   195,  -440,  -440,   372,  -440,  -440,   121,  -440,  -440,
     195,   372,   195,   123,  -440,  -440,   172,  -440,    35,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,    63,   447,   342,    43,   332,
      41,   283,   293,   296,   216,   327,   308,   382,  -440,   230,
      48,   354,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,   361,  -440,
    -111,   297,  -440,   195,   379,  -440,   449,  -440,  -440,   432,
    -440,  -440,   310,   -84,  -440,   394,   312,  -440,    19,     5,
     -23,   313,  -440,   138,     5,    48,   439,    17,  -440,  -440,
     321,   404,  -440,   755,   378,   324,   -31,  -440,  -440,  -440,
     342,    16,    20,   443,   172,   195,   195,    45,   -44,   326,
     382,   549,   195,   124,   328,   -78,   195,   195,   382,  -440,
     382,   -56,   331,    62,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   400,
      63,  -440,   502,    35,    48,  -440,   221,   338,    35,  -440,
     442,    12,   294,  -440,   195,  -440,   505,  -440,  -440,  -440,
    -440,   195,  -440,  -440,  -440,  -440,   195,   195,   436,   396,
    -440,   334,  -440,   353,  -440,   355,  -440,  -440,   360,  -440,
    -440,  -440,  -440,   362,  -440,    33,   363,   436,  -440,    43,
    -440,  -440,   195,  -440,  -440,   366,   435,    47,   -57,   -35,
     195,   195,  -440,   443,   438,   -15,  -440,  -440,  -440,   421,
     498,   592,   382,   368,   230,  -440,   448,   367,   592,   592,
     592,   592,   607,   607,   607,   607,   124,   124,   -86,   -86,
     -86,     8,   380,  -440,  -440,   103,   543,  -440,   109,  -440,
     342,  -440,   365,  -440,   381,  -440,    28,  -440,   477,  -440,
    -440,  -440,    48,    48,   145,  -440,   555,   558,  -440,   559,
     560,   562,  -440,   452,  -440,  -440,   465,  -440,    33,  -440,
     436,   146,  -440,   147,  -440,   195,   755,   195,   195,  -440,
     134,    42,   397,  -440,   382,   592,   230,   399,   159,  -440,
    -440,  -440,  -440,  -440,   403,   475,  -440,  -440,  -440,   506,
     508,   509,   484,    12,   573,  -440,  -440,  -440,   462,  -440,
    -440,   413,   160,   414,   415,   418,  -440,  -440,  -440,   164,
    -440,  -440,   -36,   419,    48,   152,  -440,   195,  -440,   549,
     420,   173,  -440,  -440,    28,    12,  -440,  -440,  -440,    12,
     374,   422,   195,  -440,  -440,   595,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,    48,  -440,  -440,  -440,  -440,   384,   436,
     -24,   427,   423,   195,   177,   195,  -440,  -440,    22,    48,
    -440,  -440,    48,   428,   433,  -440
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    31,    31,
       0,   305,     3,    22,    20,    22,    19,     9,    10,     8,
       7,    12,    17,    18,    14,    15,    13,    16,    11,     0,
     284,     0,   272,   101,    34,     0,    45,     0,    55,    55,
      55,     0,     0,     0,    46,     0,   271,    96,     0,     0,
      96,    96,    96,     0,    43,     0,   286,   287,    30,    27,
      29,    28,     1,   285,     2,     0,     6,     5,   149,     0,
     110,   111,   141,    93,     0,   159,     0,    47,     0,   275,
       0,     0,   135,    38,     0,   105,     0,     0,     0,     0,
       0,    48,     0,     0,     0,    44,     0,     0,     4,     0,
       0,   129,     0,     0,   123,   124,   122,     0,   126,     0,
       0,   155,   273,   250,   253,   255,     0,   256,     0,   251,
     252,   261,     0,   158,   160,   243,   244,   245,   254,   246,
     247,   248,   249,    33,    32,     0,   274,     0,     0,   105,
       0,   100,     0,     0,     0,     0,   135,   107,    95,     0,
      41,    39,    41,    94,    91,    92,   289,   288,     0,   148,
     128,     0,   118,   117,   141,   114,   113,   115,   125,   121,
       0,   141,     0,     0,   119,   257,   260,    35,     0,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   258,    54,     0,     0,   285,     0,     0,
     239,     0,     0,     0,     0,     0,     0,     0,   241,     0,
     134,   163,   170,   171,   172,   165,   167,   173,   166,   186,
     174,   175,   176,   177,   169,   164,   179,   180,     0,   306,
       0,     0,   103,     0,     0,   106,     0,    97,    98,     0,
      37,    42,    25,     0,    23,   132,   130,   156,   283,   155,
       0,   140,   142,   147,   155,   151,   153,   150,   259,   161,
       0,     0,    51,     0,     0,     0,     0,    56,    58,    59,
     285,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,     0,   181,     0,     0,     0,     0,     0,   183,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,     0,   109,   108,    96,     0,     0,    21,
       0,     0,   135,   131,     0,   281,     0,   282,   162,   112,
     116,     0,   146,   145,   144,   120,     0,     0,     0,     0,
      69,     0,    71,    80,    72,     0,    67,    68,     0,    64,
      65,    70,    73,    77,    61,    82,     0,     0,    50,     0,
      53,   218,     0,   240,   242,     0,     0,     0,     0,     0,
       0,     0,   205,     0,     0,     0,   178,   168,   197,   198,
       0,   193,     0,     0,     0,   184,     0,   196,   195,   211,
     212,   213,   214,   215,   216,   217,   188,   187,   190,   189,
     191,   192,     0,    36,   307,     0,     0,    40,     0,    24,
     285,   133,   262,   264,     0,   266,   279,   265,   137,   157,
     280,   143,   154,   152,     0,    49,     0,     0,    66,     0,
       0,     0,    74,     0,    86,    87,     0,    60,    81,    83,
       0,     0,    57,     0,   209,     0,     0,     0,     0,   203,
       0,     0,     0,   236,     0,   194,     0,     0,     0,   185,
     237,   102,    99,    26,     0,     0,   301,   293,   299,   297,
     300,   295,     0,     0,     0,   278,   270,   276,     0,   127,
      52,     0,     0,     0,     0,     0,    85,    88,    84,     0,
      90,   219,     0,     0,   207,     0,   206,     0,   210,   238,
       0,     0,   201,   199,   279,     0,   296,   298,   294,     0,
     263,   280,     0,    63,    79,     0,    75,    62,    76,    89,
     220,   221,   204,   208,   202,   200,   267,   290,   302,     0,
     139,     0,     0,     0,     0,     0,   136,    78,     0,   303,
     291,   277,   138,   239,     0,   292
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -440,  -440,  -440,   535,  -440,   586,  -440,   282,  -440,   207,
    -440,  -440,  -440,  -440,   287,   -97,   453,  -440,  -440,  -440,
    -440,   196,  -440,   247,  -440,   161,  -440,  -440,  -440,  -440,
     170,  -440,  -440,   -55,  -440,  -440,  -440,  -440,  -440,  -440,
     471,  -440,  -440,   377,  -196,   -99,  -440,    99,   -77,   -46,
    -440,  -440,   -93,   341,  -440,  -440,  -440,  -143,  -440,  -440,
    -118,  -440,   289,  -440,  -440,   -16,  -272,  -440,   -42,   290,
    -150,  -199,  -440,  -440,  -440,  -440,  -440,  -440,   336,  -440,
    -440,  -440,  -440,  -440,  -151,  -440,  -440,  -440,  -440,  -440,
      78,   -68,   -91,  -440,  -440,   -96,  -440,  -440,  -440,  -440,
    -440,  -439,   114,  -440,  -440,  -440,    -1,  -440,  -440,   122,
     383,  -440,  -440,  -440,  -440,   528,  -440,  -440,  -440,  -440,
    -329
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,    23,    76,   253,   254,    24,    69,
      25,   144,    26,    27,    94,   160,   250,    28,    29,    30,
      31,    89,   276,   277,   278,   365,   442,   438,   447,   448,
     449,   279,    32,    98,    33,   247,   248,    34,    35,    36,
     154,    37,   156,   157,    38,   174,   175,   176,    81,   117,
     118,   179,    82,   171,   255,   332,   333,   151,   489,   546,
     121,   261,   262,   344,   111,   184,   256,   132,   133,   257,
     258,   221,   222,   223,   224,   225,   226,   227,   288,   228,
     229,   230,   231,   232,   201,   202,   203,   233,   234,   235,
     236,   237,   135,   136,   137,   138,   139,   140,   141,   142,
     421,   422,   423,   424,   425,    55,   426,   147,   485,   486,
     487,   338,    39,    40,    66,    67,   427,   482,   550,    74,
     240
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     220,    43,   113,   162,    46,   102,   103,   104,   161,   161,
      56,   272,    58,   245,   169,    42,   291,   134,   293,   434,
     385,   181,   335,   373,   177,   553,   545,   177,   170,   150,
     263,   335,   265,   267,    78,   268,   120,   296,   451,   123,
     124,   125,    63,   206,   520,   392,   273,    99,   380,   304,
      92,   457,    95,    41,   297,   238,   259,   458,   296,   182,
     443,   161,   105,   264,   287,   321,    42,   381,   322,   295,
     274,   347,   393,   382,   207,   297,   381,   242,   183,   296,
     538,    78,   459,    64,   370,   318,   100,   319,   241,   148,
     149,   291,   329,   324,   444,   330,   297,   159,   387,   390,
     453,   391,   164,   165,   275,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     269,   499,   468,   126,   208,   244,   210,   123,   124,   125,
     114,   260,   296,   376,   296,   377,   378,   445,    80,   127,
     530,   114,   294,   304,   336,   368,   388,   389,   369,   297,
     507,   297,    79,   484,   446,   334,   286,   296,    47,   463,
     296,   340,   296,   296,   334,   115,   395,   177,   211,   212,
     213,    44,   456,    48,   297,    51,   115,   297,   112,   297,
     297,   319,    49,   396,   128,   129,   130,   420,   374,   428,
     218,   263,   371,   465,   511,    45,   432,   433,   210,   123,
     124,   125,   116,    53,   270,   166,   375,    52,   214,   119,
     544,   126,    50,   116,    59,   131,   281,    54,   282,   210,
     123,   124,   125,   412,   474,    70,    71,   127,   342,    60,
     460,   461,    65,   210,   123,   124,   125,   266,    61,    68,
     211,   212,   213,   339,   215,    90,    91,    57,   345,   296,
     540,   506,   435,   296,   343,   134,    72,   216,   161,   304,
     134,   211,   212,   213,    73,   509,   297,   296,    62,   532,
     297,   416,   128,   129,   130,   211,   212,   213,    75,   471,
     214,   415,   188,   126,   297,   473,   418,    78,   188,    83,
     217,   218,   315,   316,   317,   318,    84,   319,   219,   127,
      85,   214,    86,   131,   126,   502,   462,   504,   505,   189,
     190,   191,   192,   193,   194,   214,   215,   467,   126,   413,
     127,   490,   500,   501,   322,   322,   334,   286,    87,   216,
     210,   123,   124,   125,   127,   513,   524,   215,   334,   525,
     529,    93,    88,   322,   128,   129,   130,    96,    97,   535,
     216,   215,   334,   551,   101,   107,   322,   533,   106,   109,
     110,   122,   217,   218,   216,   128,   129,   130,   143,   145,
     219,   298,   289,   212,   213,   131,   146,   150,   152,   128,
     129,   130,   155,   217,   218,   210,   123,   124,   125,   510,
     475,   219,   153,   549,   158,   552,   131,   217,   218,   475,
     123,   163,    79,   168,   170,   219,   125,   299,   172,   475,
     131,   173,   214,   178,   180,   126,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   212,   213,
     185,   127,   476,   186,   187,   204,   188,   477,   205,   239,
     243,   476,   249,   478,   479,   252,   477,   246,   290,   119,
     271,   476,   478,   479,    16,   300,   477,   280,   283,   320,
     480,   216,   478,   479,  -302,   481,   542,   214,   284,   480,
     126,   285,   323,  -302,   481,   301,   128,   129,   130,   480,
     327,   292,   302,   303,   481,   328,   127,   326,   331,   304,
     305,   334,   341,   346,   217,   218,   348,   349,   366,   367,
      78,   383,   219,   290,   386,   414,   394,   131,   430,   436,
     306,   307,   308,   309,   310,   543,   216,   311,   312,  -304,
     313,   314,   315,   316,   317,   318,     1,   319,   437,   455,
     439,   128,   129,   130,     2,   440,   296,   441,   450,   392,
     319,     3,   454,   466,  -268,     4,   472,   488,     1,   217,
     218,   299,   469,  -269,   470,     5,     2,   219,     6,     7,
     483,   491,   131,     3,   492,   493,   494,     4,   495,   497,
       8,     9,   496,   508,   515,   512,   521,     5,    10,   514,
       6,     7,    11,   519,   516,    12,   517,   518,   522,   523,
     526,   527,     8,     9,   528,   531,   534,   539,   548,   300,
      10,   541,   299,   547,    11,   282,    13,    12,   108,   555,
      14,    77,   419,   464,   417,   251,   452,   503,   498,   384,
     209,   325,   372,   379,   429,    15,   554,   303,    13,   537,
     431,    16,    14,   304,   305,   167,   536,     0,     0,     0,
       0,   337,     0,     0,     0,   299,     0,    15,     0,     0,
     300,     0,     0,    16,   306,   307,   308,   309,   310,     0,
     299,   311,   312,     0,   313,   314,   315,   316,   317,   318,
     384,   319,    17,    18,    19,     0,     0,     0,   303,     0,
       0,     0,     0,     0,   304,   305,     0,     0,     0,     0,
       0,     0,     0,  -305,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,   306,   307,   308,   309,   310,
       0,     0,   311,   312,     0,   313,   314,   315,   316,   317,
     318,   303,   319,     0,     0,     0,     0,   304,  -305,     0,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
       0,     0,   304,     0,     0,     0,     0,     0,  -305,  -305,
    -305,   309,   310,     0,     0,   311,   312,     0,   313,   314,
     315,   316,   317,   318,     0,   319,  -305,  -305,     0,     0,
    -305,  -305,     0,   313,   314,   315,   316,   317,   318,   350,
     319,     0,     0,     0,   351,   352,   353,   354,     0,   355,
       0,     0,     0,     0,     0,     0,     0,   356,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   358,     0,   359,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   361,     0,
       0,     0,   362,     0,   363,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364
};

static const yytype_int16 yycheck[] =
{
     150,     2,    79,   100,     5,    60,    61,    62,    99,   100,
      11,   207,    13,   156,   110,     3,   215,    85,   217,   348,
     292,   120,     3,     3,   117,     3,    50,   120,    12,    83,
     180,     3,   182,   183,    57,   186,    82,   115,   367,     4,
       5,     6,    19,    94,   483,   101,     3,    94,    92,   135,
      51,   108,    53,    26,   132,   152,   174,    92,   115,    54,
      27,   152,    63,   181,   214,   176,     3,   111,   179,   219,
      27,    54,   128,   117,   125,   132,   111,   154,    73,   115,
     519,    57,   117,    60,   280,   171,   133,   173,    64,    90,
      91,   290,   176,   243,    61,   179,   132,    98,   176,   298,
     372,   300,   103,   104,    61,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     188,   450,   394,    88,   175,   179,     3,     4,     5,     6,
       9,   177,   115,   284,   115,   285,   286,   104,    39,   104,
     176,     9,   219,   135,   125,   176,   296,   297,   179,   132,
     108,   132,   175,   125,   121,   179,   111,   115,    56,   174,
     115,   260,   115,   115,   179,    44,   104,   260,    45,    46,
      47,     3,   125,    71,   132,    94,    44,   132,    79,   132,
     132,   173,    80,   121,   149,   150,   151,   175,   168,   332,
     168,   341,   176,   392,   466,     3,   346,   347,     3,     4,
       5,     6,    81,    98,   205,   106,   283,    94,    85,    77,
     539,    88,   110,    81,    56,   180,   175,     3,   177,     3,
       4,     5,     6,   319,   420,    18,    19,   104,    90,    71,
     380,   381,     3,     3,     4,     5,     6,   114,    80,   152,
      45,    46,    47,   259,   121,    49,    50,    80,   264,   115,
     522,   117,   349,   115,   116,   323,     0,   134,   349,   135,
     328,    45,    46,    47,   178,   464,   132,   115,   110,   117,
     132,   326,   149,   150,   151,    45,    46,    47,   112,   176,
      85,   323,   179,    88,   132,   176,   328,    57,   179,     3,
     167,   168,   168,   169,   170,   171,   177,   173,   175,   104,
     175,    85,    94,   180,    88,   455,   383,   457,   458,   137,
     138,   139,   140,   141,   142,    85,   121,   394,    88,   320,
     104,   176,   176,   176,   179,   179,   179,   111,     3,   134,
       3,     4,     5,     6,   104,   176,   176,   121,   179,   179,
     176,     3,   127,   179,   149,   150,   151,   123,   127,   176,
     134,   121,   179,   176,     3,   179,   179,   507,   125,    97,
     124,     3,   167,   168,   134,   149,   150,   151,     4,   121,
     175,    17,    45,    46,    47,   180,     3,    83,    93,   149,
     150,   151,     3,   167,   168,     3,     4,     5,     6,   466,
      25,   175,   175,   543,    45,   545,   180,   167,   168,    25,
       4,     3,   175,   175,    12,   175,     6,    53,   176,    25,
     180,   176,    85,   114,   126,    88,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    46,    47,
       4,   104,    67,     4,   176,    45,   179,    72,   131,     3,
     156,    67,   112,    78,    79,     3,    72,    91,   121,    77,
       3,    67,    78,    79,   112,   101,    72,   125,   175,    98,
      95,   134,    78,    79,    99,   100,    82,    85,   175,    95,
      88,   175,   175,    99,   100,   121,   149,   150,   151,    95,
      48,   173,   128,   129,   100,   175,   104,    38,    94,   135,
     136,   179,   179,    54,   167,   168,   175,    93,   120,   175,
      57,   175,   175,   121,   176,     3,   175,   180,     3,   175,
     156,   157,   158,   159,   160,   131,   134,   163,   164,     0,
     166,   167,   168,   169,   170,   171,     7,   173,   175,    94,
     175,   149,   150,   151,    15,   175,   115,   175,   175,   101,
     173,    22,   176,   175,   179,    26,     3,    70,     7,   167,
     168,    53,   104,   179,   174,    36,    15,   175,    39,    40,
     179,     6,   180,    22,     6,     6,     6,    26,     6,   104,
      51,    52,   120,   176,    99,   176,     3,    36,    59,   176,
      39,    40,    63,    99,    78,    66,    78,    78,   126,   176,
     176,   176,    51,    52,   176,   176,   176,   175,   175,   101,
      59,     6,    53,   176,    63,   177,    87,    66,    73,   176,
      91,    25,   330,   115,   327,   162,   369,   456,   448,   121,
     149,   244,   281,   287,   334,   106,   548,   129,    87,   515,
     341,   112,    91,   135,   136,   107,   514,    -1,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    53,    -1,   106,    -1,    -1,
     101,    -1,    -1,   112,   156,   157,   158,   159,   160,    -1,
      53,   163,   164,    -1,   166,   167,   168,   169,   170,   171,
     121,   173,   153,   154,   155,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   153,   154,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,   157,   158,   159,   160,
      -1,    -1,   163,   164,    -1,   166,   167,   168,   169,   170,
     171,   129,   173,    -1,    -1,    -1,    -1,   135,   136,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,   156,   157,
     158,   159,   160,    -1,    -1,   163,   164,    -1,   166,   167,
     168,   169,   170,   171,    -1,   173,   159,   160,    -1,    -1,
     163,   164,    -1,   166,   167,   168,   169,   170,   171,    24,
     173,    -1,    -1,    -1,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    26,    36,    39,    40,    51,    52,
      59,    63,    66,    87,    91,   106,   112,   153,   154,   155,
     182,   183,   184,   185,   189,   191,   193,   194,   198,   199,
     200,   201,   213,   215,   218,   219,   220,   222,   225,   293,
     294,    26,     3,   287,     3,     3,   287,    56,    71,    80,
     110,    94,    94,    98,     3,   286,   287,    80,   287,    56,
      71,    80,   110,    19,    60,     3,   295,   296,   152,   190,
     190,   190,     0,   178,   300,   112,   186,   186,    57,   175,
     228,   229,   233,     3,   177,   175,    94,     3,   127,   202,
     202,   202,   287,     3,   195,   287,   123,   127,   214,    94,
     133,     3,   214,   214,   214,   287,   125,   179,   184,    97,
     124,   245,   228,   229,     9,    44,    81,   230,   231,    77,
     230,   241,     3,     4,     5,     6,    88,   104,   149,   150,
     151,   180,   248,   249,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     4,   192,   121,     3,   288,   287,   287,
      83,   238,    93,   175,   221,     3,   223,   224,    45,   287,
     196,   273,   196,     3,   287,   287,   228,   296,   175,   276,
      12,   234,   176,   176,   226,   227,   228,   233,   114,   232,
     126,   226,    54,    73,   246,     4,     4,   176,   179,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   265,   266,   267,    45,   131,    94,   125,   175,   221,
       3,    45,    46,    47,    85,   121,   134,   167,   168,   175,
     251,   252,   253,   254,   255,   256,   257,   258,   260,   261,
     262,   263,   264,   268,   269,   270,   271,   272,   196,     3,
     301,    64,   229,   156,   179,   238,    91,   216,   217,   112,
     197,   197,     3,   187,   188,   235,   247,   250,   251,   241,
     230,   242,   243,   251,   241,   251,   114,   251,   265,   272,
     287,     3,   225,     3,    27,    61,   203,   204,   205,   212,
     125,   175,   177,   175,   175,   175,   111,   251,   259,    45,
     121,   252,   173,   252,   229,   251,   115,   132,    17,    53,
     101,   121,   128,   129,   135,   136,   156,   157,   158,   159,
     160,   163,   164,   166,   167,   168,   169,   170,   171,   173,
      98,   176,   179,   175,   251,   224,    38,    48,   175,   176,
     179,    94,   236,   237,   179,     3,   125,   291,   292,   246,
     226,   179,    90,   116,   244,   246,    54,    54,   175,    93,
      24,    29,    30,    31,    32,    34,    42,    69,    86,    88,
      89,   103,   107,   109,   119,   206,   120,   175,   176,   179,
     225,   176,   234,     3,   168,   229,   265,   251,   251,   259,
      92,   111,   117,   175,   121,   247,   176,   176,   251,   251,
     252,   252,   101,   128,   175,   104,   121,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   276,   287,     3,   249,   214,   195,   249,   188,
     175,   281,   282,   283,   284,   285,   287,   297,   238,   250,
       3,   243,   251,   251,   301,   196,   175,   175,   208,   175,
     175,   175,   207,    27,    61,   104,   121,   209,   210,   211,
     175,   301,   204,   247,   176,    94,   125,   108,    92,   117,
     251,   251,   229,   174,   115,   252,   175,   229,   247,   104,
     174,   176,     3,   176,   225,    25,    67,    72,    78,    79,
      95,   100,   298,   179,   125,   289,   290,   291,    70,   239,
     176,     6,     6,     6,     6,     6,   120,   104,   211,   301,
     176,   176,   251,   206,   251,   251,   117,   108,   176,   252,
     229,   247,   176,   176,   176,    99,    78,    78,    78,    99,
     282,     3,   126,   176,   176,   179,   176,   176,   176,   176,
     176,   176,   117,   251,   176,   176,   290,   283,   282,   175,
     247,     6,    82,   131,   301,    50,   240,   176,   175,   251,
     299,   176,   251,     3,   271,   176
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   181,   182,   183,   183,   184,   184,   184,   184,   184,
     184,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   189,
     190,   190,   191,   192,   193,   193,   194,   194,   195,   196,
     197,   197,   198,   199,   199,   199,   200,   200,   200,   201,
     201,   201,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   207,   207,   208,   208,
     208,   209,   209,   210,   210,   211,   211,   211,   211,   212,
     212,   213,   213,   213,   213,   214,   214,   215,   216,   217,
     218,   219,   220,   220,   221,   221,   222,   223,   223,   224,
     225,   225,   225,   226,   226,   227,   227,   228,   228,   229,
     229,   230,   231,   231,   231,   232,   232,   233,   234,   234,
     235,   236,   236,   237,   238,   238,   239,   239,   240,   240,
     241,   241,   242,   242,   243,   244,   244,   244,   245,   245,
     246,   246,   246,   246,   246,   246,   247,   247,   248,   248,
     249,   249,   250,   251,   251,   251,   251,   251,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   253,
     253,   254,   254,   254,   254,   254,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   256,   256,   257,
     257,   257,   257,   258,   258,   258,   258,   259,   259,   260,
     260,   261,   261,   261,   261,   261,   261,   261,   262,   262,
     263,   264,   265,   265,   265,   265,   265,   265,   266,   266,
     266,   266,   266,   266,   267,   267,   268,   269,   270,   271,
     271,   271,   271,   272,   272,   272,   272,   272,   272,   272,
     273,   274,   274,   275,   275,   276,   277,   278,   279,   279,
     279,   280,   281,   281,   282,   282,   283,   283,   284,   284,
     285,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     291,   291,   292,   292,   293,   293,   294,   295,   295,   296,
     297,   297,   297,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   299,   300,   300,   301,   301
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     1,     3,     1,     4,     2,     2,     2,
       1,     0,     4,     1,     2,     5,     7,     5,     1,     1,
       3,     0,     5,     2,     3,     2,     2,     3,     3,     8,
       7,     6,     9,     7,     3,     0,     1,     3,     1,     1,
       3,     1,     4,     4,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     3,     0,     5,     3,
       0,     1,     0,     1,     2,     2,     1,     1,     2,     5,
       4,     4,     4,     3,     4,     2,     0,     5,     1,     4,
       4,     2,     8,     5,     3,     0,     5,     1,     3,     3,
       2,     2,     6,     1,     1,     1,     3,     3,     3,     3,
       5,     2,     1,     1,     1,     1,     0,     7,     1,     0,
       1,     1,     0,     2,     2,     0,     4,     0,     2,     0,
       3,     0,     1,     3,     2,     1,     1,     0,     2,     0,
       2,     2,     4,     2,     4,     0,     1,     3,     1,     0,
       1,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     2,     2,     3,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     3,     3,     5,
       6,     5,     6,     4,     6,     3,     5,     4,     5,     4,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       6,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       2,     1,     1,     3,     1,     1,     1,     4,     1,     3,
       2,     1,     1,     3,     1,     0,     1,     5,     1,     0,
       2,     1,     1,     0,     1,     0,     2,     1,     3,     3,
       4,     6,     8,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     0,     1,     1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* IDENTIFIER  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1861 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1867 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1873 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1879 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* statement_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).stmt_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 1892 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1898 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* preparable_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1904 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_hints  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 1917 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* hint_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 1930 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* hint  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1936 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* transaction_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).transaction_stmt)); }
#line 1942 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* prepare_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1948 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* prepare_target_query  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1954 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* execute_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1960 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* import_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1966 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* file_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1972 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* file_path  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1978 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_file_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1984 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* export_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).export_stmt)); }
#line 1990 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* show_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1996 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* db_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).db_stmt)); }
#line 2002 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* create_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 2008 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_not_exists  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2014 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* table_elem_commalist  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).table_element_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2027 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* table_elem  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_element_t)); }
#line 2033 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* column_def  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 2039 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* column_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2045 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_time_precision  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2051 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_decimal_specification  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).ival_pair)); }
#line 2057 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_column_constraints  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2063 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* column_constraint_list  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2069 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* column_constraint  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2075 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* table_constraint  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_constraint_t)); }
#line 2081 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* drop_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 2087 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_exists  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2093 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* alter_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_stmt)); }
#line 2099 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* alter_action  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_action_t)); }
#line 2105 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* drop_action  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_action_t)); }
#line 2111 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* delete_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2117 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* truncate_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2123 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* insert_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 2129 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* opt_column_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2142 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* update_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 2148 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* update_clause_commalist  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).update_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2161 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* update_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 2167 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* select_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2173 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* select_within_set_operation  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2179 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* select_within_set_operation_no_parentheses  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2185 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* select_with_paren  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2191 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* select_no_paren  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2197 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* set_operator  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2203 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* set_type  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2209 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* opt_all  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2215 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* select_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2221 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* opt_distinct  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2227 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* select_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2240 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* opt_from_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2246 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* from_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2252 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* opt_where  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2258 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* opt_group  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2264 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* opt_having  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2270 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* opt_order  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2283 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* order_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2296 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* order_desc  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2302 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* opt_order_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2308 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* opt_top  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2314 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* opt_limit  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2320 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* expr_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2333 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* opt_literal_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2346 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* literal_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2359 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* expr_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2365 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2371 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* operand  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2377 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* scalar_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2383 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* unary_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2389 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* binary_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2395 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* logic_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2401 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* in_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2407 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* case_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2413 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* case_list  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2419 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* exists_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2425 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* comp_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2431 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* function_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2437 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* extract_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2443 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* cast_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2449 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* datetime_field  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2455 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* datetime_field_plural  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2461 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* duration_field  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2467 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* array_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2473 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* array_index  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2479 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* between_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2485 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* column_name  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2491 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2497 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* string_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2503 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 274: /* bool_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2509 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 275: /* num_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2515 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 276: /* int_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2521 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 277: /* null_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2527 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 278: /* date_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2533 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 279: /* interval_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2539 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 280: /* param_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2545 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 281: /* table_ref  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2551 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 282: /* table_ref_atomic  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2557 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 283: /* nonjoin_table_ref_atomic  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2563 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 284: /* table_ref_commalist  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).table_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2576 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 285: /* table_ref_name  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2582 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 286: /* table_ref_name_no_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2588 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 287: /* table_name  */
#line 163 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2594 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 288: /* opt_index_name  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2600 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 289: /* table_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2606 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 290: /* opt_table_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2612 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 291: /* alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2618 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 292: /* opt_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2624 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 293: /* opt_with_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2630 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 294: /* with_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2636 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 295: /* with_description_list  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2642 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 296: /* with_description  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2648 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 297: /* join_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2654 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 298: /* opt_join_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2660 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 299: /* join_condition  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2666 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 301: /* ident_commalist  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2679 "bison_parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 77 "bison_parser.y" /* yacc.c:1429  */
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 2798 "bison_parser.cpp" /* yacc.c:1429  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 296 "bison_parser.y" /* yacc.c:1646  */
    {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param != nullptr) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3003 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 315 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3014 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 321 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3025 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 328 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3034 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 332 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3043 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 336 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].db_stmt); }
#line 3049 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 337 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3055 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 338 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3061 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 339 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3067 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 341 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3073 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 342 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3079 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 343 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3085 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 344 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3091 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 345 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3097 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 346 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3103 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 347 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3109 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 348 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3115 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 349 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3121 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 350 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3127 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 356 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3133 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 357 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 3139 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 359 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3148 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 363 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3157 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 368 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3166 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 372 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3176 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 382 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3182 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 383 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3188 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 384 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3194 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 392 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3204 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 400 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3213 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 404 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3223 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 415 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3234 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 421 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3245 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 428 "bison_parser.y" /* yacc.c:1646  */
    {
  if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
    (yyval.import_type_t) = kImportCSV;
  } else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
    (yyval.import_type_t) = kImportTbl;
  } else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
    (yyval.import_type_t) = kImportBinary;
  } else {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[0].sval));
}
#line 3264 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 443 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3273 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 448 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3279 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 449 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_type_t) = kImportAuto; }
#line 3285 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 455 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3296 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 467 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3302 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 468 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3312 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 473 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3322 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 485 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.db_stmt) = new DBStatement(kUseDB);
  (yyval.db_stmt)->schema = (yyvsp[0].sval);
}
#line 3331 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 489 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.db_stmt) = new DBStatement(kCreateDB);
  (yyval.db_stmt)->schema = (yyvsp[0].sval);
}
#line 3340 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 493 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.db_stmt) = new DBStatement(kDropDB);
  (yyval.db_stmt)->schema = (yyvsp[0].sval);
}
#line 3349 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 504 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
  (yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
  if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
    free((yyvsp[-2].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[-2].sval));
  (yyval.create_stmt)->filePath = (yyvsp[0].sval);
}
#line 3367 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 517 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
}
#line 3380 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 525 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3392 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 532 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3404 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 539 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3417 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 548 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3423 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 549 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3429 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 551 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3438 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 555 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3447 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 560 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3453 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 561 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3459 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 563 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
  (yyval.column_t)->setNullableExplicit();
}
#line 3468 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 568 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3474 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 569 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3480 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 570 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3486 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 571 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3492 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 572 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3498 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 573 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3507 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 577 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3513 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 578 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3519 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 579 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3525 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 580 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3531 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 581 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3537 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 582 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3543 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 583 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3549 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 584 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3555 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 585 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3561 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 587 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3567 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 588 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3573 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 590 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3579 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 591 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3585 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 592 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3591 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 594 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_vec) = (yyvsp[0].column_constraint_vec); }
#line 3597 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 595 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3603 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 597 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_constraint_vec) = new std::vector<ConstraintType>();
  (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
}
#line 3612 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 601 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec);
}
#line 3621 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 606 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3627 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 607 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3633 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 608 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3639 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 609 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3645 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 611 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3651 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 612 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3657 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 620 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3668 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 626 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3679 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 632 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3689 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 638 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3699 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 644 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3705 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 645 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3711 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 652 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 3721 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 658 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 3727 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 660 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 3736 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 670 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 3747 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 677 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3757 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 688 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 3769 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 695 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3781 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 703 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3787 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 704 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 3793 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 711 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 3804 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 718 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 3813 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 722 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 3822 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 727 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 3832 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 737 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 3841 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 741 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 3850 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 745 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
}
#line 3866 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 759 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3872 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 760 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 3885 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 769 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3891 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 770 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3897 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 772 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-1].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[0].limit) != nullptr) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[0].limit);
  }
}
#line 3912 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 782 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
}
#line 3927 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 793 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 3936 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 798 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 3945 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 802 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 3954 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 806 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 3963 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 811 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3969 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 812 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3975 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 814 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 3989 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 824 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3995 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 825 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4001 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 829 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4007 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 830 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 4013 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 832 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4019 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 834 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4025 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 835 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4031 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 837 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4041 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 842 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 4047 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 844 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4053 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 845 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4059 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 847 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4065 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 848 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 4071 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 850 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4080 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 854 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4089 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 859 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4095 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 861 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4101 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 862 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 4107 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 863 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4113 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 867 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4119 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 868 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4125 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 870 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4131 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 871 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4137 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 872 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4143 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 873 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4149 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 874 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4155 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 875 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4161 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 880 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4170 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 884 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4179 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 889 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4185 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 890 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 4191 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 892 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4200 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 896 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4209 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 901 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4221 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 911 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 4227 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 913 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4235 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 919 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4241 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 920 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4247 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 921 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4253 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 922 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4259 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 923 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4265 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 925 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4271 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 926 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4277 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 927 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4283 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 928 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4289 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 929 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4295 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 930 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4301 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 931 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4307 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 932 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4313 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 933 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4319 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 934 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4325 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 936 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4331 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 937 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4337 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 939 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4343 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 940 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4349 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 941 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4355 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 942 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4361 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 946 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4367 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 947 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4373 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 948 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4379 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 949 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4385 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 951 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4391 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 952 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4397 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 954 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4403 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 955 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4409 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 957 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4415 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 958 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4421 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 959 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4427 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 960 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4433 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 961 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4439 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 962 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4445 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 963 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4451 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 965 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4457 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 966 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4463 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 968 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4469 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 970 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4475 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 972 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 4481 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 973 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 4487 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 974 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 4493 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 975 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 4499 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 976 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 4505 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 977 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 4511 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 979 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 4517 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 980 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 4523 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 981 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 4529 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 982 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 4535 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 983 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 4541 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 984 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 4547 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 988 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4553 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 990 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4559 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 992 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4565 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 994 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4571 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 995 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4577 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 996 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 4583 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 997 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4589 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1001 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4595 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1003 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4601 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1004 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 4607 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1006 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4613 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1009 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4619 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1011 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4625 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1013 "bison_parser.y" /* yacc.c:1646  */
    {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 4640 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1024 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 4649 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1028 "bison_parser.y" /* yacc.c:1646  */
    {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) != 1 || (yyvsp[-1].sval)[chars_parsed] != 0) {
    free((yyvsp[-1].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER");
    YYERROR;
  }
  free((yyvsp[-1].sval));
  (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
}
#line 4665 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1039 "bison_parser.y" /* yacc.c:1646  */
    {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 4701 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1071 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 4711 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1080 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 4722 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1089 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4733 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1096 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 4742 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1100 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 4751 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1105 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4763 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1113 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 4773 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1119 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4782 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1123 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4791 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1128 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 4797 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1129 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = nullptr; }
#line 4803 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1131 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4809 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1133 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4815 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1135 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4821 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1136 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4827 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1138 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4833 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1144 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = nullptr; }
#line 4839 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1146 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4845 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1148 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 4854 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1152 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 4863 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1157 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 4873 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1167 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 4885 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1174 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 4898 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1182 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
  auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
  (yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
  delete (yyvsp[-1].expr);
}
#line 4918 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1198 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 4924 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1199 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 4930 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1200 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 4936 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1201 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 4942 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1202 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 4948 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1203 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 4954 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1204 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 4960 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1205 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 4966 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1206 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinCross; }
#line 4972 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1207 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 4978 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1218 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 4987 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1222 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 4996 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 5000 "bison_parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1228 "bison_parser.y" /* yacc.c:1906  */

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
