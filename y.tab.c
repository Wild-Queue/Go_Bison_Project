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


#line 101 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    T_SENDOP = 377,
    T_RELOP = 378,
    T_MULDIVANDOP = 379
  };
#endif
/* Tokens.  */
#define T_BREAK 258
#define T_CASE 259
#define T_CHAN 260
#define T_CONST 261
#define T_CONTINUE 262
#define T_DEFAULT 263
#define T_DEFER 264
#define T_ELSE 265
#define T_FALLTHROUGH 266
#define T_FOR 267
#define T_FUNC 268
#define T_GO 269
#define T_GOTO 270
#define T_IF 271
#define T_IMPORT 272
#define T_INTERFACE 273
#define T_MAP 274
#define T_PACKAGE 275
#define T_RANGE 276
#define T_RETURN 277
#define T_SELECT 278
#define T_STRUCT 279
#define T_SWITCH 280
#define T_TYPE 281
#define T_VAR 282
#define T_ID 283
#define T_INT 284
#define T_INT8 285
#define T_INT16 286
#define T_INT32 287
#define T_INT64 288
#define T_UINT 289
#define T_UINT8 290
#define T_UINT16 291
#define T_UINT32 292
#define T_UINT64 293
#define T_UINTPTR 294
#define T_FLOAT32 295
#define T_FLOAT64 296
#define T_COMPLEX128 297
#define T_COMPLEX64 298
#define T_BOOL 299
#define T_BITE 300
#define T_RUNE 301
#define T_STRING 302
#define T_ERROR 303
#define T_MAKE 304
#define T_LEN 305
#define T_CAP 306
#define T_NEW 307
#define T_APPEND 308
#define T_COPY 309
#define T_CLOSE 310
#define T_DELETE 311
#define T_COMPLEX 312
#define T_REAL 313
#define T_IMAG 314
#define T_PANIC 315
#define T_RECOVER 316
#define T_ICONST 317
#define T_SCONST 318
#define T_RCONST 319
#define T_BCONST 320
#define T_CCONST 321
#define T_IMCONST 322
#define T_EOF 323
#define T_LESS 324
#define T_GREAT 325
#define T_LESSOREQU 326
#define T_GREATOREQU 327
#define T_NOTEQU 328
#define T_EQU 329
#define T_ANDOP 330
#define T_OROP 331
#define T_NOTOP 332
#define T_ADDOP 333
#define T_MULTOP 334
#define T_SUBTROP 335
#define T_DIVOP 336
#define T_MOD 337
#define T_ADDASSOP 338
#define T_MULTASSOP 339
#define T_SUBTRASSOP 340
#define T_DIVASSOP 341
#define T_DOUBLEPLUSOP 342
#define T_DOUBLEMINUSOP 343
#define T_TAB 344
#define T_NL 345
#define T_POINTER 346
#define T_REFERENCE 347
#define T_LCURLYBR 348
#define T_RCURLYBR 349
#define T_LPAREN 350
#define T_RPAREN 351
#define T_LBRACK 352
#define T_RBRACK 353
#define T_SEMI 354
#define T_DOT 355
#define T_COMMA 356
#define T_COLON 357
#define T_ASSIGN 358
#define T_ASSIGNOP 359
#define T_DOTDOTDOT 360
#define T_SIMPLCOMMENT 361
#define T_LBLOCKCOMMET 362
#define T_RBLOCKCOMMET 363
#define T_BITANDOP 364
#define T_BITOR 365
#define T_XOR 366
#define T_LSHIFT 367
#define T_RSHIFT 368
#define T_BITCLEAR 369
#define T_MODEQUOP 370
#define T_ANDEQUOP 371
#define T_OREQUOP 372
#define T_XOREQUOP 373
#define T_LSHIFTEQU 374
#define T_RSHIFTEQU 375
#define T_BITCLEAREQU 376
#define T_SENDOP 377
#define T_RELOP 378
#define T_MULDIVANDOP 379

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

#line 400 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#define YYLAST   2053

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  125
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  290
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  501

#define YYUNDEFTOK  2
#define YYMAXUTOK   379

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
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   160,   160,   161,   162,   165,   166,   169,   170,   171,
     172,   173,   174,   175,   176,   179,   182,   185,   188,   191,
     194,   196,   199,   200,   201,   202,   205,   206,   208,   211,
     214,   217,   220,   221,   224,   225,   228,   231,   232,   233,
     236,   237,   241,   242,   243,   244,   247,   250,   251,   254,
     257,   260,   263,   266,   269,   272,   273,   274,   277,   280,
     282,   285,   286,   287,   290,   291,   292,   295,   296,   299,
     301,   304,   305,   306,   309,   310,   313,   314,   317,   318,
     321,   323,   326,   327,   330,   333,   336,   337,   340,   342,
     345,   346,   347,   350,   353,   354,   357,   360,   363,   364,
     367,   370,   371,   372,   375,   377,   380,   381,   382,   383,
     384,   387,   391,   433,   436,   437,   438,   439,   440,   441,
     442,   443,   446,   448,   451,   452,   453,   454,   455,   456,
     459,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   478,   481,   484,   485,   488,   489,
     492,   493,   494,   495,   496,   499,   500,   501,   502,   503,
     504,   507,   508,   509,   510,   513,   514,   515,   516,   517,
     518,   519,   522,   523,   524,   525,   526,   527,   528,   531,
     532,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   552,   553,   554,   555,
     556,   557,   560,   563,   566,   569,   572,   575,   578,   579,
     582,   585,   586,   587,   590,   591,   592,   596,   597,   598,
     601,   602,   605,   606,   609,   610,   613,   614,   617,   620,
     621,   624,   626,   629,   630,   633,   634,   637,   640,   641,
     644,   645,   648,   649,   650,   651,   654,   657,   659,   667,
     670,   673,   674,   675,   678,   681,   684,   685,   688,   691,
     692,   693,   696,   697,   698,   701,   704,   705,   708,   709,
     712,   713,   716,   717,   720,   723,   726,   730,   732,   735,
     737,   740,   743,   746,   747,   749,   751,   754,   755,   756,
     759
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
  "T_SENDOP", "T_RELOP", "T_MULDIVANDOP", "$accept", "Type", "TypeName",
  "TypeLit", "ArrayType", "ArrayLenght", "ElementType", "SliceType",
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
  "Literal", "BasicLit", "OperandName", "QualifiedIdent", "FunctionLit",
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
     375,   376,   377,   378,   379
};
# endif

