/* BLOCK A: Statements block*/
%{
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

%}

%union {
  unsigned int integer;
  double real;
  char *string;
  char character;
  int boolean;
}

//keywords
%token <string> T_BREAK T_CASE T_CHAN T_CONST T_CONTINUE T_DEFAULT T_DEFER T_ELSE T_FALLTHROUGH T_FOR T_FUNC T_GO T_GOTO T_IF T_IMPORT T_INTERFACE T_MAP T_PACKAGE T_RANGE T_RETURN T_SELECT T_STRUCT T_SWITCH T_TYPE T_VAR T_ID 

//type
%token <string> T_INT T_INT8 T_INT16 T_INT32 T_INT64 T_UINT T_UINT8 T_UINT16 T_UINT32 T_UINT64 T_UINTPTR T_FLOAT32 T_FLOAT64 T_COMPLEX128 T_COMPLEX64 T_BOOL T_BITE T_RUNE T_STRING T_ERROR 

//function
%token <string> T_MAKE T_LEN T_CAP T_NEW T_APPEND T_COPY T_CLOSE T_DELETE T_COMPLEX T_REAL T_IMAG T_PANIC T_RECOVER

//integer consts
%token <integer> T_ICONST

//string consts
%token <string> T_SCONST

//real consts
%token <real> T_RCONST

//logical
%token <boolean> T_BCONST

//chars
%token <character> T_CCONST

//imaginary const
%token<string> T_IMCONST

// End of file
%token <string> T_EOF


//operators
%token <string> 
T_LESS
T_GREAT
T_LESSOREQU
T_GREATOREQU
T_NOTEQU
T_EQU

T_ANDOP
T_OROP
T_NOTOP

T_ADDOP // +
T_MULTOP // *
T_SUBTROP // -
T_DIVOP // /
T_MOD // %
T_ADDASSOP // "+="
T_MULTASSOP  // "*=
T_SUBTRASSOP  // "-=
T_DIVASSOP // "/= 

T_DOUBLEPLUSOP // ++
T_DOUBLEMINUSOP // --

T_TAB
T_NL // NEW LINE

T_POINTER //*
T_REFERENCE //&

T_LCURLYBR // {
T_RCURLYBR // }
T_LPAREN // (
T_RPAREN // )
T_LBRACK // [
T_RBRACK // ]

T_SEMI // ;
T_DOT //.
T_COMMA // ,
T_COLON // :
T_ASSIGN //":=" 
T_ASSIGNOP // "="
T_DOTDOTDOT // ...
T_SIMPLCOMMENT //  //
T_LBLOCKCOMMET // /*
T_RBLOCKCOMMET // */

T_BITANDOP // &
T_BITOR // |
T_XOR // ^
T_LSHIFT // <<
T_RSHIFT // >>
T_BITCLEAR // &^
T_MODEQUOP // %=
T_ANDEQUOP // &=
T_OREQUOP // |=
T_XOREQUOP // ^=
T_LSHIFTEQU // <<=
T_RSHIFTEQU // >>=
T_BITCLEAREQU // &^=
T_SENDOP // <-


/*
*/

//assoc and priority (operators)
/*%nonassoc T_COLON
%nonassoc T_LBRACK T_RBRACK
%left T_OROP
%nonassoc T_RELOP
%nonassoc T_NOTOP
%left T_ADDOP
%left T_MULDIVANDOP
%right T_EQU
%nonassoc T_LPAREN T_RPAREN
*/
//start symbol of the Grammar = program
/*
*/
%start SourceFile;

%%

Type : TypeName
      | TypeLit
      | T_LPAREN Type T_RPAREN
      ;

TypeName : T_ID/*
         | QualifiedIdent*/
         ;

TypeLit : ArrayType/*No*/
        | StruckType/*Yes*/
        | PointerType/*Yes*/
        | FunctionType/*Yes*/
        | InterfaceType/*Yes*/
        | SliceType/*YES*/
        | MapType/*Yes*/
        | ChanelType/*-11*//*Yes*/
        ;

ArrayType       : T_LBRACK ArrayLenght T_RBRACK ElementType   /*{printf("ArrayType");}*/
                ;

ArrayLenght : Expression
            ;

ElementType : Type
            ;

SecondElementType       : TypeName
                        | ArrayType 
                        | StruckType 
                        | PointerType 
                        | FunctionType 
                        | InterfaceType 
                        | SliceType 
                        | MapType 
                        | T_LPAREN ChanelType T_RPAREN/**/
                        | T_LPAREN SecondElementType T_RPAREN/**/
                        ;


