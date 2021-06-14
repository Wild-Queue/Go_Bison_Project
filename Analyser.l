%{
//#include "syntax.tab.h" //include bison's header file
//#include "syntax.tab.c" //include bison's .c file...not sure
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//used in error function
FILE *fd; //a global copy of the input file -- accessible from error funtion
int line_no = 1;
int errors = 0;

char strbuffer[200];//a string buffer to properly return strings
char *ptr; //used in strtol function
int doubletoint; //convert double to int


//#include "hashtbl.h" //include the hash table
//extern HASHTBL *symbol; //Symbol Table declaration (global)

/*antistoixhsh lektikwn monadwn (telikwn katastasewn) me ari8mous - kwdikoys eksodoy*/


void ERROR (const char msg [], char *text); //synarthsh epistrofis la8oys
double decRealHandler(char *str); //convert string to real
double hexRealHandler(char *str); //conver hex real string to real
%}

Leter           ([ -~]|"_")

ASCII [ -~]

Binary_Digit    [0-1]

Octal_Digit     [0-7]

Decimal_Digit   [0-9]

Hex_Digit       [0-9A-Fa-f]

/* Integer literals*/

Binary_Digits    ({Binary_Digit}(_?{Binary_Digit})*)

Octal_Digits     ({Octal_Digit}(_?{Octal_Digit})*)

Decimal_Digits   ({Decimal_Digit}(_?{Decimal_Digit})*)

Hex_Digits       ({Hex_Digit}((_)?{Hex_Digit})*)

Binary_Lit       (0[bB](_)?{Binary_Digits})

Octal_Lit      ((0)(o|O)?(_)?{Octal_Digits})

Decimal_Lit      ((0)|(([1-9])((_)?{Decimal_Digits})?))

Hex_Lit      ((0)(x|X)(_)?{Hex_Digits})

Int_Lit       ({Binary_Lit}|{Octal_Lit}|{Decimal_Lit}|{Hex_Lit})

/* floating piont literals*/

Decimal_Exponent    (e|E)[-+]?{Decimal_Digits}

Hex_Mantisa     ((_)?{Hex_Digits}("."){Hex_Digits}?)|((_)?{Hex_Digits})|(("."){Hex_Digits}) 

Hex_Exponent    (p|P)[-+]?{Decimal_Digits}

Hex_Float_Lit   (0)(x|X){Hex_Mantisa}{Hex_Exponent}

Decimal_Float_Lit   ({Decimal_Digits}("."){Decimal_Digits}?{Decimal_Exponent}?)|({Decimal_Digits}{Decimal_Exponent})|(("."){Decimal_Digits}{Decimal_Exponent}?)

Float_Lit       ({Decimal_Float_Lit}|{Hex_Float_Lit})

/* Imaginary literals*/

Imaginary_Lit   ({Decimal_Digits}|{Int_Lit}|{Float_Lit})(i)

/*Rune literals*/

Escaped_Char    (\\)(a|b|f|n|r|t|v|(\\)|(')|(')|(\42))

Big_u_Value     (\\)(U){Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}

Littel_u_Value (\\)(u){Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}

Hex_Byte_Value  (\\)(x){Hex_Digit}{Hex_Digit}

Octal_Byte_Value (\\){Octal_Digit}{Octal_Digit}{Octal_Digit}

Byte_Value       ({Octal_Byte_Value}|{Hex_Byte_Value})

Unicode_Value   ({ASCII}|{Littel_u_Value}|{Big_u_Value}|{Escaped_Char})

Rune_Lit    (')({Unicode_Value}|{Byte_Value})(')

/*String Literal*/

Interpreted_String_Lit  ("|`)({Unicode_Value}|{Byte_Value})*(`|")

Raw_String_Lit          ("|`)(({ASCII}|(\n))*)(`|")

String_Lit              ({Raw_String_Lit}|{Interpreted_String_Lit})

L   [A-Za-z]
D   [0-9]
Dp  [1-9]
Bi  [0-1]
OCTP [1-7]
OCT [0-7]
Hex [A-Fa-f]
W   [ \t] 
SPEC [NnFfTtVvBbRr]


%%

"break" 	    {printf("  T_BREAK");}
"case"			{printf("  T_CASE");}
"chan"			{printf("  T_CHAN");}
"const"			{printf("  T_CONST");}
"continue"		{printf("  T_CONTINUE");}
"defaulte"		{printf("  T_DEFAULT");}
"defer"			{printf("  T_DEFER");}
"else"			{printf("  T_ELSE");}
"fallthrought"	{printf("  T_FALLTHROUGH");}
"for"			{printf("  T_FOR");}
"func"			{printf("  T_FUNC");}
"go"			{printf("  T_GO");}
"goto"			{printf("  T_GOTO");}
"if"			{printf("  T_IF");}
"import"		{printf("  T_IMPORT");}
"interface"		{printf("  T_INTERFACE");}
"map"			{printf("  T_MAP");}
"packege"		{printf("  T_PACKAGE");}
"range"			{printf("  T_RANGE");}
"return"		{printf("  T_RETURN");}
"select"		{printf("  T_SELECT");}
"struckt"		{printf("  T_STRUCKT");}
"switch"		{printf("  T_SWITCH");}
"type"			{printf("  T_TYPE");}
"var"			{printf("  T_VAR");}

