#ifndef Car_h
#define Car_h
#include "Vehicle.h"

class Car : public Vehicle{
	void setsize(int, int);
	void setspeedlim(int);
	void setbrakedist(int);
};
#endif