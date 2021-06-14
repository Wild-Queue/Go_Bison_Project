/* BLOCK A: Statements block*/
%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>
#include "hashtbl.c" //include the hash table
HASHTBL *symbol; //Symbol Table declaration (global)


//#define MAX_LINE_SIZE 256

char filename[64];
extern FILE *yyin;
int scope; //global variable for scope, initialized to 0
error_no = 0; //global variable for error count initialized to 0
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
%token <string> T_BREAK T_CASE T_CHAN T_CONST T_CONTINUE T_DEFAULT T_DEFER T_ELSE T_FALLTHROUGH T_FOR T_FUNC T_GO T_GOTO T_IF T_IMPORT T_INTERFACE T_MAP T_PACKAGE T_RANGE T_RETURN T_SELECT T_STRUCKT T_SWITCH T_TYPE T_VAR T_ID

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

T_BITAND // &
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
Тут мог быть приоритет операций, но это не наша проблема
Спросить у Зуева

//assoc and priority (operators)
%nonassoc T_COLON
%nonassoc T_LBRACK T_RBRACK
%left T_OROP
%nonassoc T_RELOP
%nonassoc T_NOTOP
%left T_ADDOP
%left T_MULDIVANDOP
%right T_EQU
%nonassoc T_LPAREN T_RPAREN

//start symbol of the Grammar = program
//%start program;

*/

%%

line : line 

%%
int  main(int argc,char ** argv){
    int out;
    
    //check if an input file is passed as an argument
  if(argc<2){
        printf("No input file!\n");
    exit(1);
    }
    
  yyin = fopen(argv[1],"r");
    strcpy(filename, argv[1]);

    if (yyin == NULL) {
        printf("File not found!\n");
        exit(1);
    }
    
    //input file ok!
    
    //symbol table initialize/create
    if(!(symbol=hashtbl_create(16, NULL))) {
    fprintf(stderr, "ERROR: hashtbl_create() failed\n");
    exit(EXIT_FAILURE);
    }

        
    out=yyparse();
    printf("Syntax analyzer started.\n");
    

    if(!out) {// yyparse == 0 - parsing completed
    printf("Syntax analyzer finished succesfully.\n");
    fclose(yyin);
    printf("File closed succesfully\n");
    return(0);
    }
    
    else { //yyparse()==1 - could not complete parsing
        printf("Syntax analyzer failed\n");
        hashtbl_destroy(symbol);
        fclose(yyin); // close input file
        printf("File closed succesfully\n");
        return(1);
    }

  
  
}



extern int line_no;

void yyerror(char *s) {
    error_no++;
    fprintf(stderr, "line %d: %s\n", line_no, s);
}
void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 