#define YYPACT_NINF -379

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-379)))

#define YYTABLE_NINF -283

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    21,    16,   -33,  -379,  -379,  -379,    45,     9,   144,
      11,  -379,    -4,    23,    23,  -379,  -379,    -8,     7,    10,
      12,  -379,    19,  -379,  -379,  -379,  -379,  -379,    38,    45,
      27,    36,  -379,  -379,    50,   110,  -379,   355,  -379,    37,
    -379,    59,   148,  1165,   150,  -379,  -379,  -379,   110,  1191,
    -379,   144,  -379,  -379,  -379,    -4,   110,    76,    87,  1279,
      59,   105,   109,   119,  -379,  1286,  1286,   615,  1076,   197,
     111,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,   108,   128,  1286,  -379,   125,   143,   147,   146,
     161,  1303,  -379,    59,  1286,  -379,   159,   166,   176,   174,
    1076,   170,  -379,  -379,  -379,  -379,   110,  1310,  -379,  -379,
    -379,   250,  1286,     4,  -379,  -379,   186,    59,   104,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  1286,  -379,  1076,  1286,
    -379,  -379,   197,   190,   185,  -379,  -379,  -379,  -379,  -379,
      96,  -379,   194,  1939,  -379,  1076,  -379,  -379,  1716,  1286,
    1076,   258,  -379,  -379,  -379,  -379,    37,  1286,   404,  -379,
    -379,    37,  -379,  -379,  -379,   161,  -379,  -379,   150,  -379,
     110,  -379,  1076,  -379,  1279,  -379,    22,  -379,   201,   204,
      59,   205,  -379,   198,    63,   277,  -379,   218,   208,   251,
    1286,  -379,   161,    79,   188,  -379,  1076,  1286,   213,  1076,
     637,    13,  -379,  -379,  -379,  -379,  -379,   148,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  1076,  -379,  -379,
    -379,  -379,  1076,  -379,  -379,  -379,  -379,  -379,   291,   291,
    1076,  -379,   529,  1076,   291,  1102,  1076,   233,   678,   230,
    -379,   240,  -379,   224,  1281,  -379,  1502,   238,  -379,  -379,
    -379,   243,  -379,  -379,   221,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
     186,  -379,  -379,  -379,  -379,  -379,  -379,   250,  -379,   250,
    1286,  -379,  -379,     4,  -379,  -379,   251,  -379,  -379,  1610,
    -379,  -379,   115,   -32,  1762,   748,  1776,  -379,  1286,  -379,
    1939,  -379,  -379,  -379,  -379,  1939,  1076,   139,  -379,   244,
    1487,  1340,  -379,   161,   161,   256,   161,  1939,  -379,  1394,
     262,  -379,   345,   241,   354,   223,  1448,   263,   270,  -379,
    1076,  -379,   260,   265,  1076,  -379,  -379,   404,   505,  1076,
    -379,  -379,  -379,  -379,  -379,  -379,   271,  -379,   785,   118,
    -379,   274,   126,  -379,  -379,  1656,   811,   275,  1939,   848,
     356,  -379,  -379,   874,  -379,   365,  1076,   969,   282,   345,
     276,  1139,   976,   286,   354,   279,    30,   354,  1039,   378,
    -379,  -379,  -379,  -379,  -379,  -379,  1939,  -379,  -379,    72,
    -379,   288,  -379,  -379,   289,  -379,  1076,  -379,  1702,  -379,
    1076,  1076,  1102,  1939,   287,   -13,  1822,  -379,   284,   285,
    1556,  -379,  -379,  -379,  -379,  -379,   404,   259,  -379,  -379,
    -379,  -379,   404,   467,   294,    84,   354,  1847,   298,  1222,
     299,   378,   290,  -379,   301,   142,  -379,  -379,  1872,  -379,
    1076,  1939,  1939,  -379,  -379,  1102,  -379,  -379,   384,  1076,
    1076,  -379,    32,  -379,   302,  -379,   307,   354,   378,  -379,
     304,  -379,  -379,  -379,   404,  -379,  -379,   310,  -379,  1893,
    -379,   -13,  1939,  -379,  -379,  1253,  -379,  -379,   309,   314,
    1286,  -379,  -379,  -379,  -379,  -379,   316,  -379,  -379,  -379,
    -379
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   282,   281,     1,   278,     0,   280,
       0,   290,   286,     0,     0,   283,   289,     0,     0,     0,
       0,    64,     0,    61,    62,    63,    65,    66,     0,   278,
       0,     0,   287,   288,    74,    70,    67,    71,    96,    39,
     100,     0,     0,     0,    81,    78,    82,    83,    89,     0,
      86,   280,   276,   277,   284,   286,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     2,     3,     7,    12,     8,     9,    10,    11,    13,
      14,     6,     0,     5,     0,    45,     0,    37,    40,     0,
      95,    32,    51,     0,     0,    85,     0,     0,     0,     0,
       0,    91,   279,   285,    75,    68,    70,     0,    17,    55,
      31,    49,     0,    21,    30,    29,     0,     0,   111,   106,
     109,   107,   110,   108,   174,   172,   176,   173,     0,     0,
     177,   175,   178,   145,     0,   114,   101,   104,   102,   105,
     148,   116,     0,    16,   146,     0,   115,    73,    76,     0,
       0,     0,    43,    44,    36,    38,     0,     0,    60,    97,
      94,    39,    35,    33,    34,    99,    84,    79,    81,    87,
      89,    92,     0,    69,     0,    56,     5,    52,     0,     0,
       0,     0,    54,     0,    74,     0,    26,     0,     0,    25,
       0,     4,    31,   145,     0,    18,     0,     0,     0,     0,
       0,     0,   117,   118,   119,   120,   121,     0,   155,   156,
     157,   158,   159,   160,   151,   150,   161,   165,   162,   166,
     167,   170,   163,   164,   168,   169,   171,     0,   152,   153,
     154,   149,     0,    57,    72,   112,    41,    42,   269,   271,
       0,   274,   202,     0,   273,   202,   267,     0,   202,   111,
     190,     0,   181,     0,     0,   201,   205,     0,   183,   196,
     182,     0,   197,   198,     0,   199,   200,   191,   192,   220,
     221,   194,   184,   193,   185,   186,   187,   188,   189,   195,
      45,    98,    80,    88,    90,    55,    46,    49,    50,    49,
       0,    27,    19,    21,    28,    24,    23,   113,   103,     0,
      15,   143,   145,     0,     0,     0,     0,   122,     0,   144,
     147,    77,   204,   268,   270,   275,     0,   111,   245,     0,
       0,    76,   249,     0,     0,     0,     0,   254,   272,    76,
       0,   266,   257,   111,   227,   148,    76,     0,     0,    58,
       0,   213,     0,     0,     0,   208,   209,    60,   202,     0,
      47,    48,    53,    20,    22,   180,     0,   142,     0,     0,
     140,     0,     0,   123,   127,     0,     0,     0,   253,     0,
     213,   242,   243,     0,   244,   219,     0,     0,     0,   257,
       0,     0,     0,     0,   227,     0,     0,   227,     0,   234,
      93,   211,   212,   210,    59,   203,   206,   179,   136,     0,
     139,     0,   134,   137,     0,   125,     0,   126,     0,   130,
       0,     0,   202,   246,     0,     0,     0,   261,     0,     0,
      76,   259,   260,   264,   255,   256,    60,     0,   230,   229,
     225,   226,    60,     0,     0,   111,   227,     0,     0,     0,
       0,   234,     0,   141,     0,     0,   133,   131,     0,   124,
       0,   252,   251,   250,   248,   202,   218,   217,   216,     0,
       0,   258,     0,   228,     0,   224,     0,   227,   234,   239,
     241,   238,   232,   233,    60,   135,   138,     0,   129,     0,
     247,     0,   265,   263,   262,     0,   236,   223,     0,     0,
       0,   237,   132,   128,   215,   214,     0,   222,   231,   240,
     235
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -379,   -37,   -92,  -379,  -379,  -379,   -98,  -379,  -379,   131,
    -379,  -379,   129,  -379,  -379,  -379,   -50,  -379,   -14,  -379,
     280,  -379,  -379,  -158,  -379,   -41,  -379,  -379,  -379,  -379,
     -77,  -329,    44,  -379,  -379,   315,   416,   -12,   -29,  -379,
     267,   418,  -379,  -379,  -379,   268,   419,  -379,  -379,  -379,
    -140,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -233,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,   -60,   295,  -379,
    -379,  -220,  -209,  -379,  -379,    93,  -231,  -379,  -379,  -160,
    -379,    65,  -379,  -379,  -379,  -379,  -367,  -379,  -379,  -354,
    -379,  -379,  -379,  -378,    55,  -379,  -379,   -46,  -379,    74,
    -379,  -379,   -10,  -379,  -379,  -379,    67,  -379,  -379,  -379,
    -270,  -379,  -379,  -379,  -379,  -379,  -379,  -379,   420,   400,
    -379,    73,  -379,   399,   447,   222
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   133,    71,    72,    73,   134,   109,    74,    75,   187,
     188,   189,   295,    76,   115,    77,    90,   163,    91,    86,
      87,    88,    78,   178,   179,   180,   181,    79,   183,    80,
     250,   251,   252,    22,    23,    57,    58,   253,   254,    24,
      96,    97,    46,    47,    25,    98,    99,   255,    26,    41,
     160,    27,    42,   135,   136,   137,   138,    81,   139,   140,
     202,   203,   204,   205,   206,   141,   142,   148,   144,   227,
     228,   229,   230,   145,   146,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   344,   267,   268,   269,   383,
     384,   385,   270,   440,   338,   441,   442,   471,   271,   323,
     324,   325,   454,   326,   272,   273,   378,   379,   380,   422,
     423,   274,   275,   276,   277,   278,   279,     2,     9,    28,
       3,    82,    10,    30,    31,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    93,    85,   245,    40,    37,    95,   143,    49,   175,
     110,   322,   101,   159,   330,   335,     6,   337,   394,   177,
      34,   186,   108,    37,     4,   281,     1,    89,   114,   116,
     431,   195,   184,   434,   342,    38,    49,     4,    43,   147,
      34,   307,    59,   165,   104,   343,   152,   153,   457,     4,
      60,   233,   297,    21,   162,    61,    62,   166,   307,    11,
     307,    63,     8,   473,   360,    83,     7,   192,   194,   361,
     108,   171,    11,   362,     5,   182,   285,   164,   313,   314,
     158,    14,   466,   185,   328,    14,    11,    35,   159,   114,
     489,   193,   108,   291,    37,    21,    13,   461,   256,   300,
     342,   190,    39,   463,    12,    44,    52,    48,   308,    13,
      29,   343,   108,   488,   495,   159,    65,   -51,    51,    85,
     237,   234,  -282,    54,   280,   433,    -5,   485,    14,   350,
     288,   351,    66,    59,    67,    55,   299,   108,    34,   304,
     306,    60,    84,   284,    89,   491,    61,    62,   427,    89,
      17,    56,    63,   296,    39,   335,    64,    18,    49,    69,
     108,   302,    -5,  -282,    56,   318,   309,   310,   443,   303,
      19,    20,   105,   444,   196,   191,    92,   445,    43,    -5,
     315,   453,   321,   327,    -5,   329,   106,   381,   336,   483,
     484,   198,   352,   199,   200,   177,   201,   177,   111,    -5,
      -5,   186,   149,   311,    -5,    -5,   112,    65,   151,    -5,
     196,   357,   113,   320,   400,   150,   358,   331,    59,   401,
     359,   154,   403,    66,   453,    67,   117,   404,  -282,    56,
     319,    61,    62,   -74,    -5,    32,    33,    63,   476,    -5,
      56,   118,   -74,   477,   155,   365,   371,   372,   156,   374,
      69,   157,   375,   108,   158,   167,   368,   208,   209,   210,
     211,   212,   213,   214,   215,   168,   216,   217,   218,   219,
     220,   367,   169,   170,   172,   119,   120,   121,   176,   122,
     123,   190,   191,   197,   298,   196,   235,   256,   256,   396,
     124,   125,   126,   127,   207,   286,   290,   221,   222,   223,
     224,   225,   226,   287,   289,    64,   408,   293,   128,   301,
      67,   390,   292,   413,   294,   393,   416,   420,   198,   312,
     199,   200,   130,   386,   131,    -5,   332,   340,   437,   399,
      -5,    56,  -204,   -74,   339,   132,    -5,   347,   456,   458,
     390,    -5,    56,   349,   381,   348,   448,   369,   419,   377,
     451,   452,   256,   429,   198,   373,   199,   200,   382,   462,
      59,   376,   388,   389,   391,   418,   256,   397,    60,   392,
     402,   409,   256,    61,    62,   415,   424,   411,   426,    63,
     430,   432,   439,    64,   446,   447,   455,   459,   465,   460,
     479,   468,   474,   472,   481,   256,   367,   475,   486,   482,
     482,   487,   470,   497,   494,   490,   492,   238,   498,    59,
      17,   239,   500,   240,   256,   241,   242,   117,   243,   244,
     245,   173,    61,    62,   353,   354,   246,   247,    63,   248,
      19,    20,   249,    36,    65,   282,   236,    45,   283,    50,
     231,   395,   421,   438,   499,   480,   425,   414,   367,    53,
      66,   102,    67,   470,   103,    15,     0,     0,     0,    68,
       0,     0,     0,     0,     0,     0,   119,   120,   121,     0,
     122,   123,    59,     0,     0,     0,     0,    69,     0,     0,
      60,   124,   125,   126,   127,    61,    62,     0,     0,     0,
       0,    63,     0,   464,     0,    64,     0,   158,     0,   128,
       0,    67,     0,  -202,     0,     0,     0,     0,   238,     0,
      59,    17,   239,   130,   240,   131,   241,   242,   117,   243,
     244,   245,     0,    61,    62,     0,   132,   246,   247,    63,
     248,    19,    20,   249,    59,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,    65,    61,    62,     0,
     316,     0,     0,    63,     0,     0,     0,   317,     0,     0,
       0,     0,    66,     0,    67,     0,     0,   119,   120,   121,
       0,   122,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,   125,   126,   127,     0,     0,     0,    69,
       0,   119,   120,   121,     0,   122,   123,     0,   158,     0,
     128,     0,    67,     0,     0,     0,   124,   125,   126,   127,
       0,     0,     0,     0,   130,     0,   131,     0,     0,     0,
      59,     0,   158,     0,   128,     0,    67,   132,   117,     0,
       0,     0,     0,    61,    62,     0,     0,     0,   130,    63,
     131,     0,    59,   118,     0,     0,     0,     0,     0,     0,
     117,   132,     0,     0,     0,    61,    62,     0,     0,     0,
       0,    63,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
       0,   122,   123,    59,     0,     0,     0,     0,     0,     0,
       0,   117,   124,   125,   126,   127,    61,    62,     0,   119,
     120,   121,    63,   122,   123,     0,   333,     0,     0,     0,
     128,     0,    67,   129,   124,   125,   126,   127,     0,     0,
       0,     0,     0,     0,   130,     0,   131,     0,     0,     0,
       0,     0,   128,     0,    67,     0,     0,   132,     0,   305,
     119,   120,   121,     0,   122,   123,   130,     0,   131,     0,
       0,     0,     0,    59,     0,   124,   125,   126,   127,   132,
       0,   117,     0,     0,     0,     0,    61,    62,     0,     0,
       0,   334,    63,   128,     0,    67,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,   131,
      59,     0,     0,     0,     0,     0,     0,     0,   117,     0,
     132,     0,     0,    61,    62,     0,     0,     0,     0,    63,
     119,   120,   121,   118,   122,   123,    59,     0,     0,     0,
       0,     0,     0,     0,   117,   124,   125,   126,   127,    61,
      62,     0,     0,     0,     0,    63,     0,     0,     0,   118,
       0,     0,     0,   128,     0,    67,   364,   119,   120,   121,
       0,   122,   123,    59,     0,     0,     0,   130,     0,   131,
       0,   117,   124,   125,   126,   127,    61,    62,     0,   410,
     132,     0,    63,   119,   120,   121,   118,   122,   123,    59,
     128,   398,    67,     0,     0,     0,     0,   117,   124,   125,
     126,   127,    61,    62,   130,     0,   131,     0,    63,     0,
       0,     0,   118,     0,     0,     0,   128,   132,    67,   407,
     119,   120,   121,     0,   122,   123,     0,     0,     0,     0,
     130,     0,   131,     0,     0,   124,   125,   126,   127,     0,
       0,     0,     0,   132,     0,     0,   119,   120,   121,     0,
     122,   123,     0,   128,     0,    67,     0,     0,     0,     0,
       0,   124,   125,   126,   127,     0,     0,   130,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     132,    67,     0,   412,    59,     0,     0,   417,     0,     0,
       0,    59,   117,   130,   428,   131,     0,    61,    62,   117,
       0,     0,     0,    63,    61,    62,   132,   317,     0,     0,
      63,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,     0,   122,   123,     0,   119,   120,
     121,     0,   122,   123,    59,     0,   124,   125,   126,   127,
       0,     0,   117,   124,   125,   126,   127,    61,    62,     0,
       0,     0,     0,    63,   128,     0,    67,   435,     0,     0,
       0,   128,     0,    67,     0,     0,     0,     0,   130,     0,
     131,    59,     0,     0,     0,   130,     0,   131,     0,   117,
       0,   132,     0,     0,    61,    62,     0,     0,   132,     0,
      63,   119,   120,   121,   118,   122,   123,    59,     0,     0,
       0,     0,     0,     0,     0,   117,   124,   125,   126,   127,
      61,    62,     0,     0,     0,     0,    63,     0,     0,     0,
     317,     0,   436,     0,   128,     0,    67,     0,   119,   120,
     121,     0,   122,   123,    59,     0,     0,     0,   130,     0,
     131,     0,   117,   124,   125,   126,   127,    61,    62,     0,
       0,   132,     0,    63,   119,   120,   121,   118,   122,   123,
      59,   128,     0,    67,     0,     0,     0,     0,    60,   124,
     125,   126,   127,    61,    62,   130,     0,   131,     0,    63,
       0,     0,     0,    64,     0,     0,    59,   128,   132,    67,
       0,   119,   120,   121,    60,   122,   123,     0,     0,    61,
      62,   130,     0,   131,     0,    63,     0,     0,    65,    64,
       0,     0,     0,     0,   132,     0,     0,    59,     0,     0,
     469,     0,     0,     0,   128,    60,    67,     0,     0,     0,
      61,    62,     0,     0,    65,     0,    63,     0,     0,     0,
      64,     0,     0,     0,     0,     0,     0,     0,    59,     0,
      66,    69,    67,     0,     0,     0,    60,     0,     0,    94,
      65,    61,    62,     0,     0,     0,     0,    63,     0,   496,
       0,    64,     0,     0,    59,     0,    66,    69,    67,     0,
       0,    59,    60,     0,     0,   100,     0,    61,    62,    60,
       0,    65,     0,    63,    61,    62,     0,    64,    59,     0,
      63,     0,     0,    69,    64,   174,    60,    66,     0,    67,
       0,    61,    62,    60,     0,     0,     0,    63,    61,    62,
       0,    64,    65,     0,    63,     0,     0,     0,    64,     0,
       0,     0,     0,     0,    69,     0,     0,     0,    66,     0,
      67,     0,     0,     0,     0,     0,     0,     0,    65,   216,
     217,   218,   219,   220,     0,    65,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    69,    67,     0,     0,     0,
       0,    66,    65,    67,     0,   341,     0,     0,     0,    65,
     221,   222,   223,   224,   225,   226,     0,     0,   161,     0,
      67,   107,     0,     0,     0,    66,     0,    67,    69,   208,
     209,   210,   211,   212,   213,   214,   215,     0,   216,   217,
     218,   219,   220,     0,     0,    69,     0,   345,   346,     0,
       0,     0,    69,  -246,     0,     0,     0,     0,     0,  -205,
       0,   232,     0,     0,     0,     0,     0,     0,     0,   221,
     222,   223,   224,   225,   226,     0,     0,     0,     0,     0,
       0,     0,  -207,   208,   209,   210,   211,   212,   213,   214,
     215,     0,   216,   217,   218,   219,   220,     0,     0,     0,
       0,   345,   346,     0,     0,     0,     0,   158,     0,     0,
       0,     0,     0,  -205,     0,   232,     0,     0,     0,     0,
       0,     0,     0,   221,   222,   223,   224,   225,   226,     0,
       0,     0,     0,     0,     0,     0,  -207,   208,   209,   210,
     211,   212,   213,   214,   215,     0,   216,   217,   218,   219,
     220,     0,     0,     0,     0,   345,   346,     0,     0,     0,
       0,   387,     0,     0,     0,     0,     0,  -205,     0,   232,
       0,     0,     0,     0,     0,     0,     0,   221,   222,   223,
     224,   225,   226,     0,     0,   216,   217,   218,   219,   220,
    -207,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     216,   217,   218,   219,   220,     0,     0,     0,     0,   345,
     346,   370,     0,     0,     0,     0,   221,   222,   223,   224,
     225,   226,     0,   232,     0,     0,   -76,     0,     0,     0,
       0,   221,   222,   223,   224,   225,   226,     0,     0,     0,
       0,     0,     0,     0,  -207,   208,   209,   210,   211,   212,
     213,   214,   215,     0,   216,   217,   218,   219,   220,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232,  -265,     0,
       0,     0,     0,     0,     0,   221,   222,   223,   224,   225,
     226,     0,     0,     0,     0,     0,     0,     0,  -207,   208,
     209,   210,   211,   212,   213,   214,   215,     0,   216,   217,
     218,   219,   220,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   355,     0,     0,     0,
       0,   356,     0,     0,     0,     0,     0,     0,     0,   221,
     222,   223,   224,   225,   226,   208,   209,   210,   211,   212,
     213,   214,   215,     0,   216,   217,   218,   219,   220,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   405,     0,     0,     0,   406,     0,
       0,     0,     0,     0,     0,   221,   222,   223,   224,   225,
     226,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     216,   217,   218,   219,   220,   208,   209,   210,   211,   212,
     213,   214,   215,     0,   216,   217,   218,   219,   220,     0,
     449,     0,     0,     0,   450,     0,     0,     0,     0,     0,
       0,   221,   222,   223,   224,   225,   226,   232,     0,     0,
       0,     0,     0,     0,     0,   221,   222,   223,   224,   225,
     226,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     216,   217,   218,   219,   220,   208,   209,   210,   211,   212,
     213,   214,   215,     0,   216,   217,   218,   219,   220,     0,
     363,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,   222,   223,   224,   225,   226,     0,   366,     0,
       0,     0,     0,     0,     0,   221,   222,   223,   224,   225,
     226,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     216,   217,   218,   219,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,   208,   209,   210,   211,
     212,   213,   214,   215,     0,   216,   217,   218,   219,   220,
       0,   221,   222,   223,   224,   225,   226,     0,     0,     0,
     467,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     216,   217,   218,   219,   220,     0,   221,   222,   223,   224,
     225,   226,   208,   209,   210,   211,   212,   213,   214,   215,
     478,   216,   217,   218,   219,   220,     0,     0,     0,     0,
       0,   221,   222,   223,   224,   225,   226,     0,     0,     0,
       0,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   221,   222,   223,   224,   225,   226,   208,   209,
     210,   211,   212,   213,   214,   215,     0,   216,   217,   218,
     219,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   221,   222,
     223,   224,   225,   226
};

