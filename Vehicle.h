#ifndef Vehicle_h
#define Vehicle_h
#include <stdlib.h>
using namespace std;

class Vehicle {

protected:
	float height;				// Protected members to be
	float length;				// accessed by derived classes
	float width;
	float acceleration;
	float breaking_distance;
	int max_speed;

public:
	// add in constructors and destructors (probably need to add them for sub classes as opposed to parent class).
	void set_height(int);		// Setter methods
	void set_length(float);
	void set_width(float);
	void set_max_speed(float);
	void set_acceleration(float);
	void set_breaking_distance(float);
	

	float get_height();			// Setter methods
	float get_length();
	float get_width();
	float get_acceleration(float);
	float get_breaking_distance(float);
	int get_max_speed(float);

};
#endif // !VEHICLE_H


// Idea for implementing condition where car reduces speed by a percentage if braking distance is > seperation
// distance. Though not sure how to implement this as braking and seperation are private members of different classes
// i.e. not sure how we would compare them.