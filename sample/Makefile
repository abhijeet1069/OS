## make is actually an encapsulation of shell commands.
## first try it on shell then enter in file
CC = cc
CXX = CC
CCFLAGS = -g -std=c99 -Wall -Werror

##Flow : Clean bin directory. Then compile and link object files in bin directory. Finally run files from bin
all : run

##compile all c files into object files without link
%.o : src/%.c        
	$(CC) -c $(CCFLAGS) $<

##compile all object files and link to main file
main : main.o length.o square.o
	$(CC) -o main main.o length.o square.o

##move all binary files to bin directory
move : clean main
	mv *.o main ./bin

##execute main file
run : move
	./bin/main

##clean bin folder
clean : 
	rm -f  bin/*.o bin/main