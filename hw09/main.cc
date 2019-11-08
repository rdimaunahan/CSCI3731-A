#include <cstdio>
#include <iostream>
#include <cmath>
#include "Fish.h"
#include "Population.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"
#include "Exception.h"

int main(int argc, char** argv){
	try{
		Population fishes(1000);
		for(int i = 0; i < 100; i++){
			new FlippyFish(2.0,2.0,fishes);
			new DrunkenFish(fishes);
		}
		while(fishes.size() > 0){
			std::cout<<fishes.size()<<std::endl;
			for(int j = 0; j < fishes.size(); j++){
			Fish* f = fishes.get(j);
			f->swim();
			std::cout<<f->getX()<<" , "<<f->getY()<<std::endl;
			if(fabs(f->getX()) >= 100.0 || fabs(f->getY()) >= 100.0){
				if(fishes.size() == 1){
					FlippyFish* ff = dynamic_cast<FlippyFish*>(f);
					if(ff != nullptr){
						std::cout<<"The flippy fish is the last survivor"<<std::endl;
					}
					else{
						DrunkenFish* df = dynamic_cast<DrunkenFish*>(f);
						if(df != nullptr){
						std::cout<<"The drunken fish is the last survivor"<<std::endl;
						}
					}
				}
				delete f;
			}
			}
		}
	}catch(Exception& e){
		std::cerr << e.what()<<std::endl;
	}
}
