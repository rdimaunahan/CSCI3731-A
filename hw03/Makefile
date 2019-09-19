all: main

main.o: main.cc readPPM.h writePPM.h
	g++ -c -Wall -Werror main.cc
readPPM.o: readPPM.cc
	g++ -c -Wall -Werror readPPM.cc
writePPM.o: writePPM.cc
	g++ -c -Wall -Werror writePPM.cc
main: main.o readPPM.o writePPM.o
	g++ -o main main.o readPPM.o writePPM.o