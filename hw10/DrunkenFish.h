#ifndef DRUNKENFISH_H
#define DRUNKENFISH_H
#include "Fish.h"

class DrunkenFish:public Fish{
	public:
		DrunkenFish(std::vector<Fish*>& v);
		virtual ~DrunkenFish();
		void swim();
};
#endif