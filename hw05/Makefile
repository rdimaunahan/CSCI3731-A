all: main

main.o: main.cc readPPM.h writePPM.h write_jpeg_file.h
	g++ -c -Wall -Werror main.cc
readPPM.o: readPPM.cc
	g++ -c -Wall -Werror readPPM.cc
writePPM.o: writePPM.cc
	g++ -c -Wall -Werror writePPM.cc
write_jpeg_file.o: write_jpeg_file.cc
	g++ -c -Wall -Werror write_jpeg_file.cc
main: main.o readPPM.o writePPM.o write_jpeg_file.o
	g++ -o main main.o readPPM.o writePPM.o write_jpeg_file.o -ljpeg