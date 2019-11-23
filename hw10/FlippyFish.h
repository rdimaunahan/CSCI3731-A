#ifndef FLIPPYFISH_H
#define FLIPPYFISH_H
#include <cstdlib>
#include <vector>
#include "Fish.h"
#include "Angle.h"
class FlippyFish:public Fish{
	private:
		Angle<double> direction;
		Angle<double> turn_rate;
	public:
		FlippyFish(double a1, double a2, std::vector<Fish*>& v);
		virtual ~FlippyFish();
		void swim();
		const Angle<double>& getDirection() const;
		const Angle<double>& getTurn_Rate() const;
		void set(double a1, double a2);
};

#endif