%{
#include "y.tab.h"
void yyerror (char *s);
int yylex();
%}

/*Kefalaioi kai pezoi xarakthres toy agglikoy alfavhtoy*/
L   [A-Za-z]
/*ola ta ari8mhtika pshfia*/
D   [0-9]
/*ari8mhtika ektos toy mhdenos*/
Dp  [1-9]
/*Grammata poy xrhsimopioyntai sta dekaeksadika*/
Hex [A-Fa-f]
/*kena, tab, newlines*/
W   [ \t] 
/*eidikoi xarakthres*/
SPEC [NnFfTtVvBbRr]
/*all ASCII*/
ASCII [ -~]

%%
"Println"				    {return print;}
"exit"				    {return exit_command;}

">>"					{return LeftShift;}
"<<"					{return RightShift;}
"=="					{return IsEqual;}
":="					{return ColonEquality;}

"var"					{return Initialization;}
"int"					{return Type;}
"float" 				{return Type;}
"string"				{return Type;}
"char"					{return Type;}

[a-zA-Z]			    {yylval.id = yytext[0]; return identifier;}
[1-9][0-9]*			    {yylval.num = atoi(yytext); return number;}
[ \t\n]                 ;
[-+=<>;]           	    {return yytext[0];}
.                       {ECHO; yyerror ("unexpected character");}

%%
int yywrap (void) {return 1;}