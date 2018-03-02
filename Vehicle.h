#ifndef Vehicle_h
#define Vehicle_h
#include <stdlib.h>
using namespace std;

class Vehicle {
public:
	float width;
	float length;
	int speedlim;
	int brakedist;
	int accelprof;
	void setsize();
	void setspeedlim();
	void setbrakedist();
	void setaccelprof();
};
#endif