#ifndef FLIPPYFISH_H
#define FLIPPYFISH_H
#include <cstdlib>
#include "Fish.h"
#include "Angle.h"
#include "Population.h"

class FlippyFish:public Fish{
	private:
		Angle direction;
		Angle turn_rate;
	public:
		FlippyFish(double a1, double a2, Population& ffp);
		virtual ~FlippyFish();
		void swim();
		const Angle& getDirection() const;
		const Angle& getTurn_Rate() const;
		void set(double a1, double a2);
};

#endif