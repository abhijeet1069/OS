CC = cc
CXX = CC
CCFLAGS = -g -std=c99 -Wall -Werror

all : main test

%.o : %.c
	$(CC) -c $(CCFLAGS) $<

main : main.o demo.o
	$(CC) -o main main.o demo.o

test : main
	./main

clean : 
	rm -f core *.o main