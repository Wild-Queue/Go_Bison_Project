%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
void shiftRightSymbolVal(char symbol, int val);
void shiftLeftSymbolVal(char symbol, int val);
_Bool IsEqual1(int first, int second);
FILE *yyin;
%}

%union {int num; char id;}         /* Yacc definitions */
%start line
%token print
%token Initialization
%token exit_command

%token Type

%token LeftShift
%token RightShift
%token ColonEquality
%token IsEqual;

%token <num> number
%token <id> identifier
%type <num> line exp term 
%type <id> assignment

%%

/* descriptions of expected inputs     corresponding actions (in C) */

line    : assignment			{;}
		| exit_command			{exit(EXIT_SUCCESS);}
		| print exp 			{printf("Printing %d\n", $2);}
		| line assignment 		{;}
		| line print exp 		{printf("Printing %d\n", $3);}
		| line exit_command 	{exit(EXIT_SUCCESS);}
        ;

assignment	: Initialization identifier Type '=' exp  { updateSymbolVal($2,$5); }
			| identifier '=' exp  { updateSymbolVal($1,$3); }
			| identifier ColonEquality exp  { updateSymbolVal($1,$3); }
			| identifier '>' exp { shiftRightSymbolVal($1, $3); }
			| identifier '<' exp { shiftLeftSymbolVal($1, $3); }
			| identifier LeftShift exp {shiftLeftSymbolVal($1, $3);}
			| identifier RightShift exp {shiftRightSymbolVal($1, $3);}
			;

exp    	: term                  {$$ = $1;}
       	| exp '+' term          {$$ = $1 + $3;}
       	| exp '-' term          {$$ = $1 - $3;}
       	| exp IsEqual exp 		{$$ = IsEqual1($1,$3);}
       	;
       	
term   	: number               {$$ = $1;}
		| identifier			{$$ = symbolVal($1);} 
        ;

%%                     /* C code */

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
	for(i=0; i<52; i++) {
		symbols[i] = 0;
	}
	yyin = fopen("input.txt", "r");
	yyparse();
	fclose(yyin);
	return 0;
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 