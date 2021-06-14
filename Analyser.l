%{
#include "syntax.tab.h" //include bison's header file
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

void ERROR (const char msg [], char *text); //synarthsh epistrofis la8oys
double decRealHandler(char *str); //convert string to real
double hexRealHandler(char *str); //conver hex real string to real
%}

Leter           ([ -~]|"_")

ASCII [ -~]

Decimal_Digit   [0-9]

Binary_Digit    [0-1]

Octal_Digit     [0-7]

Hex_Digit       [0-9A-Fa-f]

// Integer literals

Decimal_Digits   {Decimal_Digit}( (_)? {Decimal_Digit})*

Binary_Digits    {Binary_Digit}( (_)? {Binary_Digit})*

Octal_Digits     {Octal_Digit}( (_)? {Octal_Digit})*

Hex_Digits       {Hex_Digit}( (_)? {Hex_Digit})*

Decimal_Lit      (0)|( ([1-9]) ( (_)? {Decimal_Digits})?)

Binary_Lit      (0)(b|B)(_)? {Binary_Digits}

Octal_Lit      (0)(o|O)?(_)? {Octal_Digits}

Hex_Lit      (0)(x|X)(_)? {Hex_Digits}

Int_Lit        ({Binary_Lit}|{Octal_Lit}|{Decimal_Lit}|{Hex_Lit})

// floating piont literals

Decimal_Exponent    (e)[-+]? {Decimal_Digits}

Hex_Mantisa     ((_)?{Hex_Digits}(.){Hex_Digits}?)|((_)?{Hex_Digits})|((.){Hex_Digits}) 

Hex_Exponent    (p|P)[-+]? {Decimal_Digits}

Hex_Float_Lit   (0)(x|X) {Hex_Mantisa} {Hex_Exponent}

Decimal_Float_Lit   ({Decimal_Digits}(.){Decimal_Digits}?{Decimal_Exponent}?)|({Decimal_Digits}{Decimal_Exponent})|((.){Decimal_Digits}{Decimal_Exponent}?)

Float_Lit       {Decimal_Float_Lit} | {Hex_Float_Lit}

// Imaginary literals

Imaginary_Lit   ({Decimal_Digits} | {Int_Lit} | {Float_Lit})(i)

//Rune literals

