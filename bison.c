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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 5 "mini_l.y" /* yacc.c:339  */


  #include <stdio.h>

  void yyerror(const char *msg);

  /* stuff from flex that bison needs to know about: */



#line 77 "mini_l.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "mini_l.tab.h".  */
#ifndef YY_YY_MINI_L_TAB_H_INCLUDED
# define YY_YY_MINI_L_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    ARRAY = 265,
    OF = 266,
    IF = 267,
    THEN = 268,
    ENDIF = 269,
    ELSE = 270,
    WHILE = 271,
    DO = 272,
    FOREACH = 273,
    IN = 274,
    BEGINLOOP = 275,
    ENDLOOP = 276,
    CONTINUE = 277,
    READ = 278,
    WRITE = 279,
    AND = 280,
    OR = 281,
    NOT = 282,
    TRUE = 283,
    FALSE = 284,
    RETURN = 285,
    PLUS = 286,
    SUB = 287,
    MULT = 288,
    DIV = 289,
    MOD = 290,
    COLON = 291,
    COMMA = 292,
    L_SQUARE_BRACKET = 293,
    IDENT = 294,
    R_SQUARE_BRACKET = 295,
    ASSIGN = 296,
    NUMBER = 297,
    INTEGER = 298,
    SEMICOLON = 299,
    EQ = 300,
    NEQ = 301,
    LT = 302,
    GT = 303,
    LTE = 304,
    GTE = 305,
    L_PAREN = 306,
    R_PAREN = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "mini_l.y" /* yacc.c:355  */

  int		    int_val;
  char      *sval;


