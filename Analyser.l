%{
#include "y.tab.h"
void yyerror (char *s);
int yylex();
%}
%%
"print"				    {return print;}
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
[-]?[1-9][0-9]*			{yylval.IntNum = atoi(yytext); return Inumber;}
[-]?[1-9][0-9]*.[0-9]*	{yylval.DoubNum = atof(yytext);return Dnumber;}
[ \t\n]                 ;
[-+=<>;]           	    {return yytext[0];}
.                       {ECHO; yyerror ("unexpected character");}

%%
int yywrap (void) {return 1;}