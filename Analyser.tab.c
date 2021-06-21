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
#define YYLAST   2487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  123
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  320
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  545

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
       0,   159,   159,   160,   161,   164,   168,   169,   170,   171,
     172,   173,   174,   175,   178,   181,   184,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   200,   203,   206,
     208,   211,   212,   213,   214,   217,   218,   220,   223,   226,
     229,   232,   233,   236,   237,   240,   243,   244,   245,   248,
     249,   253,   254,   255,   256,   259,   262,   263,   266,   269,
     272,   275,   278,   281,   284,   285,   286,   289,   292,   294,
     297,   298,   299,   302,   303,   304,   307,   308,   311,   313,
     316,   317,   318,   321,   322,   325,   326,   329,   330,   333,
     335,   338,   339,   342,   345,   348,   349,   352,   354,   357,
     358,   359,   362,   365,   366,   369,   372,   375,   376,   379,
     383,   384,   385,   388,   389,   390,   393,   394,   395,   396,
     397,   407,   410,   411,   412,   413,   414,   418,   419,   420,
     423,   426,   427,   430,   431,   435,   436,   442,   443,   446,
     449,   450,   451,   452,   453,   454,   455,   456,   459,   461,
     464,   465,   466,   467,   468,   469,   472,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     491,   492,   495,   498,   503,   504,   507,   508,   511,   512,
     515,   516,   517,   518,   519,   522,   523,   524,   525,   526,
     527,   530,   531,   532,   533,   536,   537,   538,   539,   540,
     541,   542,   545,   546,   547,   548,   549,   550,   551,   554,
     555,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   575,   576,   577,   578,
     579,   580,   583,   586,   589,   592,   595,   598,   601,   602,
     605,   608,   609,   610,   613,   614,   615,   619,   620,   621,
     624,   625,   628,   629,   632,   633,   636,   637,   640,   643,
     644,   647,   649,   652,   653,   656,   657,   660,   663,   664,
     667,   668,   671,   672,   673,   674,   677,   680,   682,   690,
     693,   696,   697,   698,   701,   704,   707,   708,   711,   714,
     715,   716,   719,   720,   721,   724,   727,   728,   731,   732,
     735,   736,   739,   740,   743,   746,   749,   753,   755,   758,
     760,   763,   766,   769,   770,   772,   774,   777,   778,   779,
     782
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
  "ArrayLenght", "ElementType", "SecondElementType", "SliceType",
  "StruckType", "FileDeclLoop", "FileDecl", "EmbeddedField", "Tag",
  "PointerType", "BaseType", "FunctionType", "Signature", "Result",
  "Parameters", "ParameterLists", "ParameterList", "ParameterDecl",
  "InterfaceType", "InterfaceTypeLoop", "MethodSpec", "MethodName",
  "InterfaceTypeName", "MapType", "KeyType", "ChanelType", "Block",
  "StatmentList", "Declaration", "TopLevelDecl", "ConstDecl",
  "ConstDeclLoop", "ConstSpec", "IdentifierList", "ExpressionList",
  "TypeDecl", "TypeDeclLoop", "TypeSpec", "AliasDecl", "TypeDef",
  "VarDecl", "VarDeclLoop", "VarSpec", "ShortVarDecl", "FunctionDecl",
  "FunctionName", "FunctionBody", "MethodDecl", "Receiver", "Operand",
  "Literal", "BasicLit", "CompositeLit", "LiteralType", "LiteralValue",
  "ElementList", "ElementListLoop", "KeyedElement", "Key", "Element",
  "FunctionLit", "PrimaryExpr", "Selector", "Index", "Slice",
  "TypeAssertion", "Arguments", "TypeSpecial", "MethodExpr",
  "ReceiverType", "TypeForMethodExpr", "Expression", "UnaryExpr",
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

#define YYPACT_NINF -468

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-468)))

