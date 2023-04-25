#######################
# Makefile for Lab 12 #
#######################

# Setup default compiler, compile options, and link options
CC=gcc
COPTS = -c -std=c11 -Wall -Werror -pedantic-errors
LOPTS = -L/group/cs1050/lib -lm -L. -lfight

# Default target
a.out : lab12.o libfight.a
	@echo Linking a.out
	@$(CC) lab12.o $(LOPTS)

lab12.o : lab12.c
	@echo Compiling lab12.c
	@$(CC) $(COPTS) lab12.c

# Debugging target
debug: COPTS += -DDEBUG=1 -g
debug: clean a.out

# Clean build target
clean :
	@rm -f *.o
	@rm -f a.out
