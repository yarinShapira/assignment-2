all: compile run 


compile:
		gcc -Wall -g -o main.o myBank.c main.c

mybank.o:
		gcc -Wall -g -c myBank.c
run:
	./main.o


# compilemain:
# 		gcc -Wall -g -o main.o main.c

# compileliba: mybank.o
# 			ar -rcs libmyBank.a myBank.o

# compilelibs:myBank.o
# 			gcc -Wall -g -o libmyBank.so -shared myBank.o

# runa:compileliba compilemain	
# 	gcc -Wall -g -o maina main.o libmyBank.a

# runs:compilelibs compilemain
# 	gcc -Wall -g -o mains main.c ./libmyBank.so


# clean:
# 	rm -f *.o *.a *.so mains maina

clean:
	rm -f *.o .a



	