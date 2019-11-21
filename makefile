all: compile run 

compile:
		gcc -Wall -g -o main.o myBank.c main.c
run:
	./main.o

clean: 