#line 176 "mini_l.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 193 "mini_l.tab.c" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  233

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    43,    44,    47,    48,    49,    50,    51,
      52,    53,    54,    57,    58,    61,    62,    65,    66,    67,
      68,    71,    72,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    86,    89,    90,    91,    92,    95,    96,    99,
     100,   103,   104,   107,   108,   111,   112,   115,   116,   119,
     120,   123,   126,   129,   130,   137,   138,   141,   142,   145,
     146,   147,   148,   149,   150,   151,   152,   155,   156,   157,
     158,   159,   160,   163,   164,   165,   166,   167,   168,   169,
     172,   173,   174,   177,   178,   179,   182,   183,   184,   185,
     188,   189,   190,   191,   194,   195,   196,   197,   200,   201,
     202,   203,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   217,   218,   221,   222
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "ARRAY", "OF",
  "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOREACH", "IN",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT",
  "TRUE", "FALSE", "RETURN", "PLUS", "SUB", "MULT", "DIV", "MOD", "COLON",
  "COMMA", "L_SQUARE_BRACKET", "IDENT", "R_SQUARE_BRACKET", "ASSIGN",
  "NUMBER", "INTEGER", "SEMICOLON", "EQ", "NEQ", "LT", "GT", "LTE", "GTE",
  "L_PAREN", "R_PAREN", "$accept", "Program_Prime", "Program", "Function",
  "A", "B", "Declaration", "C", "Statement", "D", "E", "F", "G", "H", "I",
  "J", "K", "L", "M", "N", "Bool-Expr", "Relation-And-Expr", "P",
  "Relation-Expr", "Comp", "Expression", "Q", "R", "Multiplicative-Expr",
  "S", "T", "U", "Term", "V", "Var", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,   -24,    27,  -153,    19,   -27,  -153,  -153,    54,     7,
      59,     4,    26,    33,    14,     6,    36,    53,    87,    57,
      93,    97,    71,  -153,    76,     9,    17,  -153,    94,   117,
      86,  -153,    91,  -153,   127,   130,    63,    63,   119,   103,
    -153,   104,   104,   -14,   108,   138,   110,   118,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,   111,   133,   121,
     122,   162,   158,   102,  -153,  -153,    18,   -15,  -153,    63,
     154,   144,   144,   244,    12,    39,  -153,   153,   257,   157,
     163,   163,   -14,  -153,   -14,  -153,   182,   257,   -14,   185,
     146,   191,   170,   204,   175,   181,  -153,  -153,    63,   244,
    -153,   -14,  -153,   246,   169,   254,   257,    63,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,   -14,   -14,   -14,   -14,
     -14,   -14,  -153,  -153,  -153,   257,   183,   187,   104,  -153,
    -153,   176,   189,  -153,  -153,  -153,  -153,   223,   190,   227,
    -153,   225,   235,   201,   194,   -14,   195,  -153,   -17,  -153,
    -153,   207,   144,  -153,    67,    67,    39,    39,    39,   208,
      64,   228,   163,  -153,  -153,  -153,   210,  -153,  -153,   248,
    -153,  -153,  -153,   -14,  -153,   211,   200,  -153,   -14,   -14,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,   219,  -153,   243,   257,  -153,  -153,  -153,
     229,  -153,   221,   257,   107,   253,    67,    67,  -153,   249,
    -153,   232,  -153,  -153,   239,   240,   258,   242,  -153,  -153,
    -153,  -153,  -153,   238,   257,  -153,   251,  -153,  -153,   250,
    -153,  -153,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,    17,    21,     0,     0,    14,     0,     0,
       0,    22,     0,    18,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,   113,     0,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,    61,    63,     0,   113,   104,     0,
       0,    53,    55,     0,    73,    86,   102,     0,     0,     0,
      45,    49,     0,    52,     0,     5,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    64,     0,     0,
     105,     0,   103,     0,     0,     0,     0,     0,    54,    56,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    87,    88,    89,     0,     0,     0,     0,    46,
      50,     0,     0,     6,    16,    32,     7,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,   108,     0,    65,
     106,     0,    57,    59,    74,    75,    90,    94,    98,     0,
       0,     0,    47,   114,     8,    19,     0,    10,    11,     0,
      66,    60,   107,     0,   109,     0,     0,    58,     0,     0,
      76,    78,    77,    79,    91,    92,    93,    95,    96,    97,
      99,   100,   101,     0,    41,     0,     0,    48,    20,    12,
     111,   110,     0,     0,     0,     0,    80,    83,    39,     0,
      42,     0,   112,    33,     0,     0,     0,     0,    81,    82,
      84,    85,    40,     0,    37,    35,     0,    34,    43,     0,
      38,    36,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,   278,  -153,   101,   -53,  -153,   281,   -77,  -153,
    -153,   105,  -153,  -153,  -153,  -153,   -79,  -153,  -153,  -153,
     -30,  -153,   -68,   203,   209,   -37,  -152,  -144,  -108,     2,
      25,    31,    88,   112,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    12,    46,    13,    17,    47,    48,
      49,   205,    50,    51,    52,    53,   129,    54,    55,    56,
      70,    71,   108,    72,   116,    73,   180,   181,    74,   122,
     123,   124,    75,   175,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,   126,   130,   182,   109,    90,    83,    77,    94,   154,
     155,   183,    10,    80,    81,     5,    22,     8,    66,    32,
     173,    20,     1,    84,    34,    67,    99,     6,    68,   151,
      57,    18,   105,    57,   134,   174,   103,    82,   102,   104,
      15,    16,   143,   117,   118,   131,    11,   132,   159,    23,
      57,   135,    33,    11,   218,   220,    11,    44,     9,    57,
     100,   105,   219,   221,   146,    14,   148,    57,   144,   101,
     206,   207,   119,   120,   121,    24,    36,    19,    57,   153,
      37,    38,    39,   197,   177,   194,    40,    41,    42,    25,
      63,    64,    65,    26,    43,    66,    11,    57,   178,   179,
     162,    28,    67,    44,    29,    68,    36,   195,   171,    30,
      37,    38,    39,    16,    69,    21,    40,    41,    42,   211,
      27,   215,   203,   204,    43,    58,   214,    35,    59,    60,
      96,    97,    57,    44,    66,    61,   200,    62,    45,    78,
     209,    67,    79,    44,    68,    36,    84,    85,    57,    37,
      38,    39,    88,    98,    86,    40,    41,    42,   184,   187,
     190,    91,    87,    43,    92,    57,    95,   106,    57,   107,
     229,   230,    44,   125,    36,    57,   127,    89,    37,    38,
      39,   185,   188,   191,    40,    41,    42,   186,   189,   192,
     137,   133,    43,    36,   136,    57,    57,    37,    38,    39,
     128,    44,   138,    40,    41,    42,    93,   156,   157,   158,
     139,    43,    36,   140,   202,   203,    37,    38,    39,   141,
      44,   149,    40,    41,    42,   142,   161,   160,   150,   163,
      43,    36,   164,   165,   167,    37,    38,    39,   166,    44,
     208,    40,    41,    42,   168,   169,   170,   172,   196,    43,
      36,   176,   193,   198,    37,    38,    39,   199,    44,   228,
      40,    41,    42,   201,   210,   213,   173,   217,    43,    36,
     222,   232,   226,    37,    38,    39,   223,    44,    66,    40,
      41,    42,     7,   224,   225,    67,   227,    43,    68,   110,
     111,   112,   113,   114,   115,   231,    44,    82,   147,   110,
     111,   112,   113,   114,   115,    31,   150,     0,   145,   216,
     152,     0,   212
};

