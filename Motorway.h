#ifndef Motorway_H
#define Motorway_H
#include"ROADS.h"

using namespace std;

class Motorway : public ROAD
{
private:								// Private members to be 
	int Separation_Distance;
	bool weather;

public:
	void setSeparation_distance(int);	// Setter methods


	int getSeparation_distance();		// Getter methods


	void is_weather_bad(string); // <-not 100% sure what type this method would be or how to implement it // work in progress
};
#endif // !Motorway_H