static const yytype_int16 yycheck[] =
{
      37,    42,    39,    16,    18,    17,    43,    67,    20,   107,
      60,   242,    49,    90,   245,   248,     0,   248,   347,   111,
      28,   113,    59,    35,    28,   165,    20,    39,    65,    66,
     384,   129,    28,   387,   254,    28,    48,    28,    28,    68,
      28,    28,     5,    93,    56,   254,    83,    84,   415,    28,
      13,   149,   192,     9,    91,    18,    19,    94,    28,    63,
      28,    24,    17,   441,    96,    28,    99,   117,   128,   101,
     107,   100,    63,   105,     1,   112,   174,    91,   238,   239,
      93,     8,   436,    79,   244,    12,    63,    95,   165,   126,
     468,   128,   129,   185,   106,    51,   100,   426,   158,   197,
     320,   113,    95,   432,    95,    95,    68,    95,    95,   100,
      99,   320,   149,   467,   481,   192,    79,    95,    99,   156,
     157,   150,   100,    96,   161,    95,    63,    95,    55,   287,
     180,   289,    95,     5,    97,    99,   196,   174,    28,   199,
     200,    13,   105,   172,   156,   474,    18,    19,   381,   161,
       6,   101,    24,   190,    95,   388,    28,    13,   170,   122,
     197,   198,    99,   100,   101,   242,   207,   227,    96,   198,
      26,    27,    96,   101,    95,    96,    28,   105,    28,    95,
     240,   412,   242,   243,   100,   245,    99,   103,   248,   459,
     460,    95,   290,    97,    98,   287,   100,   289,    93,    95,
      96,   293,     5,   232,   100,   101,    97,    79,   100,   105,
      95,    96,    93,   242,    96,   104,   101,   246,     5,   101,
     105,    96,    96,    95,   455,    97,    13,   101,   100,   101,
     242,    18,    19,   105,    95,    13,    14,    24,    96,   100,
     101,    28,   103,   101,   101,   305,   323,   324,   101,   326,
     122,   105,   329,   290,    93,    96,   316,    69,    70,    71,
      72,    73,    74,    75,    76,    99,    78,    79,    80,    81,
      82,   308,    96,    99,   104,    62,    63,    64,    28,    66,
      67,   293,    96,    98,    96,    95,    28,   347,   348,   349,
      77,    78,    79,    80,   100,    94,    98,   109,   110,   111,
     112,   113,   114,    99,    99,    28,   366,    99,    95,    96,
      97,   340,    94,   373,    63,   344,   376,   377,    95,    28,
      97,    98,   109,   100,   111,    95,    93,   103,   388,   358,
     100,   101,   102,   103,    94,   122,    95,    99,   415,   416,
     369,   100,   101,   122,   103,   102,   406,   103,   377,     4,
     410,   411,   412,   382,    95,    99,    97,    98,     4,   100,
       5,    99,    99,    93,   104,   377,   426,    96,    13,   104,
      96,    96,   432,    18,    19,    10,    94,    21,   102,    24,
      94,   102,     4,    28,    96,    96,    99,   103,    94,   104,
     450,    93,   102,    94,    10,   455,   433,    96,    96,   459,
     460,    94,   439,    94,   481,   101,    96,     3,    94,     5,
       6,     7,    96,     9,   474,    11,    12,    13,    14,    15,
      16,   106,    18,    19,   293,   296,    22,    23,    24,    25,
      26,    27,    28,    17,    79,   168,   156,    19,   170,    20,
     145,   348,   377,   388,   490,   455,   379,   373,   485,    29,
      95,    51,    97,   490,    55,     8,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    67,     5,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      13,    77,    78,    79,    80,    18,    19,    -1,    -1,    -1,
      -1,    24,    -1,    26,    -1,    28,    -1,    93,    -1,    95,
      -1,    97,    -1,    99,    -1,    -1,    -1,    -1,     3,    -1,
       5,     6,     7,   109,     9,   111,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    -1,   122,    22,    23,    24,
      25,    26,    27,    28,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    79,    18,    19,    -1,
      21,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    95,    -1,    97,    -1,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    -1,    -1,    -1,   122,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,    -1,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,
       5,    -1,    93,    -1,    95,    -1,    97,   122,    13,    -1,
      -1,    -1,    -1,    18,    19,    -1,    -1,    -1,   109,    24,
     111,    -1,     5,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      13,   122,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    67,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    77,    78,    79,    80,    18,    19,    -1,    62,
      63,    64,    24,    66,    67,    -1,    28,    -1,    -1,    -1,
      95,    -1,    97,    98,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    97,    -1,    -1,   122,    -1,   102,
      62,    63,    64,    -1,    66,    67,   109,    -1,   111,    -1,
      -1,    -1,    -1,     5,    -1,    77,    78,    79,    80,   122,
      -1,    13,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,
      -1,    93,    24,    95,    -1,    97,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,
     122,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    24,
      62,    63,    64,    28,    66,    67,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    77,    78,    79,    80,    18,
      19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    95,    -1,    97,    98,    62,    63,    64,
      -1,    66,    67,     5,    -1,    -1,    -1,   109,    -1,   111,
      -1,    13,    77,    78,    79,    80,    18,    19,    -1,    21,
     122,    -1,    24,    62,    63,    64,    28,    66,    67,     5,
      95,    96,    97,    -1,    -1,    -1,    -1,    13,    77,    78,
      79,    80,    18,    19,   109,    -1,   111,    -1,    24,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    95,   122,    97,    98,
      62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
     109,    -1,   111,    -1,    -1,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    62,    63,    64,    -1,
      66,    67,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    -1,    -1,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
     122,    97,    -1,    99,     5,    -1,    -1,     8,    -1,    -1,
      -1,     5,    13,   109,     8,   111,    -1,    18,    19,    13,
      -1,    -1,    -1,    24,    18,    19,   122,    28,    -1,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    62,    63,
      64,    -1,    66,    67,     5,    -1,    77,    78,    79,    80,
      -1,    -1,    13,    77,    78,    79,    80,    18,    19,    -1,
      -1,    -1,    -1,    24,    95,    -1,    97,    28,    -1,    -1,
      -1,    95,    -1,    97,    -1,    -1,    -1,    -1,   109,    -1,
     111,     5,    -1,    -1,    -1,   109,    -1,   111,    -1,    13,
      -1,   122,    -1,    -1,    18,    19,    -1,    -1,   122,    -1,
      24,    62,    63,    64,    28,    66,    67,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    77,    78,    79,    80,
      18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    -1,    93,    -1,    95,    -1,    97,    -1,    62,    63,
      64,    -1,    66,    67,     5,    -1,    -1,    -1,   109,    -1,
     111,    -1,    13,    77,    78,    79,    80,    18,    19,    -1,
      -1,   122,    -1,    24,    62,    63,    64,    28,    66,    67,
       5,    95,    -1,    97,    -1,    -1,    -1,    -1,    13,    77,
      78,    79,    80,    18,    19,   109,    -1,   111,    -1,    24,
      -1,    -1,    -1,    28,    -1,    -1,     5,    95,   122,    97,
      -1,    62,    63,    64,    13,    66,    67,    -1,    -1,    18,
      19,   109,    -1,   111,    -1,    24,    -1,    -1,    79,    28,
      -1,    -1,    -1,    -1,   122,    -1,    -1,     5,    -1,    -1,
       8,    -1,    -1,    -1,    95,    13,    97,    -1,    -1,    -1,
      18,    19,    -1,    -1,    79,    -1,    24,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      95,   122,    97,    -1,    -1,    -1,    13,    -1,    -1,   104,
      79,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    -1,    -1,     5,    -1,    95,   122,    97,    -1,
      -1,     5,    13,    -1,    -1,   104,    -1,    18,    19,    13,
      -1,    79,    -1,    24,    18,    19,    -1,    28,     5,    -1,
      24,    -1,    -1,   122,    28,     5,    13,    95,    -1,    97,
      -1,    18,    19,    13,    -1,    -1,    -1,    24,    18,    19,
      -1,    28,    79,    -1,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    95,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    78,
      79,    80,    81,    82,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,   122,    97,    -1,    -1,    -1,
      -1,    95,    79,    97,    -1,   104,    -1,    -1,    -1,    79,
     109,   110,   111,   112,   113,   114,    -1,    -1,    95,    -1,
      97,   122,    -1,    -1,    -1,    95,    -1,    97,   122,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    81,    82,    -1,    -1,   122,    -1,    87,    88,    -1,
      -1,    -1,   122,    93,    -1,    -1,    -1,    -1,    -1,    99,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    99,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,    -1,    -1,    78,    79,    80,    81,    82,
     122,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    87,
      88,   104,    -1,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    81,    82,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    81,    82,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    79,    80,    81,    82,
      -1,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      93,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    -1,   109,   110,   111,   112,
     113,   114,    69,    70,    71,    72,    73,    74,    75,    76,
      98,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,   242,   245,    28,   246,     0,    99,    17,   243,
     247,    63,    95,   100,   246,   249,   250,     6,    13,    26,
      27,   157,   158,   159,   164,   169,   173,   176,   244,    99,
     248,   249,   250,   250,    28,    95,   161,   162,    28,    95,
     143,   174,   177,    28,    95,   166,   167,   168,    95,   162,
     171,    99,    68,   243,    96,    99,   101,   160,   161,     5,
      13,    18,    19,    24,    28,    79,    95,    97,   104,   122,
     126,   127,   128,   129,   132,   133,   138,   140,   147,   152,
     154,   182,   246,    28,   105,   126,   144,   145,   146,   162,
     141,   143,    28,   150,   104,   126,   165,   166,   170,   171,
     104,   126,   244,   248,   162,    96,    99,   122,   126,   131,
     141,    93,    97,    93,   126,   139,   126,    13,    28,    62,
      63,    64,    66,    67,    77,    78,    79,    80,    95,    98,
     109,   111,   122,   126,   130,   178,   179,   180,   181,   183,
     184,   190,   191,   192,   193,   198,   199,   163,   192,     5,
     104,   100,   126,   126,    96,   101,   101,   105,    93,   155,
     175,    95,   126,   142,   143,   141,   126,    96,    99,    96,
      99,   163,   104,   160,     5,   131,    28,   127,   148,   149,
     150,   151,   126,   153,    28,    79,   127,   134,   135,   136,
     162,    96,   141,   126,   192,   131,    95,    98,    95,    97,
      98,   100,   185,   186,   187,   188,   189,   100,    69,    70,
      71,    72,    73,    74,    75,    76,    78,    79,    80,    81,
      82,   109,   110,   111,   112,   113,   114,   194,   195,   196,
     197,   193,   101,   131,   163,    28,   145,   126,     3,     7,
       9,    11,    12,    14,    15,    16,    22,    23,    25,    28,
     155,   156,   157,   162,   163,   172,   192,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   211,   212,   213,
     217,   223,   229,   230,   236,   237,   238,   239,   240,   241,
     126,   175,   165,   170,   163,   131,    94,    99,   141,    99,
      98,   127,    94,    99,    63,   137,   126,   175,    96,   192,
     131,    96,   126,   163,   192,   102,   192,    28,    95,   150,
     192,   163,    28,   204,   204,   192,    21,    28,   155,   162,
     163,   192,   201,   224,   225,   226,   228,   192,   204,   192,
     201,   163,    93,    28,    93,   184,   192,   201,   219,    94,
     103,   104,   196,   197,   210,    87,    88,    99,   102,   122,
     148,   148,   131,   134,   137,    96,   101,    96,   101,   105,
      96,   101,   105,    98,    98,   192,   102,   126,   192,   103,
     104,   155,   155,    99,   155,   155,    99,     4,   231,   232,
     233,   103,     4,   214,   215,   216,   100,    93,    99,    93,
     163,   104,   104,   163,   156,   200,   192,    96,    96,   163,
      96,   101,    96,    96,   101,    98,   102,    98,   192,    96,
      21,    21,    99,   192,   224,    10,   192,     8,   162,   163,
     192,   206,   234,   235,    94,   231,   102,   184,     8,   163,
      94,   214,   102,    95,   214,    28,    93,   192,   219,     4,
     218,   220,   221,    96,   101,   105,    96,    96,   192,    98,
     102,   192,   192,   201,   227,    99,   155,   211,   155,   103,
     104,   156,   100,   156,    26,    94,   214,    93,    93,     8,
     126,   222,    94,   218,   102,    96,    96,   101,    98,   192,
     227,    10,   192,   235,   235,    95,    96,    94,   214,   218,
     101,   156,    96,    98,   155,   211,    26,    94,    94,   222,
      96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   125,   126,   126,   126,   127,   127,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   130,   131,   132,   133,
     134,   134,   135,   135,   135,   135,   136,   136,   137,   138,
     139,   140,   141,   141,   142,   142,   143,   144,   144,   144,
     145,   145,   146,   146,   146,   146,   147,   148,   148,   148,
     149,   150,   151,   152,   153,   154,   154,   154,   155,   156,
     156,   157,   157,   157,   158,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   162,   162,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   168,   169,   169,   170,   170,
     171,   171,   171,   172,   173,   173,   174,   175,   176,   176,
     177,   178,   178,   178,   179,   179,   180,   180,   180,   180,
     180,   181,   182,   183,   184,   184,   184,   184,   184,   184,
     184,   184,   185,   186,   187,   187,   187,   187,   187,   187,
     188,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   190,   191,   192,   192,   193,   193,
     194,   194,   194,   194,   194,   195,   195,   195,   195,   195,
     195,   196,   196,   196,   196,   197,   197,   197,   197,   197,
     197,   197,   198,   198,   198,   198,   198,   198,   198,   199,
     199,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   201,   201,   201,   201,
     201,   201,   202,   203,   204,   205,   206,   207,   208,   208,
     209,   210,   210,   210,   211,   211,   211,   211,   211,   211,
     212,   212,   213,   213,   213,   213,   214,   214,   215,   216,
     216,   217,   217,   218,   218,   219,   219,   220,   221,   221,
     222,   222,   223,   223,   223,   223,   224,   225,   225,   226,
     227,   228,   228,   228,   229,   230,   231,   231,   232,   233,
     233,   233,   234,   234,   234,   235,   236,   236,   237,   237,
     238,   238,   239,   239,   240,   241,   242,   243,   243,   244,
     244,   245,   246,   247,   247,   248,   248,   249,   249,   249,
     250
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
       1,     1,     3,     3,     1,     1,     1,     2,     2,     2,
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

#line 2221 "y.tab.c"

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
#line 762 "Analyser.y"


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
