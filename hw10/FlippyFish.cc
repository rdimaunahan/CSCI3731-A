#include "FlippyFish.h"
#include <cmath>
FlippyFish::FlippyFish(double a1, double a2, std::vector<Fish*>& v)
		  :Fish(0.0,0.0,3.0, v),
		   direction(a1),
		   turn_rate(a2)
		   {
}
FlippyFish::~FlippyFish(){
}
void FlippyFish::swim(){
	int choice = rand() % 3;
	if( choice == 0) direction -= turn_rate;
	else if(choice == 2) direction += turn_rate;
	x += speed * direction.getCos();
	y += speed * direction.getSin();
}
const Angle<double>& FlippyFish::getDirection() const{
	return direction;
}
const Angle<double>& FlippyFish::getTurn_Rate() const{
	return turn_rate;
}
void FlippyFish::set(double a1, double a2){
	direction.set(a1);
	turn_rate.set(a2);
}