SliceType : T_LBRACK T_RBRACK ElementType
          ;

StruckType : T_STRUCT T_LCURLYBR FileDeclLoop T_RCURLYBR
           ;

FileDeclLoop : FileDecl T_SEMI FileDeclLoop
             /*| FileDecl FileDeclLoop*/
             |
             ;

FileDecl : IdentifierList Type Tag
         | IdentifierList Type
         | EmbeddedField Tag
         | EmbeddedField
         ;

EmbeddedField : TypeName 
              | T_MULTOP TypeName
              ;
Tag : T_SCONST 
    ;

PointerType : T_MULTOP BaseType
        ;

BaseType : Type
        ;

FunctionType : T_FUNC Signature
        ;

Signature : Parameters
        | Parameters Result
        ;

Result : Parameters
       | Type
       ;

Parameters : T_LPAREN ParameterLists T_RPAREN
          ;

ParameterLists : ParameterList
              | ParameterList T_COMMA
              |
              ;

ParameterList : ParameterDecl
             | ParameterDecl T_COMMA ParameterList
             ;

/*Поменял IdentifierList на ID во второй строчке*/
ParameterDecl : IdentifierList T_DOTDOTDOT Type
              | IdentifierList Type
              | T_DOTDOTDOT Type
              | Type
              ;

InterfaceType : T_INTERFACE T_LCURLYBR InterfaceTypeLoop T_RCURLYBR
              ;

InterfaceTypeLoop : MethodSpec T_SEMI InterfaceTypeLoop
                  | InterfaceTypeName T_SEMI InterfaceTypeLoop
/*                  | MethodSpec InterfaceTypeLoop
                  | InterfaceTypeName InterfaceTypeLoop*/
                  |
                  ;

MethodSpec : MethodName Signature
           ;

MethodName : T_ID 
           ;

InterfaceTypeName : TypeName
                  ;

MapType : T_MAP T_LBRACK KeyType T_RBRACK ElementType
        ;

KeyType : Type 
        ;

ChanelType : T_CHAN SecondElementType /*ElementType */
           | T_CHAN T_SENDOP SecondElementType /* ElementType*/
           | T_SENDOP T_CHAN SecondElementType/* ElementType*/
           ;

Block : T_LCURLYBR StatmentList T_RCURLYBR
        ;

StatmentList : Statment T_SEMI StatmentList 
/*             | Statment StatmentList*/
             |
             ;

Declaration : ConstDecl
            | TypeDecl
            | VarDecl
            ;

TopLevelDecl : Declaration
             | FunctionDecl
             | MethodDecl
             ;

ConstDecl : T_CONST ConstSpec
          | T_CONST T_LPAREN ConstDeclLoop T_RPAREN
          ;

ConstDeclLoop : ConstSpec T_SEMI ConstDeclLoop
/*              | ConstSpec ConstDeclLoop*/
              | 
              ;

ConstSpec       : IdentifierList 
                | IdentifierList Type T_ASSIGNOP ExpressionList
                | IdentifierList T_ASSIGNOP ExpressionList
                ;

IdentifierList : T_ID 
                | T_ID T_COMMA IdentifierList
                ;

ExpressionList  : Expression 
                | Expression T_COMMA ExpressionList
                ;

TypeDecl        : T_TYPE TypeSpec
                | T_TYPE T_LPAREN TypeDeclLoop T_RPAREN
                ;

TypeDeclLoop    : TypeSpec T_SEMI TypeDeclLoop
/*                | TypeDecl TypeDeclLoop*/
                |
                ;

TypeSpec        : AliasDecl 
                | TypeDef
                ;

AliasDecl       : T_ID T_ASSIGNOP Type
                ;

TypeDef : T_ID Type 
        ;

VarDecl : T_VAR VarSpec
        | T_VAR T_LPAREN VarDeclLoop T_RPAREN
        ;

VarDeclLoop     : VarSpec T_SEMI VarDeclLoop
/*                | VarSpec VarDeclLoop*/
                |
                ;

VarSpec : IdentifierList Type T_ASSIGNOP ExpressionList
        | IdentifierList Type
        | IdentifierList T_ASSIGNOP ExpressionList
        ;

ShortVarDecl    : IdentifierList T_ASSIGN ExpressionList
                ;

