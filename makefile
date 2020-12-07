GCC = gcc
CFLAGS = -g -Wall -Wshadow


project3: operations.o test.o main.o
	$(GCC) $(CFLAGS) operations.o test.o main.o -o project3


test.o: test.c test.h
	$(GCC) $(CFLAGS) -c test.c test.h
 
operations.o: operations.c operations.h
	$(GCC) $(CFLAGS) -c operations.c operations.h
 
main.o: main.c main.h
	$(GCC) $(CFLAGS) -c main.c main.h
 
