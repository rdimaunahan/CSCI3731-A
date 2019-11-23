#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include "Fish.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"
#include "Exception.h"

int main(int argc, char** argv){
	try{
		std::vector<Fish*> list;
		for(int i = 0; i < 100; i++){
			new FlippyFish(2.0,2.0, list);
			new DrunkenFish(list);
		}
		
		while(list.size() > 0){
			std::cout<<"list size: "<<list.size()<<std::endl;
			std::vector<Fish*> copy = list;
			for(auto item : copy){
			Fish* f = item;
			f->swim();
			std::cout<<f->getX()<<" , "<<f->getY()<<std::endl;
			std::cout<<list.size()<<std::endl;
				if(fabs(f->getX()) >= 100.0 || fabs(f->getY()) >= 100.0){
					std::cout<<"here"<<std::endl;
					if(list.size() == 1){
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
			std::cout<<"Bottom loop. Size as of now: "<<list.size()<<std::endl;
		}
	}catch(Exception& e){
		std::cerr << e.what()<<std::endl;
	}
}
