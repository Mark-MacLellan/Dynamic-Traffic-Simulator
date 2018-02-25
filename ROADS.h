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

	bool is_traffic_lights(string);	// Boolean methods
	bool is_bi_directional(string);
	bool is_pedestrian_crossing(string);
	bool is_weather_bad(string); // <-not 100% sure what type this method would be or how to implement it // work in progress

};

#endif // !ROADS_H