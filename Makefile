# My first makefile

all: Trabalho

Trabalho: main.o Estruturas.o
	gcc -o Trabalho main.o Estruturas.o

main.o: main.c Estruturas.h
	gcc -o main.o main.c -c -W -Wall -ansi -pedantic

Estruturas.o: Estruturas.c Estruturas.h
	gcc -o Estruturas.o Estruturas.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ Trabalho