FunctionDecl    : T_FUNC FunctionName Signature FunctionBody
                | T_FUNC FunctionName Signature
                ;

FunctionName    : T_ID 
                ;

FunctionBody    : Block
                ;

MethodDecl      : T_FUNC Receiver MethodName Signature FunctionBody
                | T_FUNC Receiver MethodName Signature
                ;

Receiver        : Parameters
                ;

/*заменено operandName на TypeName и в LiteralType закоментировали TypeName*/
Operand         : Literal
                | T_ID
                | T_LPAREN Expression T_RPAREN
                ;

Literal : BasicLit
        | CompositeLit /*-2*/
        | FunctionLit
        ;

BasicLit        : T_ICONST
                | T_RCONST
                | T_IMCONST
                | T_SCONST
                | T_CCONST
                ;

OperandName     : T_ID/*
                | QualifiedIdent -6*/
                ;

QualifiedIdent  : PackageName T_DOT T_ID
                ;

CompositeLit    : LiteralType LiteralValue /*{printf("Accepted");}*/
                ;

LiteralType     : StruckType 
                | ArrayType 
                | T_LBRACK T_DOTDOTDOT T_RBRACK ElementType
                | SliceType 
                | MapType/*
                | TypeName */
                ;

LiteralValue    : T_LCURLYBR ElementList T_COMMA T_RCURLYBR
                | T_LCURLYBR ElementList T_RCURLYBR 
                | T_LCURLYBR T_RCURLYBR
                ;

ElementList     : KeyedElement ElementListLoop
                ;

ElementListLoop : T_COMMA KeyedElement ElementListLoop
                | 
                ;

KeyedElement    : Key T_COLON Element 
                | Element
                ;

Key     : /*FieldName
        |*/ Expression
        | LiteralValue
        ;

/*FieldName       : T_ID
                ;*/

Element         : Expression
                | LiteralValue
                ;

FunctionLit     : T_FUNC Signature FunctionBody
                ;

PrimaryExpr     : Operand 
                | Convertion /*-0 Юхe*//*Dead because of ID, but with number OK*/
                | MethodExpr/*-1*//*Alive*/
                | PrimaryExpr Selector /*Alive*/
                | PrimaryExpr Index /*Dead*/
                | PrimaryExpr Slice /*Dead*/
                | PrimaryExpr TypeAssertion /*Dead*/
                | PrimaryExpr Arguments /*-1*/ /*Dead*/
                ;

Selector        : T_DOT T_ID
                ;
Index   : T_LBRACK Expression T_RBRACK
        ;

Slice   : T_LBRACK Expression T_COLON Expression T_RBRACK
        | T_LBRACK T_COLON Expression T_RBRACK
        | T_LBRACK Expression T_COLON T_RBRACK
        | T_LBRACK T_COLON T_RBRACK
        | T_LBRACK Expression T_COLON Expression T_COLON Expression T_RBRACK
        | T_LBRACK T_COLON Expression T_COLON Expression T_RBRACK
        ;

TypeAssertion   : T_DOT T_LPAREN Type T_RPAREN
                ;

/*Ошибка*/
Arguments       : T_LPAREN ExpressionList T_DOTDOTDOT T_COMMA T_RPAREN
                | T_LPAREN TypeSpecial T_COMMA ExpressionList T_DOTDOTDOT T_COMMA T_RPAREN
                | T_LPAREN TypeSpecial T_DOTDOTDOT T_COMMA T_RPAREN
                | T_LPAREN ExpressionList T_COMMA T_RPAREN
                | T_LPAREN TypeSpecial T_COMMA ExpressionList T_COMMA T_RPAREN
                | T_LPAREN TypeSpecial T_COMMA T_RPAREN
                | T_LPAREN ExpressionList T_DOTDOTDOT T_RPAREN
                | T_LPAREN TypeSpecial T_COMMA ExpressionList T_DOTDOTDOT T_RPAREN
                | T_LPAREN TypeSpecial T_DOTDOTDOT T_RPAREN
                | T_LPAREN ExpressionList T_RPAREN
                | T_LPAREN TypeSpecial T_COMMA ExpressionList T_RPAREN
                | T_LPAREN TypeSpecial T_RPAREN
                | T_LPAREN T_RPAREN
                ;

TypeSpecial     : TypeLit
                | T_LPAREN TypeLit T_RPAREN
                ;

MethodExpr      : ReceiverType T_DOT MethodName
                ;

ReceiverType    : TypeForMethodExpr
                ;

