#include <cstdio>
#include <iostream>
#include "Population.h"

Population::Population(int max_fishes){
	this->max_fishes = max_fishes;
	this->num_fishes = 0;
	fishes = new Fish*[max_fishes];
}
Population::~Population(){
}
void Population::add(Fish* fish){
	fishes[num_fishes] = fish;
	num_fishes += 1;
}
void Population::remove(Fish* fish){
	int index;
	for(int i = 0; i< num_fishes; i++){
		if(fishes[i] == fish){
			index = i;
			break;
		}
	}
	fishes[index] = 0;
	num_fishes -= 1;
	for(int i = index; i < num_fishes; i++){
		fishes[i] = fishes[i+1];
	}
}
int Population::size() const{
	return num_fishes;
}
Fish* Population::get(int index) const{
	return fishes[index];
}
