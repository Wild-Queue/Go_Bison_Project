/* A Bison parser, made by GNU Bison 3.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "Analyser.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>
/*#include "hashtbl.c" //include the hash table
HASHTBL *symbol; //Symbol Table declaration (global)
*/

//#define MAX_LINE_SIZE 256
int yywrap (void);
void yyerror (char *s);
int yylex();
#include <ctype.h>
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
void shiftRightSymbolVal(char symbol, int val);
void shiftLeftSymbolVal(char symbol, int val);
_Bool IsEqual1(int first, int second);


char filename[64];
FILE *yyin;
int scope; //global variable for scope, initialized to 0
//error_no = 0; //global variable for error count initialized to 0
#define MAX_ERRORS 5 //max number of errors


#line 101 "Analyser.tab.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    T_BREAK = 258,
    T_CASE = 259,
    T_CHAN = 260,
    T_CONST = 261,
    T_CONTINUE = 262,
    T_DEFAULT = 263,
    T_DEFER = 264,
    T_ELSE = 265,
    T_FALLTHROUGH = 266,
    T_FOR = 267,
    T_FUNC = 268,
    T_GO = 269,
    T_GOTO = 270,
    T_IF = 271,
    T_IMPORT = 272,
    T_INTERFACE = 273,
    T_MAP = 274,
    T_PACKAGE = 275,
    T_RANGE = 276,
    T_RETURN = 277,
    T_SELECT = 278,
    T_STRUCT = 279,
    T_SWITCH = 280,
    T_TYPE = 281,
    T_VAR = 282,
    T_ID = 283,
    T_INT = 284,
    T_INT8 = 285,
    T_INT16 = 286,
    T_INT32 = 287,
    T_INT64 = 288,
    T_UINT = 289,
    T_UINT8 = 290,
    T_UINT16 = 291,
    T_UINT32 = 292,
    T_UINT64 = 293,
    T_UINTPTR = 294,
    T_FLOAT32 = 295,
    T_FLOAT64 = 296,
    T_COMPLEX128 = 297,
    T_COMPLEX64 = 298,
    T_BOOL = 299,
    T_BITE = 300,
    T_RUNE = 301,
    T_STRING = 302,
    T_ERROR = 303,
    T_MAKE = 304,
    T_LEN = 305,
    T_CAP = 306,
    T_NEW = 307,
    T_APPEND = 308,
    T_COPY = 309,
    T_CLOSE = 310,
    T_DELETE = 311,
    T_COMPLEX = 312,
    T_REAL = 313,
    T_IMAG = 314,
    T_PANIC = 315,
    T_RECOVER = 316,
    T_ICONST = 317,
    T_SCONST = 318,
    T_RCONST = 319,
    T_BCONST = 320,
    T_CCONST = 321,
    T_IMCONST = 322,
    T_EOF = 323,
    T_LESS = 324,
    T_GREAT = 325,
    T_LESSOREQU = 326,
    T_GREATOREQU = 327,
    T_NOTEQU = 328,
    T_EQU = 329,
    T_ANDOP = 330,
    T_OROP = 331,
    T_NOTOP = 332,
    T_ADDOP = 333,
    T_MULTOP = 334,
    T_SUBTROP = 335,
    T_DIVOP = 336,
    T_MOD = 337,
    T_ADDASSOP = 338,
    T_MULTASSOP = 339,
    T_SUBTRASSOP = 340,
    T_DIVASSOP = 341,
    T_DOUBLEPLUSOP = 342,
    T_DOUBLEMINUSOP = 343,
    T_TAB = 344,
    T_NL = 345,
    T_POINTER = 346,
    T_REFERENCE = 347,
    T_LCURLYBR = 348,
    T_RCURLYBR = 349,
    T_LPAREN = 350,
    T_RPAREN = 351,
    T_LBRACK = 352,
    T_RBRACK = 353,
    T_SEMI = 354,
    T_DOT = 355,
    T_COMMA = 356,
    T_COLON = 357,
    T_ASSIGN = 358,
    T_ASSIGNOP = 359,
    T_DOTDOTDOT = 360,
    T_SIMPLCOMMENT = 361,
    T_LBLOCKCOMMET = 362,
    T_RBLOCKCOMMET = 363,
    T_BITANDOP = 364,
    T_BITOR = 365,
    T_XOR = 366,
    T_LSHIFT = 367,
    T_RSHIFT = 368,
    T_BITCLEAR = 369,
    T_MODEQUOP = 370,
    T_ANDEQUOP = 371,
    T_OREQUOP = 372,
    T_XOREQUOP = 373,
    T_LSHIFTEQU = 374,
    T_RSHIFTEQU = 375,
    T_BITCLEAREQU = 376,
    T_SENDOP = 377
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "Analyser.y"

  unsigned int integer;
  double real;
  char *string;
  char character;
  int boolean;

#line 272 "Analyser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#define YYLAST   2489

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  123
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  310
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  532