static const yytype_int16 yycheck[] =
{
      28,    78,    81,   155,    72,    58,    43,    37,    61,   117,
     118,   155,     5,    41,    42,    39,    10,    44,    32,    10,
      37,     7,     3,    38,     7,    39,    63,     0,    42,   106,
      58,     5,    69,    61,    87,    52,    51,    51,    66,    69,
      36,    37,    95,    31,    32,    82,    39,    84,   125,    43,
      78,    88,    43,    39,   206,   207,    39,    39,     4,    87,
      42,    98,   206,   207,   101,     6,   103,    95,    98,    51,
     178,   179,    33,    34,    35,    39,    12,    44,   106,   116,
      16,    17,    18,   162,   152,    21,    22,    23,    24,    36,
      27,    28,    29,     6,    30,    32,    39,   125,    31,    32,
     128,     8,    39,    39,     7,    42,    12,   160,   145,    38,
      16,    17,    18,    37,    51,    14,    22,    23,    24,   196,
      19,    14,    15,   176,    30,     8,   203,    26,    42,    38,
      28,    29,   160,    39,    32,     8,   173,     7,    44,    20,
     193,    39,    39,    39,    42,    12,    38,     9,   176,    16,
      17,    18,    41,    51,    44,    22,    23,    24,   156,   157,
     158,    40,    44,    30,    42,   193,     8,    13,   196,    25,
     223,   224,    39,    20,    12,   203,    19,    44,    16,    17,
      18,   156,   157,   158,    22,    23,    24,   156,   157,   158,
      44,     9,    30,    12,     9,   223,   224,    16,    17,    18,
      37,    39,    11,    22,    23,    24,    44,   119,   120,   121,
      40,    30,    12,     9,    14,    15,    16,    17,    18,    44,
      39,    52,    22,    23,    24,    44,    39,    44,    52,    40,
      30,    12,     9,    43,     9,    16,    17,    18,    11,    39,
      21,    22,    23,    24,     9,    44,    52,    52,    20,    30,
      12,    44,    44,    43,    16,    17,    18,     9,    39,    21,
      22,    23,    24,    52,    21,    44,    37,    14,    30,    12,
      21,    21,    14,    16,    17,    18,    44,    39,    32,    22,
      23,    24,     4,    44,    44,    39,    44,    30,    42,    45,
      46,    47,    48,    49,    50,    44,    39,    51,    52,    45,
      46,    47,    48,    49,    50,    24,    52,    -1,    99,   204,
     107,    -1,   200
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,    55,    56,    39,     0,    55,    44,     4,
       5,    39,    57,    59,     6,    36,    37,    60,     5,    44,
       7,    57,    10,    43,    39,    36,     6,    57,     8,     7,
      38,    60,    10,    43,     7,    57,    12,    16,    17,    18,
      22,    23,    24,    30,    39,    44,    58,    61,    62,    63,
      65,    66,    67,    68,    70,    71,    72,    87,     8,    42,
      38,     8,     7,    27,    28,    29,    32,    39,    42,    51,
      73,    74,    76,    78,    81,    85,    87,    73,    20,    39,
      87,    87,    51,    78,    38,     9,    44,    44,    41,    44,
      58,    40,    42,    44,    58,     8,    28,    29,    51,    78,
      42,    51,    87,    51,    73,    78,    13,    25,    75,    75,
      45,    46,    47,    48,    49,    50,    77,    31,    32,    33,
      34,    35,    82,    83,    84,    20,    61,    19,    37,    69,
      69,    78,    78,     9,    58,    78,     9,    44,    11,    40,
       9,    44,    44,    58,    73,    77,    78,    52,    78,    52,
      52,    61,    76,    78,    81,    81,    85,    85,    85,    61,
      44,    39,    87,    40,     9,    43,    11,     9,     9,    44,
      52,    78,    52,    37,    52,    86,    44,    75,    31,    32,
      79,    80,    79,    80,    82,    83,    84,    82,    83,    84,
      82,    83,    84,    44,    21,    58,    20,    69,    43,     9,
      78,    52,    14,    15,    58,    64,    81,    81,    21,    58,
      21,    61,    86,    44,    61,    14,    64,    14,    79,    80,
      79,    80,    21,    44,    44,    44,    14,    44,    21,    58,
      58,    44,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    57,    57,    58,    58,    59,    59,    59,
      59,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    63,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    79,    80,    80,    80,    81,    81,    81,    81,
      82,    82,    82,    82,    83,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    10,    11,    11,    12,    11,
      12,    12,    13,     2,     3,     2,     3,     3,     4,     8,
       9,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     7,     8,     8,     9,     3,     4,     6,
       7,     5,     6,     8,     9,     2,     3,     2,     3,     2,
       3,     1,     2,     1,     2,     1,     2,     2,     3,     3,
       4,     1,     2,     1,     2,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     4,     4,     4,
       2,     3,     3,     2,     3,     3,     1,     2,     2,     2,
       2,     3,     3,     3,     2,     3,     3,     3,     2,     3,
       3,     3,     1,     2,     1,     2,     3,     4,     3,     4,
       5,     2,     3,     1,     4
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 40 "mini_l.y" /* yacc.c:1646  */
    {printf("Program_Prime --> Program\n");}
#line 1448 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "mini_l.y" /* yacc.c:1646  */
    {printf("Program --> epsilon\n");}
#line 1454 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 44 "mini_l.y" /* yacc.c:1646  */
    {printf("Program --> Function Program\n");}
#line 1460 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 47 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
#line 1466 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 48 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
#line 1472 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 49 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
#line 1478 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 50 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
#line 1484 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
#line 1490 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
#line 1496 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 53 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY SEMICOLON END_BODY\n");}
#line 1502 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 54 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
#line 1508 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 57 "mini_l.y" /* yacc.c:1646  */
    {printf("A --> Declaration SEMICOLON\n");}
#line 1514 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 58 "mini_l.y" /* yacc.c:1646  */
    {printf("A --> Declaration SEMICOLON A\n");}
#line 1520 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "mini_l.y" /* yacc.c:1646  */
    {printf("B --> Statement SEMICOLON\n");}
#line 1526 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 62 "mini_l.y" /* yacc.c:1646  */
    {printf("B --> Statement SEMICOLON B\n");}
#line 1532 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 65 "mini_l.y" /* yacc.c:1646  */
    {printf("Declaration --> IDENT COLON INTEGER\n");}
#line 1538 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "mini_l.y" /* yacc.c:1646  */
    {printf("Declaration --> IDENT C COLON INTEGER\n");}
#line 1544 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "mini_l.y" /* yacc.c:1646  */
    {printf("Declaration --> IDENT COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1550 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "mini_l.y" /* yacc.c:1646  */
    {printf("Declaration --> IDENT C COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1556 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 71 "mini_l.y" /* yacc.c:1646  */
    {printf("C --> COMMA IDENT\n");}
#line 1562 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 72 "mini_l.y" /* yacc.c:1646  */
    {printf("C --> COMMA IDENT C\n");}
#line 1568 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> D\n");}
#line 1574 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> E\n");}
#line 1580 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 77 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> I\n");}
#line 1586 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 78 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> H\n");}
#line 1592 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 79 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> I\n");}
#line 1598 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 80 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> J\n");}
#line 1604 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 81 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> L\n");}
#line 1610 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 82 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> M\n");}
#line 1616 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 83 "mini_l.y" /* yacc.c:1646  */
    {printf("Statement --> N\n");}
#line 1622 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 86 "mini_l.y" /* yacc.c:1646  */
    {printf("D --> Var ASSIGN Expression\n");}
#line 1628 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 89 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> IF Bool-Expr THEN Statement SEMICOLON ENDIF SEMICOLON");}
#line 1634 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 90 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> IF Bool-Expr THEN Statement SEMICOLON F ENDIF SEMICOLON");}
#line 1640 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 91 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> IF Bool-Expr THEN Statement SEMICOLON B ENDIF SEMICOLON");}
#line 1646 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 92 "mini_l.y" /* yacc.c:1646  */
    {printf("E --> IF Bool-Expr THEN Statement SEMICOLON B F ENDIF SEMICOLON");}
#line 1652 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 95 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> ELSE Statement SEMICOLON\n");}
#line 1658 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 96 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> ELSE Statement SEMICOLON B\n");}
#line 1664 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 99 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
#line 1670 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 100 "mini_l.y" /* yacc.c:1646  */
    {printf("G --> WHILE Bool-Expr BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
#line 1676 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 103 "mini_l.y" /* yacc.c:1646  */
    {printf("H --> DO BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
#line 1682 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 104 "mini_l.y" /* yacc.c:1646  */
    {printf("H --> DO BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
#line 1688 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 107 "mini_l.y" /* yacc.c:1646  */
    {printf("I --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON ENDLOOP\n");}
#line 1694 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 108 "mini_l.y" /* yacc.c:1646  */
    {printf("I --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
#line 1700 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 111 "mini_l.y" /* yacc.c:1646  */
    {printf("J --> READ Var\n");}
#line 1706 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 112 "mini_l.y" /* yacc.c:1646  */
    {printf("J --> READ Var K\n");}
#line 1712 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 115 "mini_l.y" /* yacc.c:1646  */
    {printf("K --> COMMA Var\n");}
#line 1718 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 116 "mini_l.y" /* yacc.c:1646  */
    {printf("K --> COMMA Var K\n");}
#line 1724 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 119 "mini_l.y" /* yacc.c:1646  */
    {printf("L --> WRITE Var\n");}
#line 1730 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 120 "mini_l.y" /* yacc.c:1646  */
    {printf("L --> WRITE Var K\n");}
#line 1736 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 123 "mini_l.y" /* yacc.c:1646  */
    {printf("M --> CONTINUE\n");}
#line 1742 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 126 "mini_l.y" /* yacc.c:1646  */
    {printf("N --> RETURN Expression\n");}
#line 1748 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 129 "mini_l.y" /* yacc.c:1646  */
    {printf("Bool-Expr --> Relation-And-Expr\n");}
#line 1754 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 130 "mini_l.y" /* yacc.c:1646  */
    {printf("Bool-Expr --> Relation-And-Expr P\n");}
#line 1760 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 137 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-And-Expr --> Relation-Expr\n");}
#line 1766 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 138 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-And-Expr --> Relation-Expr P\n");}
#line 1772 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 141 "mini_l.y" /* yacc.c:1646  */
    {printf("P --> AND Relation-Expr\n");}
#line 1778 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 142 "mini_l.y" /* yacc.c:1646  */
    {printf("P --> AND Relation-Expr P\n");}
#line 1784 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 145 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> Expression Comp Expression\n");}
#line 1790 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 146 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT Expression Comp Expression\n");}
#line 1796 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 147 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> TRUE\n");}
#line 1802 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 148 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT TRUE\n");}
#line 1808 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 149 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> FALSE\n");}
#line 1814 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 150 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT FALSE\n");}
#line 1820 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 151 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
#line 1826 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 152 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> NOT L_PAREN Bool-Expr R_PAREN\n");}
#line 1832 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 155 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> EQ\n");}
#line 1838 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 156 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> NEQ\n");}
#line 1844 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 157 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> LT\n");}
#line 1850 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 158 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> GT\n");}
#line 1856 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 159 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> LTE\n");}
#line 1862 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 160 "mini_l.y" /* yacc.c:1646  */
    {printf("Comp --> GTE\n");}
#line 1868 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 163 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> Multiplicative-Expr\n");}
#line 1874 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 164 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> PLUS Multiplicative-Expr\n");}
#line 1880 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 165 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> SUB Multiplicative-Expr\n");}
#line 1886 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 166 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> PLUS Multiplicative-Expr Q\n");}
#line 1892 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 167 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> SUB Multiplicative-Expr Q\n");}
#line 1898 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 168 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> PLUS Multiplicative-Expr R\n");}
#line 1904 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 169 "mini_l.y" /* yacc.c:1646  */
    {printf("Expression --> SUB Multiplicative-Expr R\n");}
#line 1910 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 172 "mini_l.y" /* yacc.c:1646  */
    {printf("Q --> PLUS Multiplicative-Expr\n");}
#line 1916 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 173 "mini_l.y" /* yacc.c:1646  */
    {printf("Q --> PLUS Multiplicative-Expr Q\n");}
#line 1922 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 174 "mini_l.y" /* yacc.c:1646  */
    {printf("Q --> PLUS Multiplicative-Expr R\n");}
#line 1928 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "mini_l.y" /* yacc.c:1646  */
    {printf("T --> SUB Multiplicative-Expr\n");}
#line 1934 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 178 "mini_l.y" /* yacc.c:1646  */
    {printf("T --> SUB Multiplicative-Expr Q\n");}
#line 1940 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 179 "mini_l.y" /* yacc.c:1646  */
    {printf("T --> SUB Multiplicative-Expr R\n");}
#line 1946 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 182 "mini_l.y" /* yacc.c:1646  */
    {printf("Multiplicative-Expr --> Term\n");}
#line 1952 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 183 "mini_l.y" /* yacc.c:1646  */
    {printf("Multiplicative-Expr --> Term S\n");}
#line 1958 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 184 "mini_l.y" /* yacc.c:1646  */
    {printf("Multiplicative-Expr --> Term T\n");}
#line 1964 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 185 "mini_l.y" /* yacc.c:1646  */
    {printf("Multiplicative-Expr --> Term U\n");}
#line 1970 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 188 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> MULT Term\n");}
#line 1976 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 189 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> MULT Term S\n");}
#line 1982 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 190 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> MULT Term T\n");}
#line 1988 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 191 "mini_l.y" /* yacc.c:1646  */
    {printf("U --> MULT Term U\n");}
#line 1994 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 194 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term\n");}
#line 2000 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 195 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term S\n");}
#line 2006 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 196 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term T\n");}
#line 2012 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 197 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> DIV Term U\n");}
#line 2018 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 200 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term\n");}
#line 2024 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 201 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term S\n");}
#line 2030 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 202 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term T\n");}
#line 2036 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 203 "mini_l.y" /* yacc.c:1646  */
    {printf("W --> MOD Term U\n");}
#line 2042 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 206 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> Var\n");}
#line 2048 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 207 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> SUB Var\n");}
#line 2054 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 208 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> NUMBER\n");}
#line 2060 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 209 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> SUB NUMBER\n");}
#line 2066 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 210 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> L_PAREN Expression R_PAREN\n");}
#line 2072 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 211 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> SUB L_PAREN Expression R_PAREN\n");}
#line 2078 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 212 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> IDENT L_PAREN R_PAREN\n");}
#line 2084 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 213 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> IDENT L_PAREN Expression R_PAREN\n");}
#line 2090 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 214 "mini_l.y" /* yacc.c:1646  */
    {printf("Term --> IDENT L_PAREN Expression V R_PAREN\n");}
#line 2096 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 217 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> COMMA Expression\n");}
#line 2102 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 218 "mini_l.y" /* yacc.c:1646  */
    {printf("V --> COMMA Expression V\n");}
#line 2108 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 221 "mini_l.y" /* yacc.c:1646  */
    {printf("Var --> IDENT\n");}
#line 2114 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 222 "mini_l.y" /* yacc.c:1646  */
    {printf("Var --> IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
#line 2120 "mini_l.tab.c" /* yacc.c:1646  */
    break;


#line 2124 "mini_l.tab.c" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 224 "mini_l.y" /* yacc.c:1906  */


void yyerror(const char *msg)
{
  /* extern int yylineno;	 */ /* defined and maintained in lex.c */ 
  extern char *yytext;	/* defined and maintained in lex.c */
  extern int currentColumn;
  extern int currentLine;

  printf("Rick's Error: %s at symbol '%s' on line %d column %d \n", msg, yytext, currentLine, currentColumn);

  return;
}

int main( int argc, char **argv )
{
  yyparse();
}
