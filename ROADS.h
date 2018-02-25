#ifndef ROADS_H
#define ROADS_H
#include<string>

using namespace std;

class ROAD
{
private:						// Private members to be 
	int no_of_lanes;			// accessed within the base class.
	float lane_width;
	float speed_limit;			// <- convert from mph -> kph
	bool traffic_lights;
	bool bi_directional;
	bool intersections;
	bool pedestrian_crossing;
	string weather_params;

public:
	void setno_of_lanes(int);	// Setter methods
	void setlane_width(float);
	void setspeed_limit(float);

	int getno_of_lanes();		// Setter methods
	float getlane_width();
	float getspeed_limit();

	bool istraffic_lights(string);	// Boolean methods
	bool isbi_directional(string);
	bool ispedestrian_crossing(string);

};

#endif // !ROADS_H