#define YYUNDEFTOK  2
#define YYMAXUTOK   377

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   159,   159,   160,   161,   164,   165,   168,   169,   170,
     171,   172,   173,   174,   175,   178,   181,   184,   187,   190,
     193,   195,   198,   199,   200,   201,   204,   205,   207,   210,
     213,   216,   219,   220,   223,   224,   227,   230,   231,   232,
     235,   236,   240,   241,   242,   243,   246,   249,   250,   253,
     256,   259,   262,   265,   268,   271,   272,   273,   276,   279,
     281,   284,   285,   286,   289,   290,   291,   294,   295,   298,
     300,   303,   304,   305,   308,   309,   312,   313,   316,   317,
     320,   322,   325,   326,   329,   332,   335,   336,   339,   341,
     344,   345,   346,   349,   352,   353,   356,   359,   362,   363,
     366,   369,   370,   371,   374,   375,   376,   379,   380,   381,
     382,   383,   386,   390,   393,   396,   397,   398,   399,   400,
     401,   404,   405,   406,   409,   412,   413,   416,   417,   421,
     422,   428,   429,   432,   435,   436,   437,   438,   439,   440,
     441,   442,   445,   447,   450,   451,   452,   453,   454,   455,
     458,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   477,   480,   483,   484,   487,   488,
     491,   492,   493,   494,   495,   498,   499,   500,   501,   502,
     503,   506,   507,   508,   509,   512,   513,   514,   515,   516,
     517,   518,   521,   522,   523,   524,   525,   526,   527,   530,
     531,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   551,   552,   553,   554,
     555,   556,   559,   562,   565,   568,   571,   574,   577,   578,
     581,   584,   585,   586,   589,   590,   591,   595,   596,   597,
     600,   601,   604,   605,   608,   609,   612,   613,   616,   619,
     620,   623,   625,   628,   629,   632,   633,   636,   639,   640,
     643,   644,   647,   648,   649,   650,   653,   656,   658,   666,
     669,   672,   673,   674,   677,   680,   683,   684,   687,   690,
     691,   692,   695,   696,   697,   700,   703,   704,   707,   708,
     711,   712,   715,   716,   719,   722,   725,   729,   731,   734,
     736,   739,   742,   745,   746,   748,   750,   753,   754,   755,
     758
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_BREAK", "T_CASE", "T_CHAN", "T_CONST",
  "T_CONTINUE", "T_DEFAULT", "T_DEFER", "T_ELSE", "T_FALLTHROUGH", "T_FOR",
  "T_FUNC", "T_GO", "T_GOTO", "T_IF", "T_IMPORT", "T_INTERFACE", "T_MAP",
  "T_PACKAGE", "T_RANGE", "T_RETURN", "T_SELECT", "T_STRUCT", "T_SWITCH",
  "T_TYPE", "T_VAR", "T_ID", "T_INT", "T_INT8", "T_INT16", "T_INT32",
  "T_INT64", "T_UINT", "T_UINT8", "T_UINT16", "T_UINT32", "T_UINT64",
  "T_UINTPTR", "T_FLOAT32", "T_FLOAT64", "T_COMPLEX128", "T_COMPLEX64",
  "T_BOOL", "T_BITE", "T_RUNE", "T_STRING", "T_ERROR", "T_MAKE", "T_LEN",
  "T_CAP", "T_NEW", "T_APPEND", "T_COPY", "T_CLOSE", "T_DELETE",
  "T_COMPLEX", "T_REAL", "T_IMAG", "T_PANIC", "T_RECOVER", "T_ICONST",
  "T_SCONST", "T_RCONST", "T_BCONST", "T_CCONST", "T_IMCONST", "T_EOF",
  "T_LESS", "T_GREAT", "T_LESSOREQU", "T_GREATOREQU", "T_NOTEQU", "T_EQU",
  "T_ANDOP", "T_OROP", "T_NOTOP", "T_ADDOP", "T_MULTOP", "T_SUBTROP",
  "T_DIVOP", "T_MOD", "T_ADDASSOP", "T_MULTASSOP", "T_SUBTRASSOP",
  "T_DIVASSOP", "T_DOUBLEPLUSOP", "T_DOUBLEMINUSOP", "T_TAB", "T_NL",
  "T_POINTER", "T_REFERENCE", "T_LCURLYBR", "T_RCURLYBR", "T_LPAREN",
  "T_RPAREN", "T_LBRACK", "T_RBRACK", "T_SEMI", "T_DOT", "T_COMMA",
  "T_COLON", "T_ASSIGN", "T_ASSIGNOP", "T_DOTDOTDOT", "T_SIMPLCOMMENT",
  "T_LBLOCKCOMMET", "T_RBLOCKCOMMET", "T_BITANDOP", "T_BITOR", "T_XOR",
  "T_LSHIFT", "T_RSHIFT", "T_BITCLEAR", "T_MODEQUOP", "T_ANDEQUOP",
  "T_OREQUOP", "T_XOREQUOP", "T_LSHIFTEQU", "T_RSHIFTEQU", "T_BITCLEAREQU",
  "T_SENDOP", "$accept", "Type", "TypeName", "TypeLit", "ArrayType",
  "ArrayLenght", "ElementType", "SliceType", "StruckType", "FileDeclLoop",
  "FileDecl", "EmbeddedField", "Tag", "PointerType", "BaseType",
  "FunctionType", "Signature", "Result", "Parameters", "ParameterLists",
  "ParameterList", "ParameterDecl", "InterfaceType", "InterfaceTypeLoop",
  "MethodSpec", "MethodName", "InterfaceTypeName", "MapType", "KeyType",
  "ChanelType", "Block", "StatmentList", "Declaration", "TopLevelDecl",
  "ConstDecl", "ConstDeclLoop", "ConstSpec", "IdentifierList",
  "ExpressionList", "TypeDecl", "TypeDeclLoop", "TypeSpec", "AliasDecl",
  "TypeDef", "VarDecl", "VarDeclLoop", "VarSpec", "ShortVarDecl",
  "FunctionDecl", "FunctionName", "FunctionBody", "MethodDecl", "Receiver",
  "Operand", "Literal", "BasicLit", "OperandName", "QualifiedIdent",
  "CompositeLit", "LiteralType", "LiteralValue", "ElementList",
  "ElementListLoop", "KeyedElement", "Key", "Element", "FunctionLit",
  "PrimaryExpr", "Selector", "Index", "Slice", "TypeAssertion",
  "Arguments", "MethodExpr", "ReceiverType", "Expression", "UnaryExpr",
  "binary_op", "rel_op", "add_op", "mul_op", "unary_op", "Convertion",
  "Statment", "SimpleStmt", "EmptyStmt", "LabeledStmt", "Label",
  "ExpressionStmt", "SendStmt", "Channel", "IncDecStmt", "Assignment",
  "assign_op", "IfStmt", "SwitchStmt", "ExprSwitchStmt",
  "ExprCaseClauseLoop", "ExprCaseClause", "ExprSwitchCase",
  "TypeSwitchStmt", "TypeCaseClauseLoop", "TypeSwitchGuard",
  "TypeCaseClause", "TypeSwitchCase", "TypeList", "ForStmt", "Condition",
  "ForClause", "InitStmt", "PostStmt", "RangeClause", "GoStmt",
  "SelectStmt", "CommClauseLoop", "CommClause", "CommCase", "RecvStmt",
  "RecvExpr", "ReturnStmt", "BreakStmt", "ContinueStmt", "GotoStmt",
  "FallthoughStmt", "DeferStmt", "SourceFile", "ImportDeclLoop",
  "TopLevelDeclLoop", "PackageClause", "PackageName", "ImportDecl",
  "ImportSpecLoop", "ImportSpec", "ImportPath", YY_NULLPTR
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
     375,   376,   377
};
# endif

#define YYPACT_NINF -433

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-433)))

