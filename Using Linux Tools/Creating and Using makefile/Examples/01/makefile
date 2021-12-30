program: program.o stats.o
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.o stats.o -o program
	
program.o: program.c stats.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c program.c -o program.o
	
stats.o: stats.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c stats.c -o stats.o

launch: program
	./program