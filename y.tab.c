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

  int yylex(void);
  void yyerror(const char *msg);


#line 75 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENT = 258,
    FUNCTION = 259,
    BEGIN_PARAMS = 260,
    END_PARAMS = 261,
    BEGIN_LOCALS = 262,
    END_LOCALS = 263,
    BEGIN_BODY = 264,
    END_BODY = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    FOREACH = 274,
    IN = 275,
    BEGINLOOP = 276,
    ENDLOOP = 277,
    CONTINUE = 278,
    READ = 279,
    WRITE = 280,
    TRUE = 281,
    FALSE = 282,
    RETURN = 283,
    COLON = 284,
    COMMA = 285,
    NUMBER = 286,
    INTEGER = 287,
    SEMICOLON = 288,
    ASSIGN = 289,
    AND = 290,
    OR = 291,
    NOT = 292,
    EQ = 293,
    NEQ = 294,
    LT = 295,
    GT = 296,
    LTE = 297,
    GTE = 298,
    PLUS = 299,
    SUB = 300,
    MULT = 301,
    DIV = 302,
    MOD = 303,
    L_SQUARE_BRACKET = 304,
    R_SQUARE_BRACKET = 305,
    L_PAREN = 306,
    R_PAREN = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "mini_l.y" /* yacc.c:355  */

  int		    int_val;


#line 173 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 190 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

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
<<<<<<< HEAD
       0,    27,    27,    30,    31,    34,    37,    38,    41,    42,
      45,    48,    49,    52,    53,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    67,    70,    73,    74,    77,    80,
      83,    86,    89,    90,    93,    96,    99,   102,   105,   106,
     109,   110,   113,   114,   117,   118,   119,   120,   123,   124,
     125,   126,   127,   128,   131,   134,   135,   138,   139,   142,
     145,   146,   149,   150,   153,   154,   157,   158,   159,   160,
     163,   164,   167,   168,   171,   172,   175,   176
=======
       0,    40,    40,    43,    44,    47,    51,    52,    55,    56,
      59,    62,    63,    66,    67,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    81,    84,    87,    88,    91,    94,
      97,   100,   103,   104,   107,   110,   113,   116,   119,   120,
     123,   124,   127,   128,   131,   132,   133,   134,   137,   138,
     139,   140,   141,   142,   145,   148,   149,   152,   153,   156,
     159,   160,   163,   164,   167,   168,   171,   172,   173,   174,
     177,   178,   181,   182,   185,   186,   189,   190
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "FUNCTION", "BEGIN_PARAMS",
  "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOREACH",
  "IN", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "TRUE",
  "FALSE", "RETURN", "COLON", "COMMA", "NUMBER", "INTEGER", "SEMICOLON",
  "ASSIGN", "AND", "OR", "NOT", "EQ", "NEQ", "LT", "GT", "LTE", "GTE",
  "PLUS", "SUB", "MULT", "DIV", "MOD", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "L_PAREN", "R_PAREN", "$accept", "Program_Prime",
  "program", "function", "A", "B", "Declaration", "C", "D", "Statement",
  "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "Bool-Expr", "P",
  "Relation-And-Expr", "Q", "Relation-Expr", "Comp", "Expression", "S",
  "T", "Multiplicative-Expr", "U", "V", "W", "Term", "X", "Y", "Z", "Var", YY_NULLPTR
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

#define YYPACT_NINF -138

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-138)))

