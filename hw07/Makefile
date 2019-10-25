all:main

Angle.o: Angle.cc Angle.h
	g++ -c -Wall -Werror Angle.cc
Fish.o: Fish.cc Fish.h
	g++ -c -Wall -Werror Fish.cc
Population.o: Population.cc Population.h
	g++ -c -Wall -Werror Population.cc
main.o: main.cc Fish.h Population.h
	g++ -c -Wall -Werror main.cc
main: Angle.o Fish.o Population.o main.o
	g++ -o main main.o Angle.o Fish.o Population.o
	