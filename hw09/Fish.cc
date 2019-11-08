#include <cstdio>
#include "Fish.h"
#include "Population.h"

Fish::Fish(double x, double y, double speed, Population& p)
	:p(p){
	this->x = x;
	this->y = y;
	this->speed = speed;
	p.add(this);
}
Fish::~Fish(){
	p.remove(this);
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
