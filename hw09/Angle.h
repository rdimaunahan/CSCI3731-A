#ifndef ANGLE_H
#define ANGLE_H

class Angle{

	private:
		double angle = 0.0;
	public:
		Angle(double a1);
		virtual ~Angle();
		Angle();
		double getAngle() const;
		
		void set(double angle);
		
		double getSin() const;
		double getCos() const;

		Angle& operator+=(Angle &a);
		Angle& operator-=(Angle &a);
		
	
		
};
#endif