#ifndef ANGLE_H
#define ANGLE_H
#include <cstdio>
#include <cmath>

template<class T> class Angle{

	private:
		T angle = 0.0;
	public:
		Angle(T a1){
			this->angle = a1;
			while(this->angle < 0){
				this->angle+=360;
			}
			while(this->angle > 360){
				this->angle-=360;
			}
		}
		virtual ~Angle(){
			
		}
		Angle(){
			this->angle = 0;
		}
		double getAngle() const{
			return angle;
		}
		
		void set(T angle){
			this->angle = angle;
		}
		
		double getSin() const{
			return sin(angle*M_PI/180.0);
		}
		double getCos() const{
			return cos(angle*M_PI/180.0);
		}

		Angle& operator+=(Angle &a){
			angle += a.getAngle();
			while(angle < 0){
				angle+=360;
			}
			while(angle > 360){
				angle-=360;
			}
			return *this;
		}
		Angle& operator-=(Angle &a){
			angle -= a.getAngle();
			while(angle < 0){
				angle+=360;
			}
			while(angle > 360){
				angle-=360;
			}
			return *this;
		}
};
#endif