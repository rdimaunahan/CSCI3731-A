all: main

main.o: main.cc Image.h
	g++ -c -g -Wall -Werror main.cc
Image.o: Image.cc Image.h
	g++ -c -g -Wall -Werror Image.cc
main: main.o Image.o
	g++ -o main main.o Image.o -ljpeg
	