#define YYTABLE_NINF -73

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,    16,    23,  -138,    14,    -8,  -138,  -138,    29,    25,
      12,    52,    31,    63,    41,    65,    25,    12,    62,    25,
    -138,  -138,    26,    42,    70,    48,  -138,    73,    33,    68,
      72,    46,     4,     4,    82,   101,  -138,   102,   102,     3,
      74,    75,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,    76,  -138,     3,    55,  -138,  -138,    18,  -138,     4,
      95,    77,    79,    59,    67,    66,     5,    94,    68,    96,
      87,    87,  -138,   108,    68,     3,    69,     2,    79,    71,
      68,     4,  -138,    18,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,     3,     3,    80,     3,    81,  -138,     3,  -138,    68,
      88,   117,   102,  -138,  -138,  -138,  -138,  -138,  -138,    92,
      78,  -138,  -138,    91,    77,    79,  -138,    67,     3,  -138,
      66,     3,    83,    84,    93,    68,   106,  -138,     3,  -138,
    -138,    68,  -138,  -138,    80,    67,    81,    66,     3,  -138,
    -138,    68,   107,    68,    92,   116,  -138,    80,    83,    81,
      66,   111,  -138,   104,  -138,    68,   119,  -138,  -138,    83,
      81,  -138,    68,   105,   109,  -138,    83,   113,    68,  -138,
    -138,  -138,  -138
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     6,
      11,     0,     0,     0,     0,     0,     6,    11,    13,     6,
       7,    12,     0,     0,     0,     0,    10,     0,     0,     8,
       0,    76,    70,    70,     0,     0,    35,     0,     0,    70,
       0,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    14,    70,     0,    45,    46,    70,    71,    70,
       0,    38,    42,     0,    55,    60,     0,     0,     0,     0,
      32,    32,    36,     0,     8,    70,     0,    70,    42,     0,
       0,    70,    37,    70,    40,    48,    49,    50,    51,    52,
      53,    70,    70,    57,    70,    62,    67,    70,    66,     0,
       0,     0,     0,    31,    34,     5,     9,    24,    77,    74,
       0,    41,    47,     0,    38,    42,    44,    55,    70,    54,
      60,    70,    64,     0,     0,     8,     0,    33,    70,    73,
      69,     8,    39,    43,    57,    55,    62,    60,    70,    59,
      68,     8,     0,     0,    74,    26,    56,    57,    64,    62,
      60,     0,    29,     0,    75,     0,     0,    58,    61,    64,
      62,    28,     8,     0,     0,    63,    64,     0,     8,    25,
      65,    30,    27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,   135,  -138,     1,   -74,  -138,   123,  -138,   -66,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,    85,  -138,  -138,
    -138,   -21,    27,    64,   -69,   -33,  -138,   -38,   -55,  -121,
     -57,  -110,   -84,  -137,   -78,  -138,  -138,    -1,   -34
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    40,    12,    14,    23,    41,
      42,    43,   156,    44,    45,    46,    47,   103,    48,    49,
      50,    60,    82,    61,    84,    62,    91,    63,    93,   119,
      64,    95,   122,   139,    65,    66,   110,   129,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     106,    72,   100,    70,    71,    54,    54,    54,    31,   111,
     136,   158,    67,   146,   113,    76,   120,    20,     1,     5,
      24,    54,   165,     6,    78,     8,   157,   149,    10,   170,
      55,    56,    98,   124,     9,   117,    96,   107,    79,   109,
     160,    57,    13,   137,    55,    56,   133,    58,    58,    58,
     115,   142,   148,   116,   -72,    59,    97,   145,    15,   123,
     150,   135,   134,    58,    16,   159,    17,   151,   127,    59,
      18,    31,    19,    22,    26,    25,   166,   153,    27,    28,
     147,    32,    29,    30,    52,    33,    34,    35,   167,   163,
     144,    36,    37,    38,   172,    53,    39,    85,    86,    87,
      88,    89,    90,    68,    69,    31,    77,    73,    74,    80,
      75,    92,    94,    81,    83,    99,   101,   102,   105,   108,
     126,   125,   128,   112,   131,   118,   141,   143,   121,   152,
     130,   138,   155,   161,   164,   171,   140,   162,   168,     7,
      21,   132,   169,   154,     0,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104
};

