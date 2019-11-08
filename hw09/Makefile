all:main

Angle.o: Angle.cc Angle.h
	g++ -c -Wall -Werror Angle.cc
Fish.o: Fish.cc Fish.h
	g++ -c -Wall -Werror Fish.cc
Population.o: Population.cc Population.h
	g++ -c -Wall -Werror Population.cc
DrunkenFish.o: DrunkenFish.cc DrunkenFish.h
	g++ -c -Wall -Werror DrunkenFish.cc
FlippyFish.o: FlippyFish.cc FlippyFish.h
	g++ -c -Wall -Werror FlippyFish.cc
Exception.o: Exception.cc Exception.h
	g++ -c -Wall -Werror Exception.cc
main.o: main.cc Fish.h Population.h FlippyFish.h DrunkenFish.h Exception.h
	g++ -c -Wall -Werror main.cc
main: Angle.o Fish.o Population.o main.o DrunkenFish.o FlippyFish.o Exception.o
	g++ -o main main.o Angle.o Fish.o Population.o DrunkenFish.o FlippyFish.o Exception.o
	