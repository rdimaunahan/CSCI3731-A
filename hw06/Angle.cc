#include <cstdio>
#include <iostream>
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
Angle::~Angle(){
}

double Angle::getAngle() const{
	return angle;
}
void Angle::set(double angle){
	this->angle = angle;
}
Angle Angle::operator+(Angle &a){
	return Angle(angle + a.getAngle());
}
Angle Angle::operator-(Angle &a){
	return Angle(angle - a.getAngle());
}
Angle Angle::operator*(double mul){
	return Angle(angle * mul);
}
Angle Angle::operator/(double div){
	return Angle(angle / div);
}
Angle& Angle::operator*=(double mul){
	angle *= mul;
	while(angle < 0){
		angle+=360;
	}
	while(angle > 360){
		angle-=360;
	}
	return *this;
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
Angle& Angle::operator/=(double div){
	angle /= div;
	while(angle < 0){
		angle+=360;
	}
	while(angle > 360){
		angle-=360;
	}
	return *this;
}
bool Angle::operator==(const Angle &a)const{
	return angle == a.getAngle();
}
Angle& Angle::operator=(Angle &a){
	angle = a.angle;
	return *this;
}
std::ostream& operator<<(std::ostream& out, const Angle& a){
	out<<"("<<a.angle<<")";
	return out;
}