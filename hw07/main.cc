#include <cstdio>
#include "Fish.h"
#include "Population.h"

int main(int argc, char** argv){
	Population fishes(100000);
	for(;;){
		new Fish(0.0,0.0,3,2,2,fishes); //adding fish on (0,0) with speed direction and turn_rate starting at 0
		for(int j = 0; j < fishes.size(); j++){
			Fish* f = fishes.get(j);
			f->swim();
			if(f->getX() >= 100.0 || f->getY() >= 100.0){
				delete f;
			}
		}
	}
	printf("%d",fishes.size());
}
