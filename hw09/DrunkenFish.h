#ifndef DRUNKENFISH_H
#define DRUNKENFISH_H
#include "Fish.h"
#include "Population.h"

class DrunkenFish:public Fish{
	public:
		DrunkenFish(Population& ffp);
		virtual ~DrunkenFish();
		void swim();
};
#endif