#define YYTABLE_NINF -303

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,     4,    59,   -34,  -433,  -433,  -433,    62,    53,   167,
      -4,  -433,    -3,    35,    35,  -433,  -433,   -15,     8,    10,
      14,  -433,    11,  -433,  -433,  -433,  -433,  -433,    46,    62,
      56,    26,  -433,  -433,    30,   106,  -433,   527,  -433,   431,
    -433,    54,   136,   815,   161,  -433,  -433,  -433,   106,   841,
    -433,   167,  -433,  -433,  -433,    -3,   106,    58,    96,  1701,
      54,   116,   114,   119,  -433,  1733,  1733,  1088,  1612,   194,
     109,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,   115,   390,  1733,  -433,   122,   121,   124,   127,
     131,  1740,  -433,    54,  1733,  -433,   137,   142,   139,   143,
    1612,   140,  -433,  -433,  -433,  -433,   106,  1764,  -433,  -433,
    -433,   218,  1733,    -8,  -433,  -433,   153,    54,   152,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  1733,  -433,  1612,   575,
    1733,  -433,  -433,   194,   155,   158,   165,   168,   166,   177,
     183,  -433,  -433,  -433,  -433,  -433,   200,  -433,   189,  -433,
     160,  2375,  -433,  1612,  -433,  -433,  2087,  1733,  1612,   267,
    -433,  -433,  -433,  -433,   431,  1733,   877,  -433,  -433,   431,
    -433,  -433,  -433,   131,  -433,  -433,   161,  -433,   106,  -433,
    1612,  -433,  1701,  -433,    29,  -433,   202,   201,    54,   203,
    -433,   208,    37,   280,  -433,   221,   211,   271,  1733,  -433,
     131,   -13,  2133,   239,  -433,  1612,  1733,   702,  -433,  1110,
    1612,  1151,    17,  -433,  -433,  -433,  -433,  -433,   136,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  1612,  -433,
    -433,  -433,  -433,  1612,  -433,  -433,  -433,  -433,  -433,   313,
     313,  1612,  -433,  1002,  1612,   313,  1638,  1612,   251,  1221,
     126,  -433,   249,  -433,   248,  1941,  -433,  1956,   253,  -433,
    -433,  -433,   252,  -433,  -433,   233,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,   153,  -433,  -433,  -433,  -433,  -433,  -433,   218,  -433,
     218,  1733,  -433,  -433,    -8,  -433,  -433,   271,  -433,  -433,
    1733,  1735,  -433,  -433,   257,   -45,   262,   263,  -433,  2152,
    -433,    87,    70,  2198,  1258,  2212,  -433,  1733,  -433,  2375,
    -433,  -433,  -433,  -433,  2375,  1612,   216,  -433,   261,  2354,
    1794,  -433,   131,   131,   269,   131,  2375,  -433,  1848,   275,
    -433,   366,   230,   374,   229,  1902,   283,   286,  -433,  1612,
    -433,   279,   282,  1612,  -433,  -433,   877,   978,  1612,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,   291,  -433,   296,  1284,
    -433,  1284,  -433,  1321,    45,  -433,   292,    71,  -433,  -433,
    2027,  1347,   297,  2375,  1384,   371,  -433,  -433,  1410,  -433,
     384,  1612,  1505,   302,   366,   295,   294,  1512,   304,   374,
     298,    20,   374,  1575,   395,  -433,  -433,  -433,  -433,  -433,
    -433,  2375,  -433,  -433,   262,  -433,  -433,  2375,  -433,   100,
    -433,   306,  -433,  -433,   308,  -433,  1612,  -433,  2073,  -433,
    1612,  1612,  1638,  2375,   307,    -2,  2258,  -433,   310,   301,
    2010,  -433,  -433,  -433,  -433,  -433,   877,   250,  -433,  -433,
    -433,  -433,   877,   638,   316,   182,   374,  2283,   314,  1675,
     317,   395,   315,  -433,  -433,   319,   102,  -433,  -433,  2308,
    -433,  1612,  2375,  2375,  -433,  -433,  1638,  -433,  -433,   411,
    1612,  1612,  -433,    23,  -433,   326,  -433,   329,   374,   395,
    -433,   324,  -433,  -433,  -433,   877,  -433,  -433,   331,  -433,
    2329,  -433,    -2,  2375,  -433,  -433,  1645,  -433,  -433,   334,
     335,  1733,  -433,  -433,  -433,  -433,  -433,   337,  -433,  -433,
    -433,  -433
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   302,   301,     1,   298,     0,   300,
       0,   310,   306,     0,     0,   303,   309,     0,     0,     0,
       0,    64,     0,    61,    62,    63,    65,    66,     0,   298,
       0,     0,   307,   308,    74,    70,    67,    71,    96,    39,
     100,     0,     0,     0,    81,    78,    82,    83,    89,     0,
      86,   300,   296,   297,   304,   306,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     2,     3,     7,    12,     8,     9,    10,    11,    13,
      14,     6,     0,     5,     0,    45,     0,    37,    40,     0,
      95,    32,    51,     0,     0,    85,     0,     0,     0,     0,
       0,    91,   299,   305,    75,    68,    70,     0,    17,    55,
      31,    49,     0,    21,    30,    29,     0,     0,   112,   107,
     110,   108,   111,   109,   194,   192,   196,   193,     0,     0,
       0,   197,   195,   198,   165,     2,     7,     0,    12,     8,
      13,   134,   101,   104,   102,   105,     0,   106,   168,   136,
       0,    16,   166,     0,   135,    73,    76,     0,     0,     0,
      43,    44,    36,    38,     0,     0,    60,    97,    94,    39,
      35,    33,    34,    99,    84,    79,    81,    87,    89,    92,
       0,    69,     0,    56,     5,    52,     0,     0,     0,     0,
      54,     0,    74,     0,    26,     0,     0,    25,     0,     4,
      31,   165,     0,     0,    18,     0,     0,     0,   114,     0,
       0,     0,     0,   137,   138,   139,   140,   141,     0,   175,
     176,   177,   178,   179,   180,   171,   170,   181,   185,   182,
     186,   187,   190,   183,   184,   188,   189,   191,     0,   172,
     173,   174,   169,     0,    57,    72,   113,    41,    42,   289,
     291,     0,   294,   222,     0,   293,   222,   287,     0,   222,
     112,   210,     0,   201,     0,     0,   221,   225,     0,   203,
     216,   202,     0,   217,   218,     0,   219,   220,   211,   212,
     240,   241,   214,   204,   213,   205,   206,   207,   208,   209,
     215,    45,    98,    80,    88,    90,    55,    46,    49,    50,
      49,     0,    27,    19,    21,    28,    24,    23,   133,   103,
       0,     0,    15,   123,   132,     0,   126,     0,   128,   131,
     163,   165,     0,     0,     0,     0,   142,     0,   164,   167,
      77,   224,   288,   290,   295,     0,   112,   265,     0,     0,
      76,   269,     0,     0,     0,     0,   274,   292,    76,     0,
     286,   277,   112,   247,   168,    76,     0,     0,    58,     0,
     233,     0,     0,     0,   228,   229,    60,   222,     0,    47,
      48,    53,    20,    22,   117,   200,     0,   122,     0,     0,
     124,     0,   162,     0,     0,   160,     0,     0,   143,   147,
       0,     0,     0,   273,     0,   233,   262,   263,     0,   264,
     239,     0,     0,     0,   277,     0,     0,     0,     0,   247,
       0,     0,   247,     0,   254,    93,   231,   232,   230,    59,
     223,   226,   199,   121,   126,   132,   127,   131,   156,     0,
     159,     0,   154,   157,     0,   145,     0,   146,     0,   150,
       0,     0,   222,   266,     0,     0,     0,   281,     0,     0,
      76,   279,   280,   284,   275,   276,    60,     0,   250,   249,
     245,   246,    60,     0,     0,   112,   247,     0,     0,     0,
       0,   254,     0,   125,   161,     0,     0,   153,   151,     0,
     144,     0,   272,   271,   270,   268,   222,   238,   237,   236,
       0,     0,   278,     0,   248,     0,   244,     0,   247,   254,
     259,   261,   258,   252,   253,    60,   155,   158,     0,   149,
       0,   267,     0,   285,   283,   282,     0,   256,   243,     0,
       0,     0,   257,   152,   148,   235,   234,     0,   242,   251,
     260,   255
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -433,   -22,   -37,  -433,    74,  -433,  -104,   171,   255,   130,
    -433,  -433,   128,  -433,  -433,  -433,   -29,  -433,     5,  -433,
     266,  -433,  -433,  -248,  -433,   -33,  -433,   409,  -433,  -433,
     -74,  -355,    15,  -433,  -433,   325,   422,    38,   123,  -433,
     278,   423,  -433,  -433,  -433,   273,   425,  -433,  -433,  -433,
    -132,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -141,  -433,    32,    78,  -433,    79,  -433,  -251,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,   376,   309,  -433,  -433,  -255,
    -247,  -433,  -433,    97,  -252,  -433,  -433,  -215,  -433,    61,
    -433,  -433,  -433,  -433,  -382,  -433,  -433,  -379,  -433,  -433,
    -433,  -432,    52,  -433,  -433,   -55,  -433,    69,  -433,  -433,
     -16,  -433,  -433,  -433,    67,  -433,  -433,  -433,  -369,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,   444,   426,  -433,   162,
    -433,   421,   470,   164
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   134,   135,    72,   136,   137,   109,   138,   139,   195,
     196,   197,   306,    76,   115,    77,    90,   171,    91,    86,
      87,    88,    78,   186,   187,   188,   189,   140,   191,    80,
     261,   262,   263,    22,    23,    57,    58,   264,   265,    24,
      96,    97,    46,    47,    25,    98,    99,   266,    26,    41,
     168,    27,    42,   141,   142,   143,   144,    81,   145,   146,
     314,   315,   380,   316,   317,   318,   147,   148,   213,   214,
     215,   216,   217,   149,   150,   156,   152,   238,   239,   240,
     241,   153,   154,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   363,   278,   279,   280,   408,   409,   410,
     281,   470,   357,   471,   472,   502,   282,   342,   343,   344,
     485,   345,   283,   284,   403,   404,   405,   452,   453,   285,
     286,   287,   288,   289,   290,     2,     9,    28,     3,    82,
      10,    30,    31,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   341,    71,   183,   349,   208,    71,   356,   354,    93,
     361,   419,    71,    34,   256,    70,   167,    85,   362,     1,
     192,    95,    71,    40,    21,     4,   204,   101,    71,    71,
     461,   110,     4,   464,   332,   333,    38,   108,    43,   504,
     347,   292,    34,   114,   116,   326,    71,    71,   326,   377,
     369,   326,   370,   244,    71,    37,   378,    71,    49,     6,
      11,   160,   161,   488,   173,     7,    21,   520,   308,   170,
      71,   193,   174,    37,   185,    71,   194,    89,   296,     8,
      35,     4,   205,   199,   361,   108,    49,   497,   200,    71,
     190,   166,   362,    71,   104,    29,   172,    13,    11,   167,
      -5,   492,   312,    39,   114,    44,   201,   494,   108,    48,
      51,    73,   327,    73,    52,   463,    11,    73,   516,   519,
      71,   514,   515,    73,   -51,    55,   167,    71,    71,  -302,
     526,    56,    71,    73,    34,   108,    -5,  -302,    56,    73,
      73,   430,    85,   248,    37,    71,   431,   291,    12,    39,
     522,   198,    54,    13,   105,   457,   302,    73,    73,   299,
     108,    71,   354,     5,    92,    73,   385,   433,    73,    71,
      14,   386,   434,    17,    14,   387,   307,    32,    33,   337,
      18,    73,   205,   382,   108,   328,    73,   321,   383,    43,
     484,   155,   384,    19,    20,   106,   474,   371,   507,   157,
      73,   475,    89,   508,    73,   476,   374,    89,    74,   111,
      74,   112,   113,   158,    74,   159,    49,    14,   162,    -5,
      74,    -5,   163,   179,   166,   164,    -5,    56,  -224,   -74,
      74,    73,   165,   175,   484,   177,    74,    74,    73,    73,
     425,   176,   178,    73,   180,    -5,   184,    -5,    -5,   199,
     205,  -120,    -5,    -5,    74,    74,    73,    -5,  -116,  -118,
     218,   185,    74,   185,    71,    74,   206,   194,   396,   397,
    -115,   399,    73,    71,   400,    -5,  -119,    -5,    74,   108,
      73,   245,    -5,    74,   209,   406,   210,   211,   108,   212,
      71,   338,    75,   207,    75,   246,   297,    74,    75,    59,
     298,    74,   300,   295,    75,   392,   301,   117,    64,    -5,
     304,    -5,    61,    62,    75,   303,    -5,    56,    63,   -74,
      75,    75,   118,    -5,   209,    -5,   210,   211,    74,   411,
      -5,    56,   322,   406,   305,    74,    74,   310,    75,    75,
      74,   331,   198,   358,   351,   209,    75,   210,   211,    75,
     493,   359,   366,    74,   367,   368,   119,   120,   121,  -130,
     122,   123,    75,   379,   394,   381,   330,    75,   398,    74,
     402,   487,   489,    65,   401,    73,   339,    74,   407,   414,
     350,    75,   413,   416,    73,    75,   417,   422,   432,   128,
     423,   129,   441,   439,   445,    59,   454,   456,   460,   469,
     462,    73,   477,    60,   478,   491,   486,   499,    61,    62,
     496,   503,    75,   490,    63,   506,    69,   505,    64,    75,
      75,   512,   517,   518,    75,   521,    71,   523,   528,   529,
     247,   181,    71,   531,   372,   373,    59,    75,   525,    36,
     448,   392,    45,   151,    60,    50,    79,   501,    79,    61,
      62,   294,    79,    75,   293,    63,   473,   424,    79,    83,
     426,    75,   242,   451,   420,   468,   530,   444,    79,    65,
     511,   455,    74,    53,    79,    79,   103,   102,    15,    71,
       0,    74,   415,     0,    71,    66,   418,    67,     0,     0,
    -302,    56,    79,    79,   392,   -74,     0,     0,    74,   501,
      79,     0,     0,    79,   202,   151,   429,     0,     0,     0,
      65,     0,    69,     0,     0,     0,    79,   415,     0,     0,
       0,    79,     0,     0,     0,   449,    66,     0,    67,     0,
     459,     0,    59,     0,     0,    79,    84,    73,     0,    79,
      60,     0,   267,    73,     0,    61,    62,     0,     0,     0,
       0,    63,     0,    69,     0,    64,    75,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    79,     0,     0,     0,
       0,     0,     0,    79,    79,     0,     0,     0,    79,     0,
      59,   311,    75,   319,     0,     0,   323,   325,   117,     0,
      73,    79,     0,    61,    62,    73,     0,     0,     0,    63,
       0,     0,     0,   118,     0,     0,    65,    79,     0,     0,
       0,     0,     0,     0,   329,    79,     0,     0,     0,     0,
       0,     0,    66,     0,    67,     0,     0,   334,     0,   340,
     346,    68,   348,     0,    74,   355,     0,   119,   120,   121,
      74,   122,   123,    59,     0,     0,     0,     0,     0,    69,
       0,    60,   124,   125,   126,   127,    61,    62,     0,     0,
       0,     0,    63,     0,   495,     0,    64,     0,     0,     0,
     128,     0,   129,   130,     0,     0,     0,     0,     0,     0,
     203,     0,     0,     0,   131,     0,   132,    74,     0,     0,
       0,     0,    74,     0,     0,     0,     0,   133,     0,     0,
     390,     0,     0,     0,     0,     0,     0,    59,     0,     0,
      79,   393,     0,     0,     0,   117,     0,    65,    75,    79,
      61,    62,     0,     0,    75,     0,    63,     0,     0,     0,
     118,     0,     0,    66,     0,    67,    79,     0,     0,     0,
       0,     0,   267,   267,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,   427,     0,     0,
      69,     0,     0,     0,   119,   120,   121,   438,   122,   123,
       0,    75,     0,     0,   443,     0,    75,   446,   450,   124,
     125,   126,   127,     0,     0,     0,     0,     0,     0,   467,
       0,     0,     0,     0,     0,   207,   313,   128,     0,   129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,   479,   132,     0,     0,   482,   483,   267,     0,
      59,     0,     0,     0,   133,     0,     0,     0,    60,     0,
       0,     0,   267,    61,    62,     0,     0,     0,   267,    63,
       0,     0,     0,    64,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,    60,     0,     0,   510,     0,    61,
      62,     0,   267,     0,     0,    63,   513,   513,     0,    64,
       0,     0,    79,     0,     0,     0,     0,     0,    79,     0,
     249,   267,    59,    17,   250,     0,   251,     0,   252,   253,
     117,   254,   255,   256,    65,    61,    62,     0,     0,   257,
     258,    63,   259,    19,    20,   260,     0,     0,     0,     0,
      66,     0,    67,     0,     0,     0,     0,     0,     0,    94,
      65,     0,     0,     0,     0,    79,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,    66,    69,    67,   119,
     120,   121,     0,   122,   123,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   126,   127,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
     166,     0,   128,     0,   129,     0,  -222,     0,     0,     0,
       0,   249,     0,    59,    17,   250,   131,   251,   132,   252,
     253,   117,   254,   255,   256,     0,    61,    62,     0,   133,
     257,   258,    63,   259,    19,    20,   260,    59,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
      61,    62,     0,   335,     0,     0,    63,     0,     0,     0,
     336,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,     0,   122,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   125,   126,   127,     0,
       0,     0,     0,     0,   119,   120,   121,     0,   122,   123,
       0,   166,     0,   128,     0,   129,     0,     0,     0,   124,
     125,   126,   127,     0,     0,     0,     0,   131,     0,   132,
       0,     0,     0,    59,     0,   166,     0,   128,     0,   129,
     133,   117,     0,     0,     0,     0,    61,    62,     0,     0,
       0,   131,    63,   132,     0,    59,   118,     0,     0,     0,
       0,     0,     0,   117,   133,     0,     0,     0,    61,    62,
       0,     0,     0,     0,    63,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,     0,   122,   123,    59,     0,     0,     0,
       0,     0,     0,     0,   117,   124,   125,   126,   127,    61,
      62,     0,   119,   120,   121,    63,   122,   123,     0,   118,
       0,     0,     0,   128,     0,   129,   130,   124,   125,   126,
     127,     0,     0,     0,     0,     0,     0,   131,     0,   132,
       0,     0,     0,     0,     0,   128,   320,   129,     0,     0,
     133,     0,     0,   119,   120,   121,     0,   122,   123,   131,
       0,   132,     0,     0,     0,     0,    59,     0,   124,   125,
     126,   127,   133,     0,   117,     0,     0,     0,     0,    61,
      62,     0,     0,     0,     0,    63,   128,     0,   129,   352,
       0,     0,     0,   324,     0,     0,     0,     0,     0,     0,
     131,     0,   132,    59,     0,     0,     0,     0,     0,     0,
       0,   117,     0,   133,     0,     0,    61,    62,     0,     0,
       0,     0,    63,   119,   120,   121,   118,   122,   123,    59,
       0,     0,     0,     0,     0,     0,     0,   117,   124,   125,
     126,   127,    61,    62,     0,     0,     0,     0,    63,     0,
       0,     0,   118,     0,   353,     0,   128,     0,   129,     0,
     119,   120,   121,     0,   122,   123,    59,     0,     0,     0,
     131,     0,   132,     0,   117,   124,   125,   126,   127,    61,
      62,     0,     0,   133,     0,    63,   119,   120,   121,   118,
     122,   123,    59,   128,     0,   129,   389,     0,     0,     0,
     117,   124,   125,   126,   127,    61,    62,   131,     0,   132,
       0,    63,     0,     0,     0,   118,     0,   207,     0,   128,
     133,   129,     0,   119,   120,   121,     0,   122,   123,    59,
       0,     0,     0,   131,     0,   132,     0,   117,   124,   125,
     126,   127,    61,    62,     0,   440,   133,     0,    63,   119,
     120,   121,   118,   122,   123,    59,   128,   428,   129,     0,
       0,     0,     0,   117,   124,   125,   126,   127,    61,    62,
     131,     0,   132,     0,    63,     0,     0,     0,   118,     0,
       0,     0,   128,   133,   129,   437,   119,   120,   121,     0,
     122,   123,     0,     0,     0,     0,   131,     0,   132,     0,
       0,   124,   125,   126,   127,     0,     0,     0,     0,   133,
       0,     0,   119,   120,   121,     0,   122,   123,     0,   128,
       0,   129,     0,     0,     0,     0,     0,   124,   125,   126,
     127,     0,     0,   131,     0,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   133,   129,     0,   442,
      59,     0,     0,   447,     0,     0,     0,    59,   117,   131,
     458,   132,     0,    61,    62,   117,     0,     0,     0,    63,
      61,    62,   133,   336,     0,     0,    63,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
       0,   122,   123,     0,   119,   120,   121,     0,   122,   123,
      59,     0,   124,   125,   126,   127,     0,     0,   117,   124,
     125,   126,   127,    61,    62,     0,     0,     0,     0,    63,
     128,     0,   129,   465,     0,     0,     0,   128,     0,   129,
       0,     0,     0,     0,   131,     0,   132,    59,     0,     0,
       0,   131,     0,   132,     0,   117,     0,   133,     0,     0,
      61,    62,     0,     0,   133,     0,    63,   119,   120,   121,
     118,   122,   123,    59,     0,     0,     0,     0,     0,     0,
      59,   117,   124,   125,   126,   127,    61,    62,    60,     0,
       0,     0,    63,    61,    62,     0,   336,     0,   466,    63,
     128,   527,   129,    64,   119,   120,   121,     0,   122,   123,
      59,     0,     0,   500,   131,     0,   132,     0,    60,   124,
     125,   126,   127,    61,    62,     0,     0,   133,     0,    63,
     119,   120,   121,    64,   122,   123,    59,   128,     0,   129,
       0,     0,     0,     0,    60,   124,   125,   126,   127,    61,
      62,   131,     0,   132,    65,    63,     0,     0,     0,    64,
       0,     0,     0,   128,   133,   129,     0,     0,    59,     0,
      66,     0,    67,     0,     0,    59,    60,   131,     0,   132,
       0,    61,    62,    60,    65,     0,     0,    63,    61,    62,
     133,    64,     0,     0,    63,     0,     0,    69,    64,   182,
      66,     0,    67,     0,     0,     0,     0,    60,     0,     0,
      65,     0,    61,    62,     0,     0,     0,     0,    63,     0,
       0,     0,    64,     0,     0,     0,    66,    69,    67,     0,
       0,     0,     0,     0,   219,   220,   221,   222,   223,   224,
     225,   226,    65,   227,   228,   229,   230,   231,     0,    65,
       0,     0,     0,   107,     0,     0,     0,     0,    66,     0,
      67,   375,     0,     0,     0,   169,   376,    67,     0,     0,
       0,     0,     0,    65,   232,   233,   234,   235,   236,   237,
       0,     0,     0,     0,     0,    69,     0,     0,     0,    66,
       0,    67,    69,   219,   220,   221,   222,   223,   224,   225,
     226,     0,   227,   228,   229,   230,   231,     0,     0,     0,
       0,   364,   365,     0,     0,     0,    69,  -266,     0,     0,
       0,     0,     0,  -225,     0,   243,     0,     0,     0,     0,
       0,     0,     0,   232,   233,   234,   235,   236,   237,     0,
       0,     0,     0,     0,     0,     0,  -227,   219,   220,   221,
     222,   223,   224,   225,   226,     0,   227,   228,   229,   230,
     231,     0,     0,     0,     0,   364,   365,     0,     0,     0,
       0,   166,     0,     0,     0,     0,     0,  -225,     0,   243,
       0,     0,     0,     0,     0,     0,     0,   232,   233,   234,
     235,   236,   237,     0,     0,     0,     0,     0,     0,     0,
    -227,   219,   220,   221,   222,   223,   224,   225,   226,     0,
     227,   228,   229,   230,   231,     0,     0,     0,     0,   364,
     365,     0,     0,     0,     0,   412,     0,     0,     0,     0,
       0,  -225,     0,   243,     0,     0,     0,     0,     0,     0,
       0,   232,   233,   234,   235,   236,   237,     0,     0,   227,
     228,   229,   230,   231,  -227,   219,   220,   221,   222,   223,
     224,   225,   226,     0,   227,   228,   229,   230,   231,     0,
       0,     0,     0,   364,   365,   360,     0,     0,     0,     0,
     232,   233,   234,   235,   236,   237,     0,   243,     0,     0,
     -76,     0,     0,     0,     0,   232,   233,   234,   235,   236,
     237,     0,     0,     0,     0,     0,     0,     0,  -227,   219,
     220,   221,   222,   223,   224,   225,   226,     0,   227,   228,
     229,   230,   231,     0,     0,     0,   219,   220,   221,   222,
     223,   224,   225,   226,     0,   227,   228,   229,   230,   231,
       0,   243,  -285,     0,     0,     0,     0,     0,     0,   232,
     233,   234,   235,   236,   237,   435,     0,     0,     0,   436,
       0,     0,  -227,     0,     0,     0,   232,   233,   234,   235,
     236,   237,   219,   220,   221,   222,   223,   224,   225,   226,
       0,   227,   228,   229,   230,   231,   219,   220,   221,   222,
     223,   224,   225,   226,     0,   227,   228,   229,   230,   231,
       0,   480,     0,     0,     0,   481,     0,     0,     0,     0,
       0,     0,   232,   233,   234,   235,   236,   237,   243,     0,
       0,     0,     0,     0,     0,     0,   232,   233,   234,   235,
     236,   237,   219,   220,   221,   222,   223,   224,   225,   226,
       0,   227,   228,   229,   230,   231,     0,     0,     0,     0,
       0,   219,   220,   221,   222,   223,   224,   225,   226,   309,
     227,   228,   229,   230,   231,     0,     0,     0,     0,     0,
       0,     0,   232,   233,   234,   235,   236,   237,     0,     0,
       0,     0,     0,     0,  -129,     0,     0,     0,     0,     0,
       0,   232,   233,   234,   235,   236,   237,   219,   220,   221,
     222,   223,   224,   225,   226,     0,   227,   228,   229,   230,
     231,   219,   220,   221,   222,   223,   224,   225,   226,     0,
     227,   228,   229,   230,   231,     0,   388,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232,   233,   234,
     235,   236,   237,     0,   391,     0,     0,     0,     0,     0,
       0,   232,   233,   234,   235,   236,   237,   219,   220,   221,
     222,   223,   224,   225,   226,     0,   227,   228,   229,   230,
     231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   219,   220,   221,   222,   223,   224,   225,   226,
       0,   227,   228,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,     0,     0,     0,   498,   219,   220,   221,
     222,   223,   224,   225,   226,     0,   227,   228,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   219,   220,
     221,   222,   223,   224,   225,   226,   509,   227,   228,   229,
     230,   231,     0,     0,     0,     0,     0,   232,   233,   234,
     235,   236,   237,     0,     0,     0,     0,   524,     0,     0,
       0,     0,   227,   228,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   219,   220,   221,   222,   223,   224,
     225,   226,     0,   227,   228,   229,   230,   231,   395,     0,
       0,     0,     0,   232,   233,   234,   235,   236,   237,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   232,   233,   234,   235,   236,   237
};