/*Добавленно вместо Type*/
TypeForMethodExpr       : /*QualifiedIdent
                        | */TypeLit
                        | T_LPAREN TypeLit T_RPAREN
                        ;

Expression      : UnaryExpr 
                | Expression binary_op Expression
                ;

UnaryExpr       : PrimaryExpr  
                | unary_op UnaryExpr
                ;

binary_op       : T_OROP
                | T_ANDOP
                | rel_op
                | add_op
                | mul_op
                ;

rel_op  : T_LESS
        | T_GREAT
        | T_LESSOREQU
        | T_GREATOREQU
        | T_NOTEQU
        | T_EQU
        ;

add_op  : T_ADDOP
        | T_SUBTROP
        | T_BITOR
        | T_XOR
        ;

mul_op  : T_MULTOP
        | T_DIVOP
        | T_MOD
        | T_LSHIFT
        | T_RSHIFT
        | T_BITANDOP
        | T_BITCLEAR
        ;

unary_op        : T_ADDOP
                | T_SUBTROP
                | T_NOTOP
                | T_XOR
                | T_MULTOP
                | T_BITANDOP
                | T_SENDOP
                ;

Convertion      : TypeLit T_LPAREN Expression T_COMMA T_RPAREN
                | TypeLit T_LPAREN Expression T_RPAREN
                ;

Statment        : Declaration 
                | LabeledStmt /*-3 Йухууу*/
                | SimpleStmt  /*-3 */ /*Траблы в ShortVarDecl -> IdentifierList*/  
                | GoStmt
                | ReturnStmt
                | BreakStmt
                | ContinueStmt
                | GotoStmt
                | FallthoughStmt
                | Block 
                | IfStmt
                | SwitchStmt /*-4*/
                | SelectStmt
                | ForStmt
                | DeferStmt
                ;

SimpleStmt      : EmptyStmt
                | ExpressionStmt 
                | SendStmt
                | IncDecStmt
                | Assignment
                | ShortVarDecl
                ;

EmptyStmt       :
                ;
/*Проблема в Id T_colon или в T_ID Statment*/
LabeledStmt     : Label T_COLON Statment
                ;

Label   : T_ID
        ;

ExpressionStmt  : Expression
                ;

SendStmt        : Channel T_SENDOP Expression
                ;

Channel         : Expression
                ;

IncDecStmt      : Expression T_DOUBLEPLUSOP
                | Expression T_DOUBLEMINUSOP
                ;

Assignment      : ExpressionList assign_op ExpressionList
                ;

assign_op       : add_op T_ASSIGNOP
                | mul_op T_ASSIGNOP
                | T_ASSIGNOP
                ;

IfStmt  : T_IF SimpleStmt T_SEMI Expression Block T_ELSE IfStmt 
        | T_IF SimpleStmt T_SEMI Expression Block T_ELSE Block
        | T_IF SimpleStmt T_SEMI Expression Block       
/*        | T_IF SimpleStmt Expression Block T_ELSE IfStmt 
        | T_IF SimpleStmt Expression Block T_ELSE Block 
        | T_IF SimpleStmt Expression Block*/
        | T_IF Expression Block T_ELSE IfStmt 
        | T_IF Expression Block T_ELSE Block
        | T_IF Expression Block 
        ;

SwitchStmt      : ExprSwitchStmt /*0*/
                | TypeSwitchStmt /*-4*/
                ;

ExprSwitchStmt  : T_SWITCH SimpleStmt T_SEMI T_LPAREN Expression T_RPAREN T_LCURLYBR ExprCaseClauseLoop T_RCURLYBR
                | T_SWITCH SimpleStmt T_SEMI T_LCURLYBR ExprCaseClauseLoop T_RCURLYBR
/*                | T_SWITCH SimpleStmt Expression T_LCURLYBR ExprCaseClauseLoop T_RCURLYBR
                | T_SWITCH SimpleStmt T_LCURLYBR ExprCaseClauseLoop T_RCURLYBR*/
                | T_SWITCH T_LPAREN Expression T_RPAREN T_LCURLYBR ExprCaseClauseLoop T_RCURLYBR
                | T_SWITCH T_LCURLYBR ExprCaseClauseLoop T_RCURLYBR
                ;

ExprCaseClauseLoop      : ExprCaseClause ExprCaseClauseLoop
                        |
                        ;

ExprCaseClause  : ExprSwitchCase T_COLON StatmentList
                ;

