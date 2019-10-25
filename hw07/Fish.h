#ifndef FISH_H
#define FISH_H
#include "Angle.h"
#include "Population.h"

class Fish{

	private:
		double x = 0.0;
		double y = 0.0;
		double speed = 0.0;
		Angle direction;
		Angle turn_rate;
		Population& p;
	public:
		Fish();
		Fish(double x, double y, double speed, double a1, double a2,Population& p);
		virtual ~Fish();
		
		double getX() const;
		double getY() const;
		double getSpeed() const;
		const Angle& getDirection() const;
		const Angle& getTurn_Rate() const;
		
		void set(double x, double y, double speed, double a1, double a2);
		
		void swim();
		
};
#endif