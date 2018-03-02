#ifndef Motorbike_h
#define Motorbike_h
#include "Vehicle.h"

class Motorbike : public Vehicle{
	void setsize(int, int);
	void setspeedlim(int);
	void setbrakedist(int, int);
};
#endif