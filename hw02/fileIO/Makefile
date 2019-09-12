all: main

file.o: file.cc 
	g++ -c -Wall -Werror file.cc
main: file.o
	g++ -o main file.o 