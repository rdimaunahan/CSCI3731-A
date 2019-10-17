all: main

main.o: main.cc Angle.h
	g++ -c -Wall -Werror main.cc
Angle.o: Angle.cc
	g++ -c -Wall -Werror Angle.cc
main: main.o Angle.o
	g++ -o main main.o Angle.o