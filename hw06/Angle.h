#ifndef ANGLE_H
#define ANGLE_H

class Angle{

	private:
		double angle = 0.0;
	public:
		Angle(double a1);
		virtual ~Angle();
		
		double getAngle() const;
		
		void set(double angle);
		
		Angle operator+(Angle &a);
		Angle operator-(Angle &a);
		Angle operator*(double mul);
		Angle operator/(double div);
		Angle& operator+=(Angle &a);
		Angle& operator-=(Angle &a);
		Angle& operator*=(double mul);
		Angle& operator/=(double div);
		bool operator==(const Angle &a)const;
		Angle& operator=(Angle &a);
		
		friend std::ostream& operator <<(std::ostream& out, const Angle& a);
		
};
#endif