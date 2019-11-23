#include <cstdio>
#include <iostream>
#include "Fish.h"

Fish::Fish(double x, double y, double speed, std::vector<Fish*>& v)
	:v(v){
	this->x = x;
	this->y = y;
	this->speed = speed;
	v.push_back(this);
}
Fish::~Fish(){
	for(auto i = v.begin(); i != v.end(); ++i){
		if(*i == this){
			v.erase(i);
			break;
		}
	}
}
double Fish::getX() const{
	return x;
}
double Fish::getY() const{
	return y;
}
double Fish::getSpeed() const{
	return speed;
}
void Fish::set(double x, double y, double speed)
{
			this->x = x;
			this->y = y;
			this->speed = speed;
}
