all:
	yacc -d Analyser.y
	lex Analyser.l
	gcc lex.yy.c y.tab.c -o Analyser
	./Analyser < input.txt
