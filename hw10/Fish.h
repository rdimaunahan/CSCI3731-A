#ifndef FISH_H
#define FISH_H
#include <vector>

class Fish{

	protected:
		double x = 0.0;
		double y = 0.0;
		double speed = 0.0;
		std::vector<Fish*>& v;
	public:
		Fish();
		Fish(double x, double y, double speed, std::vector<Fish*>& v);
		virtual ~Fish();
		
		double getX() const;
		double getY() const;
		double getSpeed() const;
		
		void set(double x, double y, double speed);
		
		virtual void swim() = 0;
		
};
#endif