ExprSwitchCase  : T_CASE ExpressionList
                | T_CASE T_DEFAULT
                ;

TypeSwitchStmt  : T_SWITCH SimpleStmt T_SEMI TypeSwitchGuard T_LCURLYBR TypeCaseClauseLoop T_RCURLYBR
/*                | T_SWITCH SimpleStmt TypeSwitchGuard T_LCURLYBR TypeCaseClauseLoop T_RCURLYBR*/
                | T_SWITCH TypeSwitchGuard T_LCURLYBR TypeCaseClauseLoop T_RCURLYBR /*-2 TypeSwitchGuard*/
                ;

TypeCaseClauseLoop      : TypeCaseClause TypeCaseClauseLoop
                        |
                        ;

TypeSwitchGuard         : T_ID T_ASSIGN PrimaryExpr T_DOT T_LPAREN T_TYPE T_RPAREN /*-4*/
                        | PrimaryExpr T_DOT T_LPAREN T_TYPE T_RPAREN /*-2*/
                        ;

TypeCaseClause  : TypeSwitchCase T_COLON StatmentList
                ;

TypeSwitchCase  : T_CASE TypeList
                | T_CASE T_DEFAULT
                ;

TypeList        : Type T_COMMA TypeList
                | Type
                ;

ForStmt         : T_FOR Condition Block
                | T_FOR ForClause Block
                | T_FOR RangeClause Block
                | T_FOR Block
                ;

Condition       : Expression
                ;

ForClause       : InitStmt T_SEMI Condition T_SEMI PostStmt 
                /*| InitStmt T_SEMI Condition T_SEMI*/
                | InitStmt T_SEMI T_SEMI PostStmt
                /*| InitStmt T_SEMI T_SEMI
                | T_SEMI Condition T_SEMI PostStmt
                | T_SEMI Condition T_SEMI
                | T_SEMI T_SEMI PostStmt
                | T_SEMI T_SEMI*/
                ;

InitStmt        : SimpleStmt
                ;

PostStmt        : SimpleStmt
                ;

RangeClause     : ExpressionList T_ASSIGNOP T_RANGE Expression
                | IdentifierList T_ASSIGN T_RANGE Expression
                | T_RANGE Expression
                ;

GoStmt  : T_GO Expression
        ;

SelectStmt      : T_SELECT T_LCURLYBR CommClauseLoop T_RCURLYBR
                ;

CommClauseLoop  : CommClause CommClauseLoop
                |
                ;

CommClause      : CommCase T_COLON StatmentList
                ;

CommCase        : T_CASE SendStmt
                | T_CASE RecvStmt
                | T_CASE T_DEFAULT
                ; 

RecvStmt        : ExpressionList T_ASSIGNOP RecvExpr
                | IdentifierList T_ASSIGN RecvExpr
                | RecvExpr
                ;

RecvExpr        : Expression
                ;

ReturnStmt      : T_RETURN ExpressionList
                | T_RETURN
                ;

BreakStmt       : T_BREAK Label
                | T_BREAK
                ;

ContinueStmt    : T_CONTINUE Label
                | T_CONTINUE
                ;

GotoStmt        : T_GOTO Label
                | T_GOTO
                ;

FallthoughStmt  : T_FALLTHROUGH
                ;

DeferStmt       : T_DEFER Expression
                ;

SourceFile      : PackageClause T_SEMI ImportDeclLoop TopLevelDeclLoop T_EOF 
/*                | PackageClause ImportDeclLoop TopLevelDeclLoop*/
                ;

ImportDeclLoop  : ImportDecl T_SEMI ImportDeclLoop
/*                | ImportDecl ImportDeclLoop*/
                |
                ;

TopLevelDeclLoop        : TopLevelDecl T_SEMI TopLevelDeclLoop
/*                        | TopLevelDecl TopLevelDeclLoop*/
                        | 
                        ;

PackageClause   : T_PACKAGE PackageName 
                ;

PackageName     : T_ID 
                ;

ImportDecl      : T_IMPORT ImportSpec
                | T_IMPORT T_LPAREN ImportSpecLoop T_RPAREN
                ;
ImportSpecLoop  : ImportSpec T_SEMI ImportSpecLoop
/*                | ImportSpec ImportSpecLoop*/
                |
                ;

ImportSpec      : T_DOT ImportPath
                | PackageName ImportPath
                | ImportPath
                ;

ImportPath      : T_SCONST
                ;

%%

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