Escaped_Char    (\\) (a|b|f|n|r|t|v|(\\)|(')|("))// ' 

Big_u_Value     (\\)(U) {Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}

Littel_u_Value (\\)(u) {Hex_Digit}{Hex_Digit}{Hex_Digit}{Hex_Digit}

Hex_Byte_Value  (\\)(x) {Hex_Digit}{Hex_Digit}

Octal_Byte_Value (\\) {Octal_Digit}{Octal_Digit}{Octal_Digit}

Byte_Value       ({Octal_Byte_Value}|{Hex_Byte_Value})

Unicode_Value   ({ASCII}|{Littel_u_Value}|{Big_u_Value}|{Escaped_Char})

Rune_Lit    (')({Unicode_Value}|{Byte_Value})(')

//String Literal

Interpreted_String_Lit  (") ({Unicode_Value}|{Byte_Value})* (")

Raw_String_Lit          (")({ASCII}|{\n})*(")

String_Lit              ({Raw_String_Lit}|{Interpreted_String_Lit})

L   [A-Za-z]
Dp  [1-9]
Bi  [0-1]
OCTP [1-7]
OCT [0-7]
Hex [A-Fa-f]
W   [ \t] 
SPEC [NnFfTtVvBbRr]

%%

"break" 	    {yylval.string = strdup(yytext); return( T_BREAK );}
"case"			{yylval.string = strdup(yytext); return( T_CASE );}
"chan"			{yylval.string = strdup(yytext); return( T_CHAN );}
"const"			{yylval.string = strdup(yytext); return( T_CONST );}
"continue"		{yylval.string = strdup(yytext); return( T_CONTINUE );}
"defaulte"		{yylval.string = strdup(yytext); return( T_DEFAULT );}
"defer"			{yylval.string = strdup(yytext); return( T_DEFER );}
"else"			{yylval.string = strdup(yytext); return( T_ELSE );}
"fallthrought"	{yylval.string = strdup(yytext); return( T_FALLTHROUGH );}
"for"			{yylval.string = strdup(yytext); return( T_FOR );}
"func"			{yylval.string = strdup(yytext); return( T_FUNC );}
"go"			{yylval.string = strdup(yytext); return( T_GO );}
"goto"			{yylval.string = strdup(yytext); return( T_GOTO );}
"if"			{yylval.string = strdup(yytext); return( T_IF );}
"import"		{yylval.string = strdup(yytext); return( T_IMPORT );}
"interface"		{yylval.string = strdup(yytext); return( T_INTERFACE );}
"map"			{yylval.string = strdup(yytext); return( T_MAP );}
"packege"		{yylval.string = strdup(yytext); return( T_PACKAGE );}
"range"			{yylval.string = strdup(yytext); return( T_RANGE );}
"return"		{yylval.string = strdup(yytext); return( T_RETURN );}
"select"		{yylval.string = strdup(yytext); return( T_SELECT );}
"struckt"		{yylval.string = strdup(yytext); return( T_STRUCKT );}
"switch"		{yylval.string = strdup(yytext); return( T_SWITCH );}
"type"			{yylval.string = strdup(yytext); return( T_TYPE );}
"var"			{yylval.string = strdup(yytext); return( T_VAR );}

"int"			{yylval.string = strdup(yytext); return( T_INT );}
"int8"			{yylval.string = strdup(yytext); return( T_INT8 );}
"int16"			{yylval.string = strdup(yytext); return( T_INT16 );}
"int32"			{yylval.string = strdup(yytext); return( T_INT32 );}
"int64"			{yylval.string = strdup(yytext); return( T_INT64 );}
"uint"			{yylval.string = strdup(yytext); return( T_UINT );}
"uint8"			{yylval.string = strdup(yytext); return( T_UINT8 );}
"uint16"		{yylval.string = strdup(yytext); return( T_UINT16 );}
"uint32"		{yylval.string = strdup(yytext); return( T_UINT32 );}
"uint64"		{yylval.string = strdup(yytext); return( T_UINT64 );}
"uintptr"		{yylval.string = strdup(yytext); return( T_UINTPTR );}
"float32"		{yylval.string = strdup(yytext); return( T_FLOAT32 );}
"float64"		{yylval.string = strdup(yytext); return( T_FLOAT64 );}
"complex64"		{yylval.string = strdup(yytext); return( T_COMPLEX64 );}
"complex128"	{yylval.string = strdup(yytext); return( T_COMPLEX128 );}
"bool"			{yylval.string = strdup(yytext); return( T_BOOL );}
"bite"			{yylval.string = strdup(yytext); return( T_BITE );}
"rune"			{yylval.string = strdup(yytext); return( T_RUNE );}
"string"		{yylval.string = strdup(yytext); return( T_STRING );}
"error"			{yylval.string = strdup(yytext); return( T_ERROR );}

"make"			{yylval.string = strdup(yytext); return( T_MAKE );}
"len"			{yylval.string = strdup(yytext); return( T_LEN );}
"cap"			{yylval.string = strdup(yytext); return( T_CAP );}
"new"			{yylval.string = strdup(yytext); return( T_NEW );}
"append"		{yylval.string = strdup(yytext); return( T_APPEND );}
"copy"			{yylval.string = strdup(yytext); return( T_COPY );}
"close"			{yylval.string = strdup(yytext); return( T_CLOSE );}
"delete"		{yylval.string = strdup(yytext); return( T_DELETE );}
"complex"		{yylval.string = strdup(yytext); return( T_COMPLEX );}
"real"			{yylval.string = strdup(yytext); return( T_REAL );}
"imag"			{yylval.string = strdup(yytext); return( T_IMAG );}
"panic"			{yylval.string = strdup(yytext); return( T_PANIC );}
"recover"		{yylval.string = strdup(yytext); return( T_RECOVER );}

"<"		{yylval.string = strdup(yytext); return(T_LESS);}
">"		{yylval.string = strdup(yytext); return(T_GREAT);}
"<="	{yylval.string = strdup(yytext); return(T_LESSOREQU);}
">="	{yylval.string = strdup(yytext); return(T_GREATOREQU);}
"!="	{yylval.string = strdup(yytext); return(T_NOTEQU);}
"=="	{yylval.string = strdup(yytext); return(T_EQU);}

"&&"	{yylval.string = strdup(yytext); return(T_ANDOP);}
"||"	{yylval.string = strdup(yytext); return(T_OROP);}
"!"		{yylval.string = strdup(yytext); return(T_NOTOP);}

"+"		{yylval.string = strdup(yytext); return( T_ADDOP );}
"*"		{yylval.string = strdup(yytext); return( T_MULTOP );}
"-"		{yylval.string = strdup(yytext); return( T_SUBTROP );}
"/"		{yylval.string = strdup(yytext); return( T_DIVOP );}
"%"		{yylval.string = strdup(yytext); return( T_MOD );}
"+="	{yylval.string = strdup(yytext); return( T_ADDASSOP );}
"*="	{yylval.string = strdup(yytext); return( T_MULTASSOP  );}
"-="	{yylval.string = strdup(yytext); return( T_SUBTRASSOP  );}
"/="	{yylval.string = strdup(yytext); return( T_DIVASSOP );}

"++"	{yylval.string = strdup(yytext); return( T_DOUBLEPLUSOP );}
"--"	{yylval.string = strdup(yytext); return( T_DOUBLEMINUSOP );}

"\n"	{line_no++; yylval.string = strdup(yytext); return( T_NL);}
"\t"	;

//"*"		{yylval.string = strdup(yytext); return( T_POINTER );}
//"&"		{yylval.string = strdup(yytext); return( T_REFERENCE );}

"{"		{yylval.string = strdup(yytext); return( T_LCURLYBR );}
"}"		{yylval.string = strdup(yytext); return( T_RCURLYBR );}
"("		{yylval.string = strdup(yytext); return( T_LPAREN );}
")"		{yylval.string = strdup(yytext); return( T_RPAREN );}
"["		{yylval.string = strdup(yytext); return( T_LBRACK );}
"]"		{yylval.string = strdup(yytext); return( T_RBRACK );}

";"		{yylval.string = strdup(yytext); return( T_SEMI );}
"."		{yylval.string = strdup(yytext); return( T_DOT );}
","		{yylval.string = strdup(yytext); return( T_COMMA );}
":"		{yylval.string = strdup(yytext); return( T_COLON );}
":="	{yylval.string = strdup(yytext); return( T_ASSIGN );}
"="		{yylval.string = strdup(yytext); return( T_ASSIGNOP );}
"..."	{yylval.string = strdup(yytext); return( T_DOTDOTDOT );}
"//"	{yylval.string = strdup(yytext); return( T_SIMPLCOMMENT );}
"/*"	{yylval.string = strdup(yytext); return( T_LBLOCKCOMMET );}
"*/"	{yylval.string = strdup(yytext); return( T_RBLOCKCOMMET );}

"&"     {yylval.string = strdup(yytext); return( T_BITANDOP );}
"|"     {yylval.string = strdup(yytext); return( T_BITOR );}
"^"     {yylval.string = strdup(yytext); return( T_XOR );}
">>"    {yylval.string = strdup(yytext); return( T_LSHIFT );}
"<<"    {yylval.string = strdup(yytext); return( T_RSHIFT );}
"&^"    {yylval.string = strdup(yytext); return( T_BITCLEAR );}
"%="    {yylval.string = strdup(yytext); return( T_MODEQUOP );}
"&="    {yylval.string = strdup(yytext); return( T_ANDEQUOP );}
"|="    {yylval.string = strdup(yytext); return( T_OREQUOP );}
"^="    {yylval.string = strdup(yytext); return( T_XOREQUOP );}
">>="   {yylval.string = strdup(yytext); return( T_LSHIFTEQU );}
"<<="   {yylval.string = strdup(yytext); return( T_RSHIFTEQU );}
"&^="   {yylval.string = strdup(yytext); return( T_BITCLEAREQU );}
"<-"    {yylval.string = strdup(yytext); return( T_SENDOP );}

 
(_)?{L}({L}|{D}|_)*({L}|{D})|{L}* { /*yylval.string = strdup(yytext);*/ return(T_ID);} //ID _hashtbl_insert(symbol,yytext,NULL,0);

//{Dp}({D})*|0 {/*yylval.integer = atoi(yytext);*/return(T_ICONST);}//INTEGER CONST
//(0)(b|B)({Bi}{Bi}*) {/*yylval.integer = atoi(yytext);*/return(T_ICONST);}//INTEGER CONST
//{Dp}({D})*[Ee][+-]?(({D})*{Dp}) {/*doubletoint = atof(yytext);yylval.integer = doubletoint;*/return(T_ICONST);}
//[0][Xx]({Dp}|{Hex})({Hex}|{D})* {/*yylval.integer = strtol(yytext,&ptr,16);*/return(T_ICONST);}//HEX INTEGER CONST
//[0]({OCTP})({OCT})* {/*yylval.integer = strtol(yytext,&ptr,16);*/return(T_ICONST);}//OCT INTEGER CONST
//({Dp}({D})*)?"."([0]|({D})*{Dp})([Ee]([+-]?{D}*){Dp})? {/*yylval.real = decRealHandler(yytext);*/return(T_RCONST);}//REAL CONST EXP OR NOT
//[0][Xx](({Dp}|{Hex})({D}|{Hex})*)?[.]({D}|{Hex})* {/*yylval.real = hexRealHandler(yytext);*/return(T_RCONST);}//HEX REAL CONST
//[']{ASCII}[']|['][\\]{SPEC}['] {/*yylval.character=yytext[1];*/return(T_CCONST);} //CHAR CONST 
//["]({ASCII})*["] {/*yylval.string = yytext.substr(1, yytext.size() - 2);*/ return(T_SCONST);} //STRING CONST 

{Rune_Lit}      {return(T_CCONST)}
{String_Lit}    {return(T_SCONST)}
{Imaginary_Lit} {return(T_IMCONST)}
{Int_Lit}       {return(T_ICONST)}
{Float_Lit}     {return(T_RCONST)}

<<EOF>>		{/*yylval.string = "EOF"; */return ( T_EOF );}
{W}			{}
.			{ECHO; yyerror ("unexpected character");}

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
		exit(1);
	}
}

int yywrap (void) {return 1;}