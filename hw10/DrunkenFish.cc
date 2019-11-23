#include <cstdio>
#include <cstdlib>
#include <vector>
#include "DrunkenFish.h"

DrunkenFish::DrunkenFish(std::vector<Fish*>& v)
			:Fish(0.0, 0.0, 3.0, v){

}
DrunkenFish::~DrunkenFish(){
}
void DrunkenFish::swim(){
	int choice = rand() % 4;
	if( choice == 0) x += speed;
	else if(choice == 1) y += speed;
	else if(choice == 2) x -= speed;
	else y -= speed;
}