#define YYTABLE_NINF -296

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -19,    40,   -76,  -468,  -468,  -468,    39,    60,   199,
     -65,  -468,     4,    83,    83,  -468,  -468,    -2,    18,    21,
      33,  -468,   -16,  -468,  -468,  -468,  -468,  -468,   113,    39,
      61,    79,  -468,  -468,    98,   179,  -468,   511,  -468,   685,
    -468,   115,   215,   583,   220,  -468,  -468,  -468,   179,  1560,
    -468,   199,  -468,  -468,  -468,     4,   179,   125,   154,   708,
     115,   164,   165,   172,  -468,  1679,  1679,   979,  1490,   261,
     166,  -468,  -468,  -468,  -468,  -468,  -468,  -468,  -468,  -468,
    -468,    55,  1679,  -468,   173,   170,   180,  1590,   182,  1686,
    -468,   115,  1679,  -468,   177,   181,   186,   184,  1490,   188,
    -468,  -468,  -468,  -468,   179,  1712,   236,  -468,  -468,  -468,
    -468,  -468,  -468,  -468,  -468,  -468,  -468,   256,  1679,   -11,
    -468,  -468,   189,   115,  -468,  -468,  -468,  -468,  -468,  -468,
    -468,  -468,  1679,  -468,  1490,   550,  1679,  -468,  -468,   261,
     198,   204,   203,   209,   212,   213,  -468,  -468,  -468,  -468,
     214,  -468,    37,  -468,   211,  -468,  2373,  -468,  1490,  -468,
    -468,  2110,   236,  1490,  -468,  -468,  -468,   685,  1679,  -468,
     747,  -468,  -468,   685,  -468,  -468,  -468,   182,  -468,  -468,
     220,  -468,   179,  -468,  1490,  -468,   217,   222,  -468,   224,
    -468,   228,   226,   115,   229,  -468,   232,   296,  -468,   233,
     235,   269,  1679,  -468,   182,    30,  2156,   237,  -468,  -468,
    1490,  1679,   872,  -468,  1047,  1068,    34,  -468,  -468,  -468,
    -468,  -468,   215,  -468,  -468,  -468,  -468,  -468,  -468,  -468,
    -468,  -468,  -468,  -468,  -468,  -468,  -468,  -468,  -468,  -468,
    -468,  -468,  1490,  -468,  -468,  -468,  -468,  1490,  -468,  -468,
    -468,  -468,   308,   308,  1490,  -468,   958,  1490,   308,  1527,
    1490,   244,  1136,   128,  -468,   247,  -468,   242,  1675,  -468,
    1850,   249,  -468,  -468,  -468,   252,  -468,  -468,   227,  -468,
    -468,  -468,  -468,  -468,  -468,  -468,  -468,  -468,  -468,  -468,
    -468,  -468,  -468,  -468,   189,  -468,  -468,  -468,  -468,  -468,
    -468,  -468,   256,  -468,   256,  1679,  -468,  -468,   -11,  -468,
    -468,   269,  -468,  -468,  -468,  1679,  1958,  -468,  -468,   254,
      86,   245,   255,  -468,  2175,  1490,  -468,    20,   -58,    47,
    1173,  2004,  -468,  1679,  -468,  2373,  -468,  -468,  -468,  -468,
    2373,  1490,   -44,  -468,   248,  1835,  1742,  -468,   182,   182,
     262,   182,  2373,  -468,  1796,   263,  -468,   356,   -32,   359,
    1490,   120,   266,   274,  -468,  1490,  -468,   271,   272,  1490,
    -468,  -468,   747,   848,  1490,  -468,  -468,  -468,  -468,  -468,
    -468,  -468,   282,  -468,   276,  1199,  -468,  1199,    89,  -468,
     283,   100,  -468,  1236,   110,  -468,  2050,  -468,  1262,   284,
    2373,  1299,   352,  -468,  -468,  1325,  -468,   371,  1490,  1420,
     288,   356,   281,  1553,  1427,   291,   359,   286,  2221,    54,
     389,   387,  -468,  -468,  -468,  -468,  -468,  -468,  2373,  -468,
    -468,   245,  -468,  -468,  2373,   293,  -468,  -468,   301,  -468,
      67,  -468,   302,  -468,  1490,  -468,  2096,  -468,  1490,  1490,
    1527,  2373,   300,     3,  2267,  -468,   297,   299,  1904,  -468,
    -468,  -468,  -468,  -468,   747,   161,  -468,  -468,  -468,  -468,
     747,   311,   810,   298,   359,  1490,   120,   312,  1648,   316,
     387,   304,  -468,  -468,  -468,   315,   122,  -468,  2292,  -468,
    1490,  2373,  2373,  -468,  -468,  1527,  -468,  -468,   402,  1490,
    1490,  -468,    84,  -468,   359,   318,   321,  2313,   387,  -468,
     317,  -468,  -468,  -468,   747,  -468,  -468,   323,  -468,  2359,
    -468,     3,  2373,  -468,  -468,  1655,   326,  -468,  -468,   328,
     329,  1679,  -468,  -468,  -468,  -468,  -468,   330,  -468,   359,
    -468,  -468,  -468,   331,  -468
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   312,   311,     1,   308,     0,   310,
       0,   320,   316,     0,     0,   313,   319,     0,     0,     0,
       0,    73,     0,    70,    71,    72,    74,    75,     0,   308,
       0,     0,   317,   318,    83,    79,    76,    80,   105,    48,
     109,     0,     0,     0,    90,    87,    91,    92,    98,     0,
      95,   310,   306,   307,   314,   316,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     2,     3,     6,    11,     7,     8,     9,    10,    12,
      13,    83,     0,    54,     0,    46,    49,     0,   104,    41,
      60,     0,     0,    94,     0,     0,     0,     0,     0,   100,
     309,   315,    84,    77,    79,     0,     0,    17,    18,    64,
      23,    19,    20,    21,    22,    24,    40,    58,     0,    30,
      39,    38,     0,     0,   111,   116,   119,   117,   120,   118,
     204,   202,   206,   203,     0,     0,     0,   207,   205,   208,
     174,     6,     0,    11,     7,    12,   140,   110,   113,   114,
       0,   115,   178,   142,     0,   173,    15,   176,     0,   141,
      82,    85,     0,     0,    53,    45,    47,     0,     0,    52,
      69,   106,   103,    48,    44,    42,    43,   108,    93,    88,
      90,    96,    98,   101,     0,    78,     0,     0,    65,     5,
      61,     0,     0,     0,     0,    63,     0,     0,    35,     0,
       0,    34,     0,     4,    40,   174,     0,     0,    16,    27,
       0,     0,     0,   121,     0,     0,     0,   143,   144,   145,
     146,   147,     0,   185,   186,   187,   188,   189,   190,   181,
     180,   191,   195,   192,   196,   197,   200,   193,   194,   198,
     199,   201,     0,   182,   183,   184,   179,     0,    66,    81,
      50,    51,   299,   301,     0,   304,   232,     0,   303,   232,
     297,     0,   232,   111,   220,     0,   211,     0,     0,   231,
     235,     0,   213,   226,   212,     0,   227,   228,     0,   229,
     230,   221,   222,   250,   251,   224,   214,   223,   215,   216,
     217,   218,   219,   225,    54,   107,    89,    97,    99,    26,
      25,    55,    58,    59,    58,     0,    36,    28,    30,    37,
      33,    32,   139,   175,   112,     0,     0,    14,   129,   138,
       0,   132,     0,   134,   137,     0,   169,   170,     0,     0,
       0,     0,   148,     0,   172,   177,    86,   234,   298,   300,
     305,     0,   111,   275,     0,     0,    85,   279,     0,     0,
       0,     0,   284,   302,    85,     0,   296,   287,   111,   257,
       0,   178,     0,     0,    67,     0,   243,     0,     0,     0,
     238,   239,    69,   232,     0,    56,    57,    62,    29,    31,
     124,   210,     0,   128,     0,     0,   130,     0,   174,   166,
       0,     0,   168,     0,     0,   153,     0,   149,     0,     0,
     283,     0,   243,   272,   273,     0,   274,   249,     0,     0,
       0,   287,     0,     0,     0,     0,   257,     0,     0,     0,
       0,   264,   102,   241,   242,   240,    68,   233,   236,   209,
     127,   132,   138,   133,   137,   171,   160,   163,     0,   162,
       0,   165,     0,   151,     0,   152,     0,   156,     0,     0,
     232,   276,     0,     0,     0,   291,     0,     0,    85,   289,
     290,   294,   285,   286,    69,     0,   260,   259,   255,   256,
      69,   112,     0,   111,   257,     0,     0,     0,     0,     0,
     264,     0,   131,   157,   167,     0,     0,   159,     0,   150,
       0,   282,   281,   280,   278,   232,   248,   247,   246,     0,
       0,   288,     0,   258,   257,     0,     0,     0,   264,   269,
     271,   268,   262,   263,    69,   161,   164,     0,   155,     0,
     277,     0,   295,   293,   292,     0,     0,   266,   253,   112,
       0,     0,   267,   158,   154,   245,   244,     0,   254,   257,
     261,   270,   265,     0,   252
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -468,   277,   193,   -37,   -29,  -468,  -196,    85,    35,   127,
     116,  -468,  -468,   118,   -41,  -468,   -20,   -18,  -468,    17,
    -468,   260,  -468,   -15,  -143,  -468,   -39,  -468,   185,  -468,
     332,    23,  -356,    24,  -468,  -468,   335,   417,    31,   324,
    -468,   267,   427,  -468,  -468,  -468,   275,   428,  -468,  -468,
    -468,  -150,  -468,  -468,  -468,  -468,  -468,  -468,  -468,  -145,
    -468,    27,    69,  -468,    72,  -468,  -251,  -468,  -468,  -468,
    -468,  -468,  -468,  -468,  -468,  -468,   174,   303,  -468,  -468,
    -247,  -243,  -468,  -468,    90,  -255,  -468,  -468,   -64,  -468,
      53,  -468,  -468,  -468,  -468,  -429,  -468,  -468,  -394,  -468,
    -468,  -468,  -467,    44,  -468,  -468,   -66,  -468,    62,  -468,
    -468,   -26,  -468,  -468,  -468,    59,  -468,  -468,  -468,  -264,
    -468,  -468,  -468,  -468,  -468,  -468,  -468,   437,   420,  -468,
     471,  -468,   418,   466,   225
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   208,    71,   140,   141,   142,   209,   109,   143,   144,
     199,   200,   201,   310,    76,   121,    77,    88,   175,    89,
      84,    85,    86,    78,   191,   192,   193,   194,   145,   196,
      80,   264,   265,   266,    22,    23,    57,    58,   267,   268,
      24,    94,    95,    46,    47,    25,    96,    97,   269,    26,
      41,   172,    27,    42,   146,   147,   148,   149,   150,   319,
     320,   386,   321,   322,   323,   151,   152,   217,   218,   219,
     220,   221,   329,   153,   154,   155,   161,   157,   242,   243,
     244,   245,   158,   159,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   369,   281,   282,   283,   415,   416,
     417,   284,   479,   363,   480,   481,   511,   285,   348,   349,
     350,   494,   351,   286,   287,   410,   411,   412,   460,   461,
     288,   289,   290,   291,   292,   293,     2,     9,    28,     3,
      14,    10,    30,    31,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,   347,    72,    91,   355,   213,    72,   362,    73,     4,
      73,   361,    72,   513,    73,   317,   426,    81,   112,   259,
      73,   367,   469,     7,   497,   368,    34,   295,    72,    72,
     108,     1,     4,    21,    29,    40,    73,    73,   389,   113,
       6,   530,   116,   390,   114,    72,    38,   391,    37,    43,
      72,    49,    72,    73,   312,    72,     8,    56,    73,   -83,
      73,    34,   332,    73,   112,   112,    37,    11,   197,    56,
      87,   413,    74,   177,    74,    21,   108,   108,    74,    49,
     506,    72,   332,    51,    74,   113,   113,   102,     4,    73,
     114,   114,   536,    35,   110,    72,   170,   205,   367,    72,
      74,    74,   368,    73,    13,   204,   176,    73,   501,   377,
     526,   171,   332,    39,   503,   210,    44,    74,    -5,   380,
    -174,   112,    74,    11,    74,   210,   313,    74,    48,   333,
      72,    72,   214,   108,   215,    37,    72,   216,    73,    73,
     110,   110,   113,   392,    73,   543,    11,   114,   393,   472,
     202,    -5,   394,    74,    -5,    12,    56,    54,   532,   375,
      13,   376,   465,   484,    75,    72,    75,    74,   485,   476,
      75,    74,   486,    73,    72,   303,    75,   327,    55,   525,
     383,    52,    73,   334,   210,   435,   111,   384,   338,   339,
     186,   188,    75,    75,   353,   493,   437,   110,    87,    56,
     171,   438,    74,    74,    87,    17,   441,    34,    74,    75,
      39,   442,    18,    49,    75,   214,    75,   215,   516,    75,
     419,   103,    79,   517,    79,    19,    20,   171,    79,    56,
    -234,   -83,   111,   111,    79,   523,   524,    74,    32,    33,
     493,   156,   432,    90,   115,    75,    74,   248,    43,    60,
      79,    79,   107,   104,    61,    62,   214,   117,   215,    75,
      63,   502,   118,    75,    64,   119,   162,    79,    72,   165,
     163,   166,    79,   179,    79,   170,    73,    79,    72,   343,
     180,   167,   181,   182,   189,   203,    73,   344,   388,   111,
     115,   115,   184,   210,    75,    75,    72,  -123,   107,   107,
      75,   211,  -125,    79,    73,  -122,  -126,   212,   206,   156,
     190,   222,   198,   299,    70,    65,    83,    79,   300,   -60,
      93,    79,   301,   205,    64,   302,    99,   307,   304,    75,
     305,   105,   309,    67,   308,   315,   337,   357,    75,   202,
      74,   364,   120,   122,   270,   365,   385,   115,   372,   374,
      74,   401,    79,    79,   373,   107,  -136,   387,    79,   164,
     409,   405,   408,   414,   169,   420,   174,   421,    74,   178,
     430,   403,   404,   449,   406,   423,   424,   407,   429,   436,
     447,   453,   462,   464,   316,   468,   324,    79,   470,   331,
     306,   478,   160,  -175,    59,   195,    79,   483,   487,   495,
     499,   413,   123,   500,   504,   508,   514,    61,    62,   120,
     512,   515,   521,    63,   527,   528,   335,   473,   531,   533,
     538,   539,   183,   540,   378,   544,   542,   250,   340,   379,
     346,   352,    75,   354,    36,    72,   270,   187,   205,   185,
     456,    72,    75,    73,    83,   251,    45,   296,    50,    73,
     294,   125,   126,   127,   431,   128,   129,   297,   482,   433,
      75,   246,   459,   427,   477,   541,    53,   452,    65,   520,
     463,   100,     5,   101,    15,     0,   496,   498,     0,   311,
       0,     0,   474,     0,   475,     0,   135,   249,    72,     0,
      79,     0,     0,     0,    72,   190,    73,   190,     0,   206,
      79,   198,    73,     0,   396,     0,     0,    74,   298,     0,
       0,    69,     0,    74,     0,   400,    59,     0,    79,     0,
       0,     0,     0,     0,    60,     0,     0,     0,     0,    61,
      62,     0,     0,     0,   418,    63,     0,     0,   328,    64,
       0,     0,     0,     0,   535,     0,   270,   270,   428,     0,
       0,     0,     0,     0,     0,    59,     0,     0,     0,   324,
      74,   434,     0,   123,     0,     0,    74,     0,    61,    62,
       0,   336,   446,     0,    63,     0,     0,     0,   124,   451,
     345,     0,   454,   458,   356,     0,     0,     0,    59,     0,
      65,     0,     0,     0,     0,     0,    60,     0,     0,    75,
       0,    61,    62,     0,     0,    75,    66,    63,    67,     0,
     399,    64,   125,   126,   127,    68,   128,   129,   488,     0,
       0,     0,   491,   492,   270,     0,     0,   130,   131,   132,
     133,     0,     0,    69,     0,     0,     0,     0,   270,     0,
       0,     0,     0,     0,   270,   134,     0,   135,   136,   507,
       0,     0,    75,     0,     0,   207,     0,    79,    75,   137,
       0,   138,    65,    79,   519,     0,     0,     0,     0,   270,
       0,     0,   139,   522,   522,     0,     0,     0,    66,     0,
      67,     0,     0,     0,     0,     0,     0,    92,   270,   422,
      59,     0,     0,   425,     0,     0,     0,     0,    60,     0,
       0,     0,     0,    61,    62,    69,     0,     0,     0,    63,
      79,     0,     0,    81,     0,     0,    79,   440,     0,     0,
       0,    60,     0,     0,     0,   422,    61,    62,     0,     0,
       0,     0,    63,   457,     0,     0,    64,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     252,     0,    59,    17,   253,   510,   254,     0,   255,   256,
     123,   257,   258,   259,    65,    61,    62,     0,     0,   260,
     261,    63,   262,    19,    20,   263,     0,     0,     0,     0,
      66,     0,    67,     0,     0,     0,     0,    65,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,   105,     0,    67,     0,    69,   510,   125,
     126,   127,     0,   128,   129,    59,     0,     0,     0,     0,
       0,     0,     0,    60,   130,   131,   132,   133,    61,    62,
     106,     0,     0,     0,    63,     0,   505,     0,    64,     0,
     170,     0,   134,     0,   135,     0,  -232,     0,     0,     0,
       0,   252,     0,    59,    17,   253,   137,   254,   138,   255,
     256,   123,   257,   258,   259,     0,    61,    62,     0,   139,
     260,   261,    63,   262,    19,    20,   263,    59,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,    65,
      61,    62,     0,     0,     0,     0,    63,     0,     0,     0,
     124,     0,     0,     0,     0,    66,     0,    67,     0,     0,
     125,   126,   127,     0,   128,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,   131,   132,   133,     0,
       0,     0,    69,     0,   125,   126,   127,     0,   128,   129,
       0,   170,     0,   134,     0,   135,     0,     0,     0,   130,
     131,   132,   133,     0,     0,     0,     0,   137,     0,   138,
       0,     0,     0,    59,     0,   212,   318,   134,     0,   135,
     139,   123,     0,     0,     0,     0,    61,    62,     0,   341,
       0,   137,    63,   138,    59,     0,   342,     0,     0,     0,
       0,     0,   123,     0,   139,     0,     0,    61,    62,     0,
       0,     0,     0,    63,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,     0,   128,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,   131,   132,   133,     0,
       0,   125,   126,   127,     0,   128,   129,     0,     0,     0,
       0,   170,    59,   134,     0,   135,   130,   131,   132,   133,
     123,     0,     0,     0,     0,    61,    62,   137,     0,   138,
       0,    63,     0,    59,   134,   124,   135,   136,     0,     0,
     139,   123,     0,     0,     0,     0,    61,    62,   137,     0,
     138,     0,    63,     0,     0,     0,   124,     0,     0,     0,
       0,   139,     0,     0,     0,     0,     0,     0,     0,   125,
     126,   127,     0,   128,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,   131,   132,   133,     0,     0,
     125,   126,   127,     0,   128,   129,     0,     0,     0,     0,
       0,    59,   325,   326,   135,   130,   131,   132,   133,   123,
       0,     0,     0,     0,    61,    62,   137,     0,   138,     0,
      63,     0,     0,   134,   358,   135,     0,     0,     0,   139,
     330,     0,     0,     0,     0,     0,     0,   137,    59,   138,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
     139,    61,    62,     0,     0,     0,     0,    63,   125,   126,
     127,   124,   128,   129,    59,     0,     0,     0,     0,     0,
       0,     0,   123,   130,   131,   132,   133,    61,    62,     0,
       0,     0,     0,    63,     0,     0,     0,   124,     0,   359,
       0,   360,     0,   135,     0,   125,   126,   127,     0,   128,
     129,    59,     0,     0,     0,   137,     0,   138,     0,   123,
     130,   131,   132,   133,    61,    62,     0,     0,   139,     0,
      63,   125,   126,   127,   124,   128,   129,    59,   134,     0,
     135,   395,     0,     0,     0,   123,   130,   131,   132,   133,
      61,    62,   137,     0,   138,     0,    63,     0,     0,     0,
     124,     0,   212,     0,   134,   139,   135,     0,   125,   126,
     127,     0,   128,   129,    59,     0,     0,     0,   137,     0,
     138,     0,   123,   130,   131,   132,   133,    61,    62,     0,
     448,   139,     0,    63,   125,   126,   127,   124,   128,   129,
      59,   134,   439,   135,     0,     0,     0,     0,   123,   130,
     131,   132,   133,    61,    62,   137,     0,   138,     0,    63,
       0,     0,     0,   124,     0,     0,     0,   134,   139,   135,
     445,   125,   126,   127,     0,   128,   129,     0,     0,     0,
       0,   137,     0,   138,     0,     0,   130,   131,   132,   133,
       0,     0,     0,     0,   139,     0,     0,   125,   126,   127,
       0,   128,   129,     0,   134,     0,   135,     0,     0,     0,
       0,     0,   130,   131,   132,   133,     0,     0,   137,     0,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,   139,   135,     0,   450,    59,     0,     0,   455,     0,
       0,     0,    59,   123,   137,   466,   138,     0,    61,    62,
     123,     0,     0,     0,    63,    61,    62,   139,   342,     0,
       0,    63,     0,     0,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,     0,   128,   129,     0,   125,
     126,   127,     0,   128,   129,    59,     0,   130,   131,   132,
     133,     0,     0,   123,   130,   131,   132,   133,    61,    62,
       0,     0,     0,     0,    63,   134,     0,   135,   124,     0,
       0,     0,   134,     0,   135,     0,     0,     0,     0,   137,
       0,   138,    59,     0,     0,     0,   137,     0,   138,     0,
     123,     0,   139,     0,     0,    61,    62,     0,     0,   139,
       0,    63,   125,   126,   127,   342,   128,   129,    59,     0,
       0,     0,     0,     0,     0,    59,   123,   130,   131,   132,
     133,    61,    62,    60,     0,     0,     0,    63,    61,    62,
       0,   124,     0,     0,    63,   134,     0,   135,    64,   125,
     126,   127,     0,   128,   129,    59,     0,     0,     0,   137,
       0,   138,     0,    60,   130,   131,   132,   133,    61,    62,
       0,     0,   139,     0,    63,   125,   126,   127,    64,   128,
     129,     0,   134,     0,   135,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,   137,     0,   138,    65,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   139,
     135,     0,     0,    59,     0,    66,   509,    67,     0,     0,
      59,    60,     0,     0,    98,     0,    61,    62,    60,    65,
       0,     0,    63,    61,    62,    69,    64,     0,     0,    63,
       0,   537,    69,    64,    59,    66,     0,    67,     0,     0,
       0,    59,    60,     0,     0,   168,     0,    61,    62,    60,
       0,     0,     0,    63,    61,    62,     0,    64,     0,     0,
      63,     0,    69,     0,    64,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,    60,     0,    65,     0,     0,
      61,    62,     0,     0,    65,     0,    63,     0,     0,     0,
      64,     0,     0,    66,     0,    67,     0,     0,     0,     0,
      66,     0,    67,   231,   232,   233,   234,   235,    65,     0,
       0,     0,     0,     0,     0,    65,     0,     0,     0,     0,
      69,     0,     0,     0,    66,     0,    67,    69,     0,   366,
       0,   173,     0,    67,   236,   237,   238,   239,   240,   241,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,     0,   105,    69,    67,
       0,   223,   224,   225,   226,   227,   228,   229,   230,     0,
     231,   232,   233,   234,   235,     0,     0,     0,     0,   370,
     371,     0,     0,     0,    69,  -276,     0,     0,     0,     0,
       0,  -235,     0,   247,     0,     0,     0,     0,     0,     0,
       0,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,  -237,   223,   224,   225,   226,   227,
     228,   229,   230,     0,   231,   232,   233,   234,   235,     0,
       0,     0,     0,   370,   371,     0,     0,     0,     0,   170,
       0,     0,     0,     0,     0,  -235,     0,   247,     0,     0,
       0,     0,     0,     0,     0,   236,   237,   238,   239,   240,
     241,     0,     0,   231,   232,   233,   234,   235,  -237,   223,
     224,   225,   226,   227,   228,   229,   230,     0,   231,   232,
     233,   234,   235,     0,     0,     0,     0,   370,   371,   402,
       0,     0,     0,     0,   236,   237,   238,   239,   240,   241,
       0,   247,     0,     0,   -85,     0,     0,     0,     0,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,  -237,   223,   224,   225,   226,   227,   228,   229,
     230,     0,   231,   232,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   247,  -295,     0,     0,     0,
       0,     0,     0,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,  -237,   223,   224,   225,
     226,   227,   228,   229,   230,     0,   231,   232,   233,   234,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   381,     0,     0,     0,     0,   382,
       0,     0,     0,     0,     0,     0,     0,   236,   237,   238,
     239,   240,   241,   223,   224,   225,   226,   227,   228,   229,
     230,     0,   231,   232,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,   236,   237,   238,   239,   240,   241,   223,
     224,   225,   226,   227,   228,   229,   230,     0,   231,   232,
     233,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,     0,
       0,     0,   444,     0,     0,     0,     0,     0,     0,   236,
     237,   238,   239,   240,   241,   223,   224,   225,   226,   227,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   223,
     224,   225,   226,   227,   228,   229,   230,     0,   231,   232,
     233,   234,   235,     0,   489,     0,     0,     0,   490,     0,
       0,     0,     0,     0,     0,   236,   237,   238,   239,   240,
     241,   247,     0,     0,     0,     0,     0,     0,     0,   236,
     237,   238,   239,   240,   241,   223,   224,   225,   226,   227,
     228,   229,   230,     0,   231,   232,   233,   234,   235,     0,
       0,     0,     0,     0,   223,   224,   225,   226,   227,   228,
     229,   230,   314,   231,   232,   233,   234,   235,     0,     0,
       0,     0,     0,     0,     0,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,  -135,     0,     0,
       0,     0,     0,     0,   236,   237,   238,   239,   240,   241,
     223,   224,   225,   226,   227,   228,   229,   230,     0,   231,
     232,   233,   234,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   471,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,   237,   238,   239,   240,   241,   223,   224,   225,   226,
     227,   228,   229,   230,     0,   231,   232,   233,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,   223,   224,   225,   226,   227,   228,   229,   230,     0,
     231,   232,   233,   234,   235,     0,   236,   237,   238,   239,
     240,   241,   223,   224,   225,   226,   227,   228,   229,   230,
     518,   231,   232,   233,   234,   235,     0,     0,     0,     0,
       0,   236,   237,   238,   239,   240,   241,     0,     0,   529,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,   237,   238,   239,   240,   241,   223,   224,
     225,   226,   227,   228,   229,   230,     0,   231,   232,   233,
     234,   235,   223,   224,   225,   226,   227,   228,   229,   230,
       0,   231,   232,   233,   234,   235,     0,   534,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,   236,   237,   238,   239,   240,   241
};

