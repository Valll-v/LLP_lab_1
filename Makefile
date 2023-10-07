OUTDIR = ./build
SRCDIR = ./src
INCDIR = ./include


work:
	gcc src/db_communication.c -o db_communication.o -c
	gcc -I ./include main.c -o main.o -c
	gcc -o main main.o db_communication.o
	./main
	rm -rf main *.o