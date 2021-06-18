/* A Bison parser, made by GNU Bison 3.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 313 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
