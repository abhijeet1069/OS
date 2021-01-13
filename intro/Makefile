CC = gcc
CXX = CC
CCFLAGS = -g -std=c99 -Wall -Werror

all : main test

main : fork.c
	$(CC) $(CCFLAGS) -o main fork.c

test : main
	./main

clean : 
	rm -f core *.o main