"int"			{printf("  T_INT");}
"int8"			{printf("  T_INT8");}
"int16"			{printf("  T_INT16");}
"int32"			{printf("  T_INT32");}
"int64"			{printf("  T_INT64");}
"uint"			{printf("  T_UINT");}
"uint8"			{printf("  T_UINT8");}
"uint16"		{printf("  T_UINT16");}
"uint32"		{printf("  T_UINT32");}
"uint64"		{printf("  T_UINT64");}
"uintptr"		{printf("  T_UINTPTR");}
"float32"		{printf("  T_FLOAT32");}
"float64"		{printf("  T_FLOAT64");}
"complex64"		{printf("  T_COMPLEX64");}
"complex128"	{printf("  T_COMPLEX128");}
"bool"			{printf("  T_BOOL");}
"bite"			{printf("  T_BITE");}
"rune"			{printf("  T_RUNE");}
"string"		{printf("  T_STRING");}
"error"			{printf("  T_ERROR");}

"make"			{printf("  T_MAKE");}
"len"			{printf("  T_LEN");}
"cap"			{printf("  T_CAP");}
"new"			{printf("  T_NEW");}
"append"		{printf("  T_APPEND");}
"copy"			{printf("  T_COPY");}
"close"			{printf("  T_CLOSE");}
"delete"		{printf("  T_DELETE");}
"complex"		{printf("  T_COMPLEX");}
"real"			{printf("  T_REAL");}
"imag"			{printf("  T_IMAG");}
"panic"			{printf("  T_PANIC");}
"recover"		{printf("  T_RECOVER");}

"<"		{printf("  T_LESS");}
">"		{printf("  T_GREAT");}
"<="	{printf("  T_LESSOREQU");}
">="	{printf("  T_GREATOREQU");}
"!="	{printf("  T_NOTEQU");}
"=="	{printf("  T_EQU");}

"&&"	{printf("  T_ANDOP");}
"||"	{printf("  T_OROP");}
"!"		{printf("  T_NOTOP");}

"+"		{printf("   T_ADDOP ");}
"*"		{printf("   T_MULTOP ");}
"-"		{printf("   T_SUBTROP ");}
"/"		{printf("   T_DIVOP ");}
"%"		{printf("   T_MOD ");}
"+="	{printf("   T_ADDASSOP ");}
"*="	{printf("   T_MULTASSOP  ");}
"-="	{printf("   T_SUBTRASSOP  ");}
"/="	{printf("   T_DIVASSOP ");}

"++"	{printf("   T_DOUBLEPLUSOP ");}
"--"	{printf("   T_DOUBLEMINUSOP ");}

"\n"	{line_no++; printf("   T_NL\n"); printf("%d)", line_no); }
"\t"	{printf("   T_TAB ");}

"&"		{printf("   T_REFERENCE ");}

"{"		{printf("   T_LCURLYBR ");}
"}"		{printf("   T_RCURLYBR ");}
"("		{printf("   T_LPAREN ");}
")"		{printf("   T_RPAREN ");}
"["		{printf("   T_LBRACK ");}
"]"		{printf("   T_RBRACK ");}

";"		{printf("   T_SEMI ");}
"."		{printf("   T_DOT ");}
","		{printf("   T_COMMA ");}
":"		{printf("   T_COLON ");}
":="	{printf("   T_ASSIGN ");}
"="		{printf("   T_ASSIGNOP ");}
"..."	{printf("   T_DOTDOTDOT ");}
"//"	{printf("   T_SIMPLCOMMENT ");}
"/*"	{printf("   T_LBLOCKCOMMET ");}
"*/"	{printf("   T_RBLOCKCOMMET ");}

"|"     {printf("   T_BITOR ");}
"^"     {printf("   T_XOR ");}
">>"    {printf("   T_LSHIFT ");}
"<<"    {printf("   T_RSHIFT ");}
"&^"    {printf("   T_BITCLEAR ");}
"%="    {printf("   T_MODEQUOP ");}
"&="    {printf("   T_ANDEQUOP ");}
"|="    {printf("   T_OREQUOP ");}
"^="    {printf("   T_XOREQUOP ");}
">>="   {printf("   T_LSHIFTEQU ");}
"<<="   {printf("   T_RSHIFTEQU ");}
"&^="   {printf("   T_BITCLEAREQU ");}
"<-"    {printf("   T_SENDOP ");}

 
(_)?{L}({L}|{D}|_)*({L}|{D})|{L}* { /*yylval.string = strdup(yytext);*/ printf("   T_ID");} //ID _hashtbl_insert(symbol,yytext,NULL,0);

{Int_Lit} {printf("   T_ICONST");}
{Float_Lit} {printf("   T_RCONST");}
{Imaginary_Lit} {printf("   T_IMCONST");}
{Rune_Lit} {printf("   T_CCONST");}
{String_Lit} {printf("   T_SCONST");}

{W}			{}
.			{printf("   Printing unexpected character");}

%%
void ERROR (const char msg [], char *text) {
    /* code to print the erroneous line
    reopen input file and print the line that corresponds to line_no -> number of the line that the error occured*/
    int end, loop; 
    char str[512];

    if (fd == NULL) {printf("Failed to open file\n");}

    for(end = loop = 0;loop<line_no;++loop){
        if(0==fgets(str, sizeof(str), fd)){//include '\n'
            end = 1;//can't input (EOF)
            break;
        }
    }
    fprintf(stderr, "\n LEXIXAL ERROR at line %d. Error type: %s. Error line: %sTotal errors: %d \n",line_no, msg,str,errors);
    fclose(fd);
    if (errors>1) {
    printf("More than one **Lexical** errors!--early termination\n");
    exit(1);}
}