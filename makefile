all: myBank.o main.o  output


output: main.o myBank.o
	gcc -Wall -g -o output main.o myBank.o

main.o: main.c 
	gcc -Wall -g -c main.c

myBank.o: myBank.c myBank.h
	gcc -Wall -g -c myBank.c

.PHONY: clean all 

clean:
	rm -f *.o .a



	