static const yytype_int16 yycheck[] =
{
      74,    39,    68,    37,    38,     3,     3,     3,     3,    78,
     120,   148,    33,   134,    80,    53,    94,    16,     4,     3,
      19,     3,   159,     0,    57,    33,   147,   137,     3,   166,
      26,    27,    66,    99,     5,    92,    31,    75,    59,    77,
     150,    37,    30,   121,    26,    27,   115,    45,    45,    45,
      83,   125,   136,    91,    52,    51,    51,   131,     6,    97,
     138,   118,   117,    45,    33,   149,     3,   141,   102,    51,
      29,     3,     7,    11,    32,    49,   160,   143,     8,    31,
     135,    13,     9,    50,    12,    17,    18,    19,   162,   155,
     128,    23,    24,    25,   168,    49,    28,    38,    39,    40,
      41,    42,    43,    21,     3,     3,    51,    33,    33,    14,
      34,    44,    46,    36,    35,    21,    20,    30,    10,    50,
       3,    33,    30,    52,    33,    45,    33,    21,    47,    22,
      52,    48,    16,    22,    15,    22,    52,    33,    33,     4,
      17,   114,    33,   144,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    54,    55,    56,     3,     0,    55,    33,     5,
       3,    57,    59,    30,    60,     6,    33,     3,    29,     7,
      57,    60,    11,    61,    57,    49,    32,     8,    31,     9,
      50,     3,    13,    17,    18,    19,    23,    24,    25,    28,
      58,    62,    63,    64,    66,    67,    68,    69,    71,    72,
      73,    91,    12,    49,     3,    26,    27,    37,    45,    51,
      74,    76,    78,    80,    83,    87,    88,    74,    21,     3,
      91,    91,    80,    33,    33,    34,    80,    51,    78,    74,
      14,    36,    75,    35,    77,    38,    39,    40,    41,    42,
      43,    79,    44,    81,    46,    84,    31,    51,    91,    21,
      62,    20,    30,    70,    70,    10,    58,    80,    50,    80,
      89,    77,    52,    62,    76,    78,    80,    83,    45,    82,
      87,    47,    85,    80,    62,    33,     3,    91,    30,    90,
      52,    33,    75,    77,    81,    83,    84,    87,    48,    86,
      52,    33,    58,    21,    80,    58,    82,    81,    85,    84,
      87,    58,    22,    62,    90,    16,    65,    82,    86,    85,
      84,    22,    33,    62,    15,    86,    85,    58,    33,    33,
      86,    22,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    57,    57,    58,    58,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    64,    65,    65,    66,    67,
      68,    69,    70,    70,    71,    72,    73,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    80,    81,    81,    82,    82,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    13,     0,     3,     0,     3,
       5,     0,     3,     0,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     9,     0,     4,     7,     6,
       9,     3,     0,     2,     3,     1,     2,     2,     0,     3,
       2,     3,     0,     3,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     0,     4,     0,     4,     4,
       0,     5,     0,     5,     0,     5,     2,     2,     4,     4,
       0,     1,     0,     2,     0,     3,     1,     4
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
#line 1383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "mini_l.y" /* yacc.c:1646  */
    {printf("Program --> epsilon\n");}
#line 1389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 44 "mini_l.y" /* yacc.c:1646  */
    {printf("Program --> Function Program\n");}
#line 1395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 47 "mini_l.y" /* yacc.c:1646  */
    {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY\n");}
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
<<<<<<< HEAD
#line 37 "mini_l.y" /* yacc.c:1646  */
=======
#line 51 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("A --> epsilon\n");}
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
<<<<<<< HEAD
#line 38 "mini_l.y" /* yacc.c:1646  */
=======
#line 52 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("A --> Declaration SEMICOLON A\n");}
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
<<<<<<< HEAD
#line 41 "mini_l.y" /* yacc.c:1646  */
=======
#line 55 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("B --> epsilon\n");}
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
<<<<<<< HEAD
#line 42 "mini_l.y" /* yacc.c:1646  */
=======
#line 56 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("B --> Statement SEMICOLON B\n");}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
<<<<<<< HEAD
#line 45 "mini_l.y" /* yacc.c:1646  */
=======
#line 59 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Declaration --> IDENT C COLON D INTEGER\n");}
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
<<<<<<< HEAD
#line 48 "mini_l.y" /* yacc.c:1646  */
=======
#line 62 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("C --> epsilon\n");}
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
<<<<<<< HEAD
#line 49 "mini_l.y" /* yacc.c:1646  */
=======
#line 63 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("C --> COMMA IDENT C\n");}
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
<<<<<<< HEAD
#line 52 "mini_l.y" /* yacc.c:1646  */
=======
#line 66 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("D --> epsilon\n");}
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
<<<<<<< HEAD
#line 53 "mini_l.y" /* yacc.c:1646  */
=======
#line 67 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("D --> ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF\n");}
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
<<<<<<< HEAD
#line 56 "mini_l.y" /* yacc.c:1646  */
=======
#line 70 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Statement --> E\n");}
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
<<<<<<< HEAD
#line 57 "mini_l.y" /* yacc.c:1646  */
=======
#line 71 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Statement --> F\n");}
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
<<<<<<< HEAD
#line 58 "mini_l.y" /* yacc.c:1646  */
=======
#line 72 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Statement --> H\n");}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
<<<<<<< HEAD
#line 59 "mini_l.y" /* yacc.c:1646  */
=======
#line 73 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Statement --> I\n");}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
<<<<<<< HEAD
#line 60 "mini_l.y" /* yacc.c:1646  */
=======
#line 74 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Statement --> J\n");}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
<<<<<<< HEAD
#line 61 "mini_l.y" /* yacc.c:1646  */
=======
#line 75 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Statement --> K\n");}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
<<<<<<< HEAD
#line 62 "mini_l.y" /* yacc.c:1646  */
=======
#line 76 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Statement --> M\n");}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
<<<<<<< HEAD
#line 63 "mini_l.y" /* yacc.c:1646  */
=======
#line 77 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Statement --> N\n");}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
<<<<<<< HEAD
#line 64 "mini_l.y" /* yacc.c:1646  */
=======
#line 78 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Statement --> O\n");}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
<<<<<<< HEAD
#line 67 "mini_l.y" /* yacc.c:1646  */
=======
#line 81 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("E --> Var ASSIGN Expression\n");}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
<<<<<<< HEAD
#line 70 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> Var ASSIGN Expression");}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 73 "mini_l.y" /* yacc.c:1646  */
=======
#line 84 "mini_l.y" /* yacc.c:1646  */
    {printf("F --> Var ASSIGN Expression SEMICOLON\n");}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("G --> epsilon\n");}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
<<<<<<< HEAD
#line 74 "mini_l.y" /* yacc.c:1646  */
=======
#line 88 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("G --> ELSE Statement SEMICOLON B\n");}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
<<<<<<< HEAD
#line 77 "mini_l.y" /* yacc.c:1646  */
=======
#line 91 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("H --> ELSE Statement SEMICOLON B\n");}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
<<<<<<< HEAD
#line 80 "mini_l.y" /* yacc.c:1646  */
=======
#line 94 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("I --> DO BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
<<<<<<< HEAD
#line 83 "mini_l.y" /* yacc.c:1646  */
=======
#line 97 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("J --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP\n");}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
<<<<<<< HEAD
#line 86 "mini_l.y" /* yacc.c:1646  */
=======
#line 100 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("K --> READ Var L\n");}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
<<<<<<< HEAD
#line 89 "mini_l.y" /* yacc.c:1646  */
=======
#line 103 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("L --> epsilon\n");}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
<<<<<<< HEAD
#line 90 "mini_l.y" /* yacc.c:1646  */
=======
#line 104 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("L --> COMMA Var\n");}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
<<<<<<< HEAD
#line 93 "mini_l.y" /* yacc.c:1646  */
=======
#line 107 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("M --> WRITE Var L\n");}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
<<<<<<< HEAD
#line 96 "mini_l.y" /* yacc.c:1646  */
=======
#line 110 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("N --> CONTINUE\n");}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
<<<<<<< HEAD
#line 99 "mini_l.y" /* yacc.c:1646  */
=======
#line 113 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("O --> RETURN Expression\n");}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
<<<<<<< HEAD
#line 102 "mini_l.y" /* yacc.c:1646  */
=======
#line 116 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Bool-Expr --> Relation-And-Expr P\n");}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
<<<<<<< HEAD
#line 105 "mini_l.y" /* yacc.c:1646  */
=======
#line 119 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("P --> epsilon\n");}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
<<<<<<< HEAD
#line 106 "mini_l.y" /* yacc.c:1646  */
=======
#line 120 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("P --> OR Relation-And-Expr P\n");}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
<<<<<<< HEAD
#line 109 "mini_l.y" /* yacc.c:1646  */
=======
#line 123 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Relation-And-Expr --> Relation-Expr Q\n");}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
<<<<<<< HEAD
#line 110 "mini_l.y" /* yacc.c:1646  */
=======
#line 124 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Relation-And-Expr --> NOT Relation-Expr Q\n");}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
<<<<<<< HEAD
#line 113 "mini_l.y" /* yacc.c:1646  */
=======
#line 127 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Q --> epsilon\n");}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
<<<<<<< HEAD
#line 114 "mini_l.y" /* yacc.c:1646  */
=======
#line 128 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Q --> AND Relation-Expr Q\n");}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
<<<<<<< HEAD
#line 117 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> R Expression Comp Expression\n");}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 118 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> R TRUE\n");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 119 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> R FALSE\n");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 120 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> R L_PAREN Bool-Expr R_PAREN\n");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 123 "mini_l.y" /* yacc.c:1646  */
=======
#line 131 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> Expression Comp Expression\n");}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 132 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> TRUE\n");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 133 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> FALSE\n");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 134 "mini_l.y" /* yacc.c:1646  */
    {printf("Relation-Expr --> L_PAREN Bool-Expr R_PAREN\n");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 137 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Comp --> EQ\n");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
<<<<<<< HEAD
#line 124 "mini_l.y" /* yacc.c:1646  */
=======
#line 138 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Comp --> NEQ\n");}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
<<<<<<< HEAD
#line 125 "mini_l.y" /* yacc.c:1646  */
=======
#line 139 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Comp --> LT\n");}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
<<<<<<< HEAD
#line 126 "mini_l.y" /* yacc.c:1646  */
=======
#line 140 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Comp --> GT\n");}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
<<<<<<< HEAD
#line 127 "mini_l.y" /* yacc.c:1646  */
=======
#line 141 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Comp --> LTE\n");}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
<<<<<<< HEAD
#line 128 "mini_l.y" /* yacc.c:1646  */
=======
#line 142 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Comp --> GTE\n");}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
<<<<<<< HEAD
#line 134 "mini_l.y" /* yacc.c:1646  */
=======
#line 148 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("S --> epsilon\n");}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
<<<<<<< HEAD
#line 135 "mini_l.y" /* yacc.c:1646  */
=======
#line 149 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("S --> PLUS Multiplicative-Expr S T\n");}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
<<<<<<< HEAD
#line 138 "mini_l.y" /* yacc.c:1646  */
=======
#line 152 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("T --> epsilon\n");}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
<<<<<<< HEAD
#line 139 "mini_l.y" /* yacc.c:1646  */
=======
#line 153 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("T --> SUB Multiplicative-Expr S T\n");}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
<<<<<<< HEAD
#line 142 "mini_l.y" /* yacc.c:1646  */
=======
#line 156 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Multiplicative-Expr --> Term U V W\n");}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
<<<<<<< HEAD
#line 145 "mini_l.y" /* yacc.c:1646  */
=======
#line 159 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("U --> epsilon\n");}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
<<<<<<< HEAD
#line 146 "mini_l.y" /* yacc.c:1646  */
=======
#line 160 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("U --> MULT Term U V W\n");}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
<<<<<<< HEAD
#line 149 "mini_l.y" /* yacc.c:1646  */
=======
#line 163 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("V --> epsilon\n");}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
<<<<<<< HEAD
#line 150 "mini_l.y" /* yacc.c:1646  */
=======
#line 164 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("V --> DIV Term U V W\n");}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
<<<<<<< HEAD
#line 153 "mini_l.y" /* yacc.c:1646  */
=======
#line 167 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("W --> epsilon\n");}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
<<<<<<< HEAD
#line 154 "mini_l.y" /* yacc.c:1646  */
=======
#line 168 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("W --> MOD Term U V W\n");}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
<<<<<<< HEAD
#line 157 "mini_l.y" /* yacc.c:1646  */
=======
#line 171 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Term --> X Var\n");}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
<<<<<<< HEAD
#line 158 "mini_l.y" /* yacc.c:1646  */
=======
#line 172 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Term --> X NUMBER\n");}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
<<<<<<< HEAD
#line 159 "mini_l.y" /* yacc.c:1646  */
=======
#line 173 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Term --> X L_PAREN Expression R_PAREN\n");}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
<<<<<<< HEAD
#line 160 "mini_l.y" /* yacc.c:1646  */
=======
#line 174 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Term --> IDENT L_PAREN Y R_PAREN\n");}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
<<<<<<< HEAD
#line 163 "mini_l.y" /* yacc.c:1646  */
=======
#line 177 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("X --> epsilon\n");}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
<<<<<<< HEAD
#line 164 "mini_l.y" /* yacc.c:1646  */
=======
#line 178 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("X --> SUB\n");}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
<<<<<<< HEAD
#line 167 "mini_l.y" /* yacc.c:1646  */
=======
#line 181 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Y --> epsilon\n");}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
<<<<<<< HEAD
#line 168 "mini_l.y" /* yacc.c:1646  */
=======
#line 182 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Y --> Expression Z\n");}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
<<<<<<< HEAD
#line 171 "mini_l.y" /* yacc.c:1646  */
=======
#line 185 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Z --> epsilon\n");}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
<<<<<<< HEAD
#line 172 "mini_l.y" /* yacc.c:1646  */
=======
#line 186 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Z --> COMMA Expression Z\n");}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
<<<<<<< HEAD
#line 175 "mini_l.y" /* yacc.c:1646  */
=======
#line 189 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Var --> IDENT\n");}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
<<<<<<< HEAD
#line 176 "mini_l.y" /* yacc.c:1646  */
=======
#line 190 "mini_l.y" /* yacc.c:1646  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d
    {printf("Var --> IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1831 "y.tab.c" /* yacc.c:1646  */
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
<<<<<<< HEAD
#line 178 "mini_l.y" /* yacc.c:1906  */
=======
#line 192 "mini_l.y" /* yacc.c:1906  */
>>>>>>> 1dbb8e0318a4b9ebf86e0eaf20e046d0ac31d30d


void yyerror(const char *msg)
{
  // extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  extern int currentColumn;
  extern int currentLine;

  printf("Rick's Error: %s at symbol '%s' on line %d column %d \n", msg, yytext, currentLine, currentColumn);

  return;
}

int main( int argc, char **argv )
{
  //yylex();
  yyparse();
}