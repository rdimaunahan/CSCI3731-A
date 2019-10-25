#include <cstdio>
#include <cmath>
#include "Angle.h"

Angle::Angle(double angle){
	this->angle = angle;
	while(this->angle < 0){
		this->angle+=360;
	}
	while(this->angle > 360){
		this->angle-=360;
	}
}
Angle::Angle(){
	angle = 0;
}
Angle::~Angle(){
}

double Angle::getAngle() const{
	return angle;
}
void Angle::set(double angle){
	this->angle = angle;
}
double Angle::getSin() const{
	return sin(angle*M_PI/180.0);
}
double Angle::getCos() const{
	return cos(angle*M_PI/180.0);
}
Angle& Angle::operator+=(Angle &a){
	angle += a.getAngle();
	while(angle < 0){
		angle+=360;
	}
	while(angle > 360){
		angle-=360;
	}
	return *this;
}
Angle& Angle::operator-=(Angle &a){
	angle -= a.getAngle();
	while(angle < 0){
		angle+=360;
	}
	while(angle > 360){
		angle-=360;
	}
	return *this;
}
