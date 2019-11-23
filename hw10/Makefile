all:main


Fish.o: Fish.cc Fish.h
	g++ -c -Wall -Werror Fish.cc
DrunkenFish.o: DrunkenFish.cc DrunkenFish.h
	g++ -c -Wall -Werror DrunkenFish.cc
FlippyFish.o: FlippyFish.cc FlippyFish.h
	g++ -c -Wall -Werror FlippyFish.cc
Exception.o: Exception.cc Exception.h
	g++ -c -Wall -Werror Exception.cc
main.o: main.cc Fish.h FlippyFish.h DrunkenFish.h Exception.h
	g++ -c -Wall -Werror main.cc
main: Fish.o main.o DrunkenFish.o FlippyFish.o Exception.o
	g++ -o main main.o Fish.o DrunkenFish.o FlippyFish.o Exception.o
	