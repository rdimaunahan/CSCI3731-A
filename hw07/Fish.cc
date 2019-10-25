#include <cstdio>
#include <iostream>
#include <cstdlib>
#include "Fish.h"

Fish::Fish(double x, double y, double speed, double a1, double a2, Population& p)
	:direction(a1),
	 turn_rate(a2),
	 p(p){
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
const Angle& Fish::getDirection() const{
	return direction;
}
const Angle& Fish::getTurn_Rate() const{
	return turn_rate;
}
void Fish::set(double x, double y, double speed, double a1, double a2)
{
			this->x = x;
			this->y = y;
			this->speed = speed;
			direction.set(a1);
			turn_rate.set(a2);
}

void Fish::swim(){
	int choice = rand() % 3;
	if( choice == 0) direction -= turn_rate;
	else if(choice == 2) direction += turn_rate;
	x += speed * direction.getCos();
	y += speed * direction.getSin();
}