static const yytype_int16 yycheck[] =
{
      37,   253,    39,   107,   256,   146,    43,   259,   259,    42,
     265,   366,    49,    28,    16,    37,    90,    39,   265,    20,
      28,    43,    59,    18,     9,    28,   130,    49,    65,    66,
     409,    60,    28,   412,   249,   250,    28,    59,    28,   471,
     255,   173,    28,    65,    66,    28,    83,    84,    28,    94,
     298,    28,   300,   157,    91,    17,   101,    94,    20,     0,
      63,    83,    84,   445,    93,    99,    51,   499,   200,    91,
     107,    79,    94,    35,   111,   112,   113,    39,   182,    17,
      95,    28,    95,    96,   339,   107,    48,   466,   117,   126,
     112,    93,   339,   130,    56,    99,    91,   100,    63,   173,
      63,   456,   206,    95,   126,    95,   128,   462,   130,    95,
      99,    37,    95,    39,    68,    95,    63,    43,    95,   498,
     157,   490,   491,    49,    95,    99,   200,   164,   165,   100,
     512,   101,   169,    59,    28,   157,    99,   100,   101,    65,
      66,    96,   164,   165,   106,   182,   101,   169,    95,    95,
     505,   113,    96,   100,    96,   406,   193,    83,    84,   188,
     182,   198,   413,     1,    28,    91,    96,    96,    94,   206,
       8,   101,   101,     6,    12,   105,   198,    13,    14,   253,
      13,   107,    95,    96,   206,   218,   112,   209,   101,    28,
     442,    68,   105,    26,    27,    99,    96,   301,    96,     5,
     126,   101,   164,   101,   130,   105,   310,   169,    37,    93,
      39,    97,    93,   104,    43,   100,   178,    55,    96,    93,
      49,    95,   101,   100,    93,   101,   100,   101,   102,   103,
      59,   157,   105,    96,   486,    96,    65,    66,   164,   165,
     381,    99,    99,   169,   104,    93,    28,    95,    96,    96,
      95,    93,   100,   101,    83,    84,   182,   105,    93,    93,
     100,   298,    91,   300,   301,    94,    98,   304,   342,   343,
      93,   345,   198,   310,   348,    93,    93,    95,   107,   301,
     206,   158,   100,   112,    95,   103,    97,    98,   310,   100,
     327,   253,    37,    93,    39,    28,    94,   126,    43,     5,
      99,   130,    99,   180,    49,   327,    98,    13,    28,    93,
      99,    95,    18,    19,    59,    94,   100,   101,    24,   103,
      65,    66,    28,    93,    95,    95,    97,    98,   157,   100,
     100,   101,   209,   103,    63,   164,   165,    98,    83,    84,
     169,    28,   304,    94,    93,    95,    91,    97,    98,    94,
     100,   103,    99,   182,   102,   122,    62,    63,    64,   102,
      66,    67,   107,   101,   103,   102,   243,   112,    99,   198,
       4,   445,   446,    79,    99,   301,   253,   206,     4,    93,
     257,   126,    99,   104,   310,   130,   104,    96,    96,    95,
      94,    97,    21,    96,    10,     5,    94,   102,    94,     4,
     102,   327,    96,    13,    96,   104,    99,    93,    18,    19,
      94,    94,   157,   103,    24,    96,   122,   102,    28,   164,
     165,    10,    96,    94,   169,   101,   463,    96,    94,    94,
     164,   106,   469,    96,   304,   307,     5,   182,   512,    17,
     402,   463,    19,    67,    13,    20,    37,   469,    39,    18,
      19,   178,    43,   198,   176,    24,   424,   379,    49,    28,
     381,   206,   153,   402,   367,   413,   521,   398,    59,    79,
     486,   404,   301,    29,    65,    66,    55,    51,     8,   516,
      -1,   310,   359,    -1,   521,    95,   363,    97,    -1,    -1,
     100,   101,    83,    84,   516,   105,    -1,    -1,   327,   521,
      91,    -1,    -1,    94,   128,   129,   383,    -1,    -1,    -1,
      79,    -1,   122,    -1,    -1,    -1,   107,   394,    -1,    -1,
      -1,   112,    -1,    -1,    -1,   402,    95,    -1,    97,    -1,
     407,    -1,     5,    -1,    -1,   126,   105,   463,    -1,   130,
      13,    -1,   166,   469,    -1,    18,    19,    -1,    -1,    -1,
      -1,    24,    -1,   122,    -1,    28,   301,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   310,   157,    -1,    -1,    -1,
      -1,    -1,    -1,   164,   165,    -1,    -1,    -1,   169,    -1,
       5,   205,   327,   207,    -1,    -1,   210,   211,    13,    -1,
     516,   182,    -1,    18,    19,   521,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    28,    -1,    -1,    79,   198,    -1,    -1,
      -1,    -1,    -1,    -1,   238,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    97,    -1,    -1,   251,    -1,   253,
     254,   104,   256,    -1,   463,   259,    -1,    62,    63,    64,
     469,    66,    67,     5,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    13,    77,    78,    79,    80,    18,    19,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    28,    -1,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,   109,    -1,   111,   516,    -1,    -1,
      -1,    -1,   521,    -1,    -1,    -1,    -1,   122,    -1,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
     301,   335,    -1,    -1,    -1,    13,    -1,    79,   463,   310,
      18,    19,    -1,    -1,   469,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    95,    -1,    97,   327,    -1,    -1,    -1,
      -1,    -1,   366,   367,   368,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,
     122,    -1,    -1,    -1,    62,    63,    64,   391,    66,    67,
      -1,   516,    -1,    -1,   398,    -1,   521,   401,   402,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,   413,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   436,   111,    -1,    -1,   440,   441,   442,    -1,
       5,    -1,    -1,    -1,   122,    -1,    -1,    -1,    13,    -1,
      -1,    -1,   456,    18,    19,    -1,    -1,    -1,   462,    24,
      -1,    -1,    -1,    28,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,   481,    -1,    18,
      19,    -1,   486,    -1,    -1,    24,   490,   491,    -1,    28,
      -1,    -1,   463,    -1,    -1,    -1,    -1,    -1,   469,    -1,
       3,   505,     5,     6,     7,    -1,     9,    -1,    11,    12,
      13,    14,    15,    16,    79,    18,    19,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      79,    -1,    -1,    -1,    -1,   516,    -1,    -1,    -1,    -1,
     521,    -1,    -1,    -1,    -1,    -1,    95,   122,    97,    62,
      63,    64,    -1,    66,    67,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    95,    -1,    97,    -1,    99,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,     7,   109,     9,   111,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,   122,
      22,    23,    24,    25,    26,    27,    28,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    -1,    66,    67,
      -1,    93,    -1,    95,    -1,    97,    -1,    -1,    -1,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,    -1,    -1,     5,    -1,    93,    -1,    95,    -1,    97,
     122,    13,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,
      -1,   109,    24,   111,    -1,     5,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    13,   122,    -1,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    67,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    77,    78,    79,    80,    18,
      19,    -1,    62,    63,    64,    24,    66,    67,    -1,    28,
      -1,    -1,    -1,    95,    -1,    97,    98,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    -1,    -1,
     122,    -1,    -1,    62,    63,    64,    -1,    66,    67,   109,
      -1,   111,    -1,    -1,    -1,    -1,     5,    -1,    77,    78,
      79,    80,   122,    -1,    13,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    24,    95,    -1,    97,    28,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,   122,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    24,    62,    63,    64,    28,    66,    67,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    77,    78,
      79,    80,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    28,    -1,    93,    -1,    95,    -1,    97,    -1,
      62,    63,    64,    -1,    66,    67,     5,    -1,    -1,    -1,
     109,    -1,   111,    -1,    13,    77,    78,    79,    80,    18,
      19,    -1,    -1,   122,    -1,    24,    62,    63,    64,    28,
      66,    67,     5,    95,    -1,    97,    98,    -1,    -1,    -1,
      13,    77,    78,    79,    80,    18,    19,   109,    -1,   111,
      -1,    24,    -1,    -1,    -1,    28,    -1,    93,    -1,    95,
     122,    97,    -1,    62,    63,    64,    -1,    66,    67,     5,
      -1,    -1,    -1,   109,    -1,   111,    -1,    13,    77,    78,
      79,    80,    18,    19,    -1,    21,   122,    -1,    24,    62,
      63,    64,    28,    66,    67,     5,    95,    96,    97,    -1,
      -1,    -1,    -1,    13,    77,    78,    79,    80,    18,    19,
     109,    -1,   111,    -1,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    95,   122,    97,    98,    62,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
      -1,    77,    78,    79,    80,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    62,    63,    64,    -1,    66,    67,    -1,    95,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      80,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,   122,    97,    -1,    99,
       5,    -1,    -1,     8,    -1,    -1,    -1,     5,    13,   109,
       8,   111,    -1,    18,    19,    13,    -1,    -1,    -1,    24,
      18,    19,   122,    28,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    62,    63,    64,    -1,    66,    67,
       5,    -1,    77,    78,    79,    80,    -1,    -1,    13,    77,
      78,    79,    80,    18,    19,    -1,    -1,    -1,    -1,    24,
      95,    -1,    97,    28,    -1,    -1,    -1,    95,    -1,    97,
      -1,    -1,    -1,    -1,   109,    -1,   111,     5,    -1,    -1,
      -1,   109,    -1,   111,    -1,    13,    -1,   122,    -1,    -1,
      18,    19,    -1,    -1,   122,    -1,    24,    62,    63,    64,
      28,    66,    67,     5,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    13,    77,    78,    79,    80,    18,    19,    13,    -1,
      -1,    -1,    24,    18,    19,    -1,    28,    -1,    93,    24,
      95,    26,    97,    28,    62,    63,    64,    -1,    66,    67,
       5,    -1,    -1,     8,   109,    -1,   111,    -1,    13,    77,
      78,    79,    80,    18,    19,    -1,    -1,   122,    -1,    24,
      62,    63,    64,    28,    66,    67,     5,    95,    -1,    97,
      -1,    -1,    -1,    -1,    13,    77,    78,    79,    80,    18,
      19,   109,    -1,   111,    79,    24,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    95,   122,    97,    -1,    -1,     5,    -1,
      95,    -1,    97,    -1,    -1,     5,    13,   109,    -1,   111,
      -1,    18,    19,    13,    79,    -1,    -1,    24,    18,    19,
     122,    28,    -1,    -1,    24,    -1,    -1,   122,    28,     5,
      95,    -1,    97,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      79,    -1,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    95,   122,    97,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    79,    78,    79,    80,    81,    82,    -1,    79,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    95,    -1,
      97,    96,    -1,    -1,    -1,    95,   101,    97,    -1,    -1,
      -1,    -1,    -1,    79,   109,   110,   111,   112,   113,   114,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    95,
      -1,    97,   122,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,   122,    93,    -1,    -1,
      -1,    -1,    -1,    99,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,    -1,    -1,    78,
      79,    80,    81,    82,   122,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    87,    88,   104,    -1,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,    -1,   101,    -1,    -1,
     104,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    79,    80,    81,    82,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,    98,    -1,    -1,    -1,   102,
      -1,    -1,   122,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    78,    79,    80,    81,    82,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    79,    80,    81,    82,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    96,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    80,    81,
      82,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    78,    79,    80,    81,    82,    -1,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    93,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    80,    81,
      82,    -1,   109,   110,   111,   112,   113,   114,    69,    70,
      71,    72,    73,    74,    75,    76,    98,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    -1,   109,   110,
     111,   112,   113,   114,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    78,    79,    80,    81,    82,   104,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    20,   248,   251,    28,   252,     0,    99,    17,   249,
     253,    63,    95,   100,   252,   255,   256,     6,    13,    26,
      27,   155,   156,   157,   162,   167,   171,   174,   250,    99,
     254,   255,   256,   256,    28,    95,   159,   160,    28,    95,
     141,   172,   175,    28,    95,   164,   165,   166,    95,   160,
     169,    99,    68,   249,    96,    99,   101,   158,   159,     5,
      13,    18,    19,    24,    28,    79,    95,    97,   104,   122,
     124,   125,   126,   127,   130,   131,   136,   138,   145,   150,
     152,   180,   252,    28,   105,   124,   142,   143,   144,   160,
     139,   141,    28,   148,   104,   124,   163,   164,   168,   169,
     104,   124,   250,   254,   160,    96,    99,   122,   124,   129,
     139,    93,    97,    93,   124,   137,   124,    13,    28,    62,
      63,    64,    66,    67,    77,    78,    79,    80,    95,    97,
      98,   109,   111,   122,   124,   125,   127,   128,   130,   131,
     150,   176,   177,   178,   179,   181,   182,   189,   190,   196,
     197,   198,   199,   204,   205,   161,   198,     5,   104,   100,
     124,   124,    96,   101,   101,   105,    93,   153,   173,    95,
     124,   140,   141,   139,   124,    96,    99,    96,    99,   161,
     104,   158,     5,   129,    28,   125,   146,   147,   148,   149,
     124,   151,    28,    79,   125,   132,   133,   134,   160,    96,
     139,   124,   198,   105,   129,    95,    98,    93,   183,    95,
      97,    98,   100,   191,   192,   193,   194,   195,   100,    69,
      70,    71,    72,    73,    74,    75,    76,    78,    79,    80,
      81,    82,   109,   110,   111,   112,   113,   114,   200,   201,
     202,   203,   199,   101,   129,   161,    28,   143,   124,     3,
       7,     9,    11,    12,    14,    15,    16,    22,    23,    25,
      28,   153,   154,   155,   160,   161,   170,   198,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   217,   218,
     219,   223,   229,   235,   236,   242,   243,   244,   245,   246,
     247,   124,   173,   163,   168,   161,   129,    94,    99,   139,
      99,    98,   125,    94,    99,    63,   135,   124,   173,    96,
      98,   198,   129,    94,   183,   184,   186,   187,   188,   198,
      96,   124,   161,   198,   102,   198,    28,    95,   148,   198,
     161,    28,   210,   210,   198,    21,    28,   153,   160,   161,
     198,   207,   230,   231,   232,   234,   198,   210,   198,   207,
     161,    93,    28,    93,   190,   198,   207,   225,    94,   103,
     104,   202,   203,   216,    87,    88,    99,   102,   122,   146,
     146,   129,   132,   135,   129,    96,   101,    94,   101,   101,
     185,   102,    96,   101,   105,    96,   101,   105,    98,    98,
     198,   102,   124,   198,   103,   104,   153,   153,    99,   153,
     153,    99,     4,   237,   238,   239,   103,     4,   220,   221,
     222,   100,    93,    99,    93,   161,   104,   104,   161,   154,
     206,   198,    96,    94,   186,   183,   188,   198,    96,   161,
      96,   101,    96,    96,   101,    98,   102,    98,   198,    96,
      21,    21,    99,   198,   230,    10,   198,     8,   160,   161,
     198,   212,   240,   241,    94,   237,   102,   190,     8,   161,
      94,   220,   102,    95,   220,    28,    93,   198,   225,     4,
     224,   226,   227,   185,    96,   101,   105,    96,    96,   198,
      98,   102,   198,   198,   207,   233,    99,   153,   217,   153,
     103,   104,   154,   100,   154,    26,    94,   220,    93,    93,
       8,   124,   228,    94,   224,   102,    96,    96,   101,    98,
     198,   233,    10,   198,   241,   241,    95,    96,    94,   220,
     224,   101,   154,    96,    98,   153,   217,    26,    94,    94,
     228,    96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   123,   124,   124,   124,   125,   125,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   128,   129,   130,   131,
     132,   132,   133,   133,   133,   133,   134,   134,   135,   136,
     137,   138,   139,   139,   140,   140,   141,   142,   142,   142,
     143,   143,   144,   144,   144,   144,   145,   146,   146,   146,
     147,   148,   149,   150,   151,   152,   152,   152,   153,   154,
     154,   155,   155,   155,   156,   156,   156,   157,   157,   158,
     158,   159,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   164,   164,   165,   166,   167,   167,   168,   168,
     169,   169,   169,   170,   171,   171,   172,   173,   174,   174,
     175,   176,   176,   176,   177,   177,   177,   178,   178,   178,
     178,   178,   179,   180,   181,   182,   182,   182,   182,   182,
     182,   183,   183,   183,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   192,   193,   193,   193,   193,   193,   193,
     194,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   196,   197,   198,   198,   199,   199,
     200,   200,   200,   200,   200,   201,   201,   201,   201,   201,
     201,   202,   202,   202,   202,   203,   203,   203,   203,   203,
     203,   203,   204,   204,   204,   204,   204,   204,   204,   205,
     205,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   207,   207,   207,   207,
     207,   207,   208,   209,   210,   211,   212,   213,   214,   214,
     215,   216,   216,   216,   217,   217,   217,   217,   217,   217,
     218,   218,   219,   219,   219,   219,   220,   220,   221,   222,
     222,   223,   223,   224,   224,   225,   225,   226,   227,   227,
     228,   228,   229,   229,   229,   229,   230,   231,   231,   232,
     233,   234,   234,   234,   235,   236,   237,   237,   238,   239,
     239,   239,   240,   240,   240,   241,   242,   242,   243,   243,
     244,   244,   245,   245,   246,   247,   248,   249,   249,   250,
     250,   251,   252,   253,   253,   254,   254,   255,   255,   255,
     256
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     3,     4,
       3,     0,     3,     2,     2,     1,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     3,     1,     2,     0,
       1,     3,     3,     2,     2,     1,     4,     3,     3,     0,
       2,     1,     1,     5,     1,     2,     3,     3,     3,     3,
       0,     1,     1,     1,     1,     1,     1,     2,     4,     3,
       0,     1,     4,     3,     1,     3,     1,     3,     2,     4,
       3,     0,     1,     1,     3,     2,     2,     4,     3,     0,
       4,     2,     3,     3,     4,     3,     1,     1,     5,     4,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     4,     1,     1,
       1,     4,     3,     2,     2,     3,     0,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     3,     5,     4,     4,     3,     7,     6,
       4,     5,     7,     5,     4,     6,     4,     4,     6,     4,
       3,     5,     3,     2,     3,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     1,     3,     1,     2,     2,
       3,     2,     2,     1,     7,     7,     5,     5,     5,     3,
       1,     1,     7,     6,     5,     4,     2,     0,     3,     2,
       2,     7,     5,     2,     0,     7,     5,     3,     2,     2,
       3,     1,     3,     3,     3,     2,     1,     5,     4,     1,
       1,     4,     4,     2,     2,     4,     2,     0,     3,     2,
       2,     2,     3,     3,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     2,     5,     3,     0,     3,
       0,     2,     1,     2,     4,     3,     0,     2,     2,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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

#line 2197 "Analyser.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 761 "Analyser.y"


_Bool IsEqual1(int first, int second){
        return first == second;
}

int computeSymbolIndex(char token)
{
        int idx = -1;
        if(islower(token)) {
                idx = token - 'a' + 26;
        } else if(isupper(token)) {
                idx = token - 'A';
        }
        return idx;
} 

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
        int bucket = computeSymbolIndex(symbol);
        return symbols[bucket];
}

/* updates the value of a given symbol */
void updateSymbolVal(char symbol, int val)
{
        int bucket = computeSymbolIndex(symbol);
        symbols[bucket] = val;
}

// shift Right operation
void shiftRightSymbolVal(char symbol, int val)
{
        int bucker = computeSymbolIndex(symbol);
        for (int i = 0; i < val; i++)
                symbols[bucker] = symbols[bucker] * 2;
}

// shift Left operation
void shiftLeftSymbolVal(char symbol, int val)
{
        int bucker = computeSymbolIndex(symbol);
        for (int i = 0; i < val; i++)
                symbols[bucker] = symbols[bucker] / 2;
}

int main (void) {
        /* init symbol table */
        int i;
        /*for(i=0; i<52; i++) {
                symbols[i] = 0;
        }*/
        yyin = fopen("input.txt", "r");
        yyparse();
        fclose(yyin);
        return 0;
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 