static const yytype_int16 yycheck[] =
{
      37,   256,    39,    42,   259,   150,    43,   262,    37,    28,
      39,   262,    49,   480,    43,   211,   372,    28,    59,    16,
      49,   268,   416,    99,   453,   268,    28,   177,    65,    66,
      59,    20,    28,     9,    99,    18,    65,    66,    96,    59,
       0,   508,    60,   101,    59,    82,    28,   105,    17,    28,
      87,    20,    89,    82,   204,    92,    17,   101,    87,   103,
      89,    28,    28,    92,   105,   106,    35,    63,    79,   101,
      39,   103,    37,    91,    39,    51,   105,   106,    43,    48,
     474,   118,    28,    99,    49,   105,   106,    56,    28,   118,
     105,   106,   521,    95,    59,   132,    93,   134,   345,   136,
      65,    66,   345,   132,   100,   123,    89,   136,   464,   305,
     504,    88,    28,    95,   470,    95,    95,    82,    63,   315,
     100,   162,    87,    63,    89,    95,    96,    92,    95,    95,
     167,   168,    95,   162,    97,   104,   173,   100,   167,   168,
     105,   106,   162,    96,   173,   539,    63,   162,   101,    95,
     119,    96,   105,   118,    99,    95,   101,    96,   514,   302,
     100,   304,   413,    96,    37,   202,    39,   132,   101,   420,
      43,   136,   105,   202,   211,   193,    49,   214,    99,    95,
      94,    68,   211,   222,    95,    96,    59,   101,   252,   253,
     105,   106,    65,    66,   258,   450,    96,   162,   167,   101,
     177,   101,   167,   168,   173,     6,    96,    28,   173,    82,
      95,   101,    13,   182,    87,    95,    89,    97,    96,    92,
     100,    96,    37,   101,    39,    26,    27,   204,    43,   101,
     102,   103,   105,   106,    49,   499,   500,   202,    13,    14,
     495,    67,   387,    28,    59,   118,   211,   162,    28,    13,
      65,    66,    59,    99,    18,    19,    95,    93,    97,   132,
      24,   100,    97,   136,    28,    93,     5,    82,   305,    96,
     104,   101,    87,    96,    89,    93,   305,    92,   315,   256,
      99,   101,    96,    99,    28,    96,   315,   256,   325,   162,
     105,   106,   104,    95,   167,   168,   333,    93,   105,   106,
     173,    98,    93,   118,   333,    93,    93,    93,   134,   135,
     117,   100,   119,    96,    37,    79,    39,   132,    96,    95,
      43,   136,    94,   360,    28,    99,    49,    94,    99,   202,
      98,    95,    63,    97,    99,    98,    28,    93,   211,   308,
     305,    94,    65,    66,   170,   103,   101,   162,    99,   122,
     315,   103,   167,   168,   102,   162,   102,   102,   173,    82,
       4,    99,    99,     4,    87,    99,    89,    93,   333,    92,
      94,   348,   349,    21,   351,   104,   104,   354,    96,    96,
      96,    10,    94,   102,   210,    94,   212,   202,   102,   215,
     197,     4,    68,   100,     5,   118,   211,    96,    96,    99,
     103,   103,    13,   104,    93,    93,   102,    18,    19,   132,
      94,    96,    10,    24,    96,    94,   242,    28,   101,    96,
      94,    93,    98,    94,   308,    94,    96,   167,   254,   311,
     256,   257,   305,   259,    17,   472,   262,   105,   475,   104,
     409,   478,   315,   472,   167,   168,    19,   180,    20,   478,
     173,    62,    63,    64,   385,    66,    67,   182,   431,   387,
     333,   158,   409,   373,   420,   531,    29,   405,    79,   495,
     411,    51,     1,    55,     8,    -1,   453,   454,    -1,   202,
      -1,    -1,    93,    -1,    95,    -1,    97,   163,   525,    -1,
     305,    -1,    -1,    -1,   531,   302,   525,   304,    -1,   325,
     315,   308,   531,    -1,   330,    -1,    -1,   472,   184,    -1,
      -1,   122,    -1,   478,    -1,   341,     5,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    -1,   360,    24,    -1,    -1,   214,    28,
      -1,    -1,    -1,    -1,   521,    -1,   372,   373,   374,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,   385,
     525,   387,    -1,    13,    -1,    -1,   531,    -1,    18,    19,
      -1,   247,   398,    -1,    24,    -1,    -1,    -1,    28,   405,
     256,    -1,   408,   409,   260,    -1,    -1,    -1,     5,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,   472,
      -1,    18,    19,    -1,    -1,   478,    95,    24,    97,    -1,
     333,    28,    62,    63,    64,   104,    66,    67,   444,    -1,
      -1,    -1,   448,   449,   450,    -1,    -1,    77,    78,    79,
      80,    -1,    -1,   122,    -1,    -1,    -1,    -1,   464,    -1,
      -1,    -1,    -1,    -1,   470,    95,    -1,    97,    98,   475,
      -1,    -1,   525,    -1,    -1,   105,    -1,   472,   531,   109,
      -1,   111,    79,   478,   490,    -1,    -1,    -1,    -1,   495,
      -1,    -1,   122,   499,   500,    -1,    -1,    -1,    95,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,   104,   514,   365,
       5,    -1,    -1,   369,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    18,    19,   122,    -1,    -1,    -1,    24,
     525,    -1,    -1,    28,    -1,    -1,   531,   393,    -1,    -1,
      -1,    13,    -1,    -1,    -1,   401,    18,    19,    -1,    -1,
      -1,    -1,    24,   409,    -1,    -1,    28,    -1,   414,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,
       3,    -1,     5,     6,     7,   478,     9,    -1,    11,    12,
      13,    14,    15,    16,    79,    18,    19,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      95,    -1,    97,    -1,    -1,    -1,    -1,    79,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   525,    95,    -1,    97,    -1,   122,   531,    62,
      63,    64,    -1,    66,    67,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    77,    78,    79,    80,    18,    19,
     122,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    -1,
      93,    -1,    95,    -1,    97,    -1,    99,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,     7,   109,     9,   111,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,   122,
      22,    23,    24,    25,    26,    27,    28,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    79,
      18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    95,    -1,    97,    -1,    -1,
      62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,
      -1,    -1,   122,    -1,    62,    63,    64,    -1,    66,    67,
      -1,    93,    -1,    95,    -1,    97,    -1,    -1,    -1,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,    -1,    -1,     5,    -1,    93,    94,    95,    -1,    97,
     122,    13,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,
      -1,   109,    24,   111,     5,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    13,    -1,   122,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    93,     5,    95,    -1,    97,    77,    78,    79,    80,
      13,    -1,    -1,    -1,    -1,    18,    19,   109,    -1,   111,
      -1,    24,    -1,     5,    95,    28,    97,    98,    -1,    -1,
     122,    13,    -1,    -1,    -1,    -1,    18,    19,   109,    -1,
     111,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,
      62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,     5,    95,    96,    97,    77,    78,    79,    80,    13,
      -1,    -1,    -1,    -1,    18,    19,   109,    -1,   111,    -1,
      24,    -1,    -1,    95,    28,    97,    -1,    -1,    -1,   122,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,     5,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
     122,    18,    19,    -1,    -1,    -1,    -1,    24,    62,    63,
      64,    28,    66,    67,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    77,    78,    79,    80,    18,    19,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    93,
      -1,    95,    -1,    97,    -1,    62,    63,    64,    -1,    66,
      67,     5,    -1,    -1,    -1,   109,    -1,   111,    -1,    13,
      77,    78,    79,    80,    18,    19,    -1,    -1,   122,    -1,
      24,    62,    63,    64,    28,    66,    67,     5,    95,    -1,
      97,    98,    -1,    -1,    -1,    13,    77,    78,    79,    80,
      18,    19,   109,    -1,   111,    -1,    24,    -1,    -1,    -1,
      28,    -1,    93,    -1,    95,   122,    97,    -1,    62,    63,
      64,    -1,    66,    67,     5,    -1,    -1,    -1,   109,    -1,
     111,    -1,    13,    77,    78,    79,    80,    18,    19,    -1,
      21,   122,    -1,    24,    62,    63,    64,    28,    66,    67,
       5,    95,    96,    97,    -1,    -1,    -1,    -1,    13,    77,
      78,    79,    80,    18,    19,   109,    -1,   111,    -1,    24,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    95,   122,    97,
      98,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,    -1,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    95,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    -1,    -1,   109,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,   122,    97,    -1,    99,     5,    -1,    -1,     8,    -1,
      -1,    -1,     5,    13,   109,     8,   111,    -1,    18,    19,
      13,    -1,    -1,    -1,    24,    18,    19,   122,    28,    -1,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    -1,    66,    67,    -1,    62,
      63,    64,    -1,    66,    67,     5,    -1,    77,    78,    79,
      80,    -1,    -1,    13,    77,    78,    79,    80,    18,    19,
      -1,    -1,    -1,    -1,    24,    95,    -1,    97,    28,    -1,
      -1,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,   109,
      -1,   111,     5,    -1,    -1,    -1,   109,    -1,   111,    -1,
      13,    -1,   122,    -1,    -1,    18,    19,    -1,    -1,   122,
      -1,    24,    62,    63,    64,    28,    66,    67,     5,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    13,    77,    78,    79,
      80,    18,    19,    13,    -1,    -1,    -1,    24,    18,    19,
      -1,    28,    -1,    -1,    24,    95,    -1,    97,    28,    62,
      63,    64,    -1,    66,    67,     5,    -1,    -1,    -1,   109,
      -1,   111,    -1,    13,    77,    78,    79,    80,    18,    19,
      -1,    -1,   122,    -1,    24,    62,    63,    64,    28,    66,
      67,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,   109,    -1,   111,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,   122,
      97,    -1,    -1,     5,    -1,    95,     8,    97,    -1,    -1,
       5,    13,    -1,    -1,   104,    -1,    18,    19,    13,    79,
      -1,    -1,    24,    18,    19,   122,    28,    -1,    -1,    24,
      -1,    26,   122,    28,     5,    95,    -1,    97,    -1,    -1,
      -1,     5,    13,    -1,    -1,   105,    -1,    18,    19,    13,
      -1,    -1,    -1,    24,    18,    19,    -1,    28,    -1,    -1,
      24,    -1,   122,    -1,    28,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    79,    -1,    -1,
      18,    19,    -1,    -1,    79,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,
      95,    -1,    97,    78,    79,    80,    81,    82,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    95,    -1,    97,   122,    -1,   104,
      -1,    95,    -1,    97,   109,   110,   111,   112,   113,   114,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    95,   122,    97,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,   122,    93,    -1,    -1,    -1,    -1,
      -1,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    99,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,    -1,    -1,    78,    79,    80,    81,    82,   122,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    87,    88,   104,
      -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
      -1,   101,    -1,    -1,   104,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    81,    82,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    81,    82,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    96,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    -1,   109,   110,   111,   112,
     113,   114,    69,    70,    71,    72,    73,    74,    75,    76,
      98,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    78,    79,    80,
      81,    82,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    78,    79,    80,    81,    82,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    20,   249,   252,    28,   253,     0,    99,    17,   250,
     254,    63,    95,   100,   253,   256,   257,     6,    13,    26,
      27,   156,   157,   158,   163,   168,   172,   175,   251,    99,
     255,   256,   257,   257,    28,    95,   160,   161,    28,    95,
     142,   173,   176,    28,    95,   165,   166,   167,    95,   161,
     170,    99,    68,   250,    96,    99,   101,   159,   160,     5,
      13,    18,    19,    24,    28,    79,    95,    97,   104,   122,
     124,   125,   126,   127,   131,   132,   137,   139,   146,   151,
     153,    28,   105,   124,   143,   144,   145,   161,   140,   142,
      28,   149,   104,   124,   164,   165,   169,   170,   104,   124,
     251,   255,   161,    96,    99,    95,   122,   125,   127,   130,
     131,   132,   137,   139,   146,   151,   140,    93,    97,    93,
     124,   138,   124,    13,    28,    62,    63,    64,    66,    67,
      77,    78,    79,    80,    95,    97,    98,   109,   111,   122,
     126,   127,   128,   131,   132,   151,   177,   178,   179,   180,
     181,   188,   189,   196,   197,   198,   199,   200,   205,   206,
     162,   199,     5,   104,   124,    96,   101,   101,   105,   124,
      93,   154,   174,    95,   124,   141,   142,   140,   124,    96,
      99,    96,    99,   162,   104,   159,   130,   153,   130,    28,
     125,   147,   148,   149,   150,   124,   152,    79,   125,   133,
     134,   135,   161,    96,   140,   126,   199,   105,   124,   129,
      95,    98,    93,   182,    95,    97,   100,   190,   191,   192,
     193,   194,   100,    69,    70,    71,    72,    73,    74,    75,
      76,    78,    79,    80,    81,    82,   109,   110,   111,   112,
     113,   114,   201,   202,   203,   204,   200,   101,   130,   162,
     144,   124,     3,     7,     9,    11,    12,    14,    15,    16,
      22,    23,    25,    28,   154,   155,   156,   161,   162,   171,
     199,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   218,   219,   220,   224,   230,   236,   237,   243,   244,
     245,   246,   247,   248,   124,   174,   164,   169,   162,    96,
      96,    94,    99,   140,    99,    98,   125,    94,    99,    63,
     136,   124,   174,    96,    96,    98,   199,   129,    94,   182,
     183,   185,   186,   187,   199,    95,    96,   126,   162,   195,
     102,   199,    28,    95,   149,   199,   162,    28,   211,   211,
     199,    21,    28,   154,   161,   162,   199,   208,   231,   232,
     233,   235,   199,   211,   199,   208,   162,    93,    28,    93,
      95,   189,   208,   226,    94,   103,   104,   203,   204,   217,
      87,    88,    99,   102,   122,   147,   147,   129,   133,   136,
     129,    96,   101,    94,   101,   101,   184,   102,   126,    96,
     101,   105,    96,   101,   105,    98,   199,    98,   102,   124,
     199,   103,   104,   154,   154,    99,   154,   154,    99,     4,
     238,   239,   240,   103,     4,   221,   222,   223,   199,   100,
      99,    93,   162,   104,   104,   162,   155,   207,   199,    96,
      94,   185,   182,   187,   199,    96,    96,    96,   101,    96,
     162,    96,   101,    98,   102,    98,   199,    96,    21,    21,
      99,   199,   231,    10,   199,     8,   161,   162,   199,   213,
     241,   242,    94,   238,   102,   189,     8,   162,    94,   221,
     102,    96,    95,    28,    93,    95,   189,   226,     4,   225,
     227,   228,   184,    96,    96,   101,   105,    96,   199,    98,
     102,   199,   199,   208,   234,    99,   154,   218,   154,   103,
     104,   155,   100,   155,    93,    26,   221,   199,    93,     8,
     124,   229,    94,   225,   102,    96,    96,   101,    98,   199,
     234,    10,   199,   242,   242,    95,   221,    96,    94,    96,
     225,   101,   155,    96,    98,   154,   218,    26,    94,    93,
      94,   229,    96,   221,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   123,   124,   124,   124,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   128,   129,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   131,   132,   133,
     133,   134,   134,   134,   134,   135,   135,   136,   137,   138,
     139,   140,   140,   141,   141,   142,   143,   143,   143,   144,
     144,   145,   145,   145,   145,   146,   147,   147,   147,   148,
     149,   150,   151,   152,   153,   153,   153,   154,   155,   155,
     156,   156,   156,   157,   157,   157,   158,   158,   159,   159,
     160,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   167,   168,   168,   169,   169,   170,
     170,   170,   171,   172,   172,   173,   174,   175,   175,   176,
     177,   177,   177,   178,   178,   178,   179,   179,   179,   179,
     179,   180,   181,   181,   181,   181,   181,   182,   182,   182,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   190,   191,
     192,   192,   192,   192,   192,   192,   193,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     195,   195,   196,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   201,   201,   201,   202,   202,   202,   202,   202,
     202,   203,   203,   203,   203,   204,   204,   204,   204,   204,
     204,   204,   205,   205,   205,   205,   205,   205,   205,   206,
     206,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   208,   208,   208,   208,
     208,   208,   209,   210,   211,   212,   213,   214,   215,   215,
     216,   217,   217,   217,   218,   218,   218,   218,   218,   218,
     219,   219,   220,   220,   220,   220,   221,   221,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   228,   228,
     229,   229,   230,   230,   230,   230,   231,   232,   232,   233,
     234,   235,   235,   235,   236,   237,   238,   238,   239,   240,
     240,   240,   241,   241,   241,   242,   243,   243,   244,   244,
     245,   245,   246,   246,   247,   248,   249,   250,   250,   251,
     251,   252,   253,   254,   254,   255,   255,   256,   256,   256,
     257
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     4,     3,
       0,     3,     2,     2,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     1,     2,     0,     1,
       3,     3,     2,     2,     1,     4,     3,     3,     0,     2,
       1,     1,     5,     1,     2,     3,     3,     3,     3,     0,
       1,     1,     1,     1,     1,     1,     2,     4,     3,     0,
       1,     4,     3,     1,     3,     1,     3,     2,     4,     3,
       0,     1,     1,     3,     2,     2,     4,     3,     0,     4,
       2,     3,     3,     4,     3,     1,     1,     5,     4,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     4,     1,     1,     4,     3,     2,
       2,     3,     0,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     3,
       5,     4,     4,     3,     7,     6,     4,     5,     7,     5,
       4,     6,     4,     4,     6,     4,     3,     5,     3,     2,
       1,     3,     3,     1,     1,     3,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     1,     3,     1,     2,     2,
       3,     2,     2,     1,     7,     7,     5,     5,     5,     3,
       1,     1,     9,     6,     7,     4,     2,     0,     3,     2,
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

#line 2204 "Analyser.tab.c"

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
#line 785 "Analyser.y"


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
