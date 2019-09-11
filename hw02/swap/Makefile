all: main

main.o: main.cc swap.h
	g++ -c -Wall -Werror main.cc
swap.o: swap.cc swap.h
	g++ -c -Wall -Werror swap.cc
main: main.o swap.o
	g++ -o main main.o swap.o