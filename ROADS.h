#ifndef ROADS_H
#define ROADS_H
#include<string>

using namespace std;
const float LANES = 3.65;		// Standard British Lane width. Negligible exceptions hence constant.
class ROAD
{
protected:							// Protected members to be 
	int no_of_lanes;				// accessed by derived classes
	float lane_width;
	float speed_limit;				// <- convert from mph -> kph
	int road_lenghth;
	bool traffic_lights;
	bool bi_directional;
	bool intersections;
	bool pedestrian_crossing;
	string weather_params;


public:
	// add in constructors and destructors (probably need to add them for sub classes as opposed to parent class).
	void setno_of_lanes(int);		// Setter methods
	void setroad_length(int);
	void setspeed_limit(float);

	int getno_of_lanes();			// Getter methods
	int getroad_length();
	int getspeed_limit();

	bool is_traffic_lights(string);	// Boolean methods
	bool is_bi_directional(string);
	bool is_pedestrian_crossing(string);

	void draw_road(int length, int lanes);

	// CONSTRUCTORS AND DESTRUCTORS

};

#endif // !ROADS_H

// Idea for implementing condition where car reduces speed by a percentage if braking distance is > seperation
// distance. Though not sure how to implement this as braking and seperation are private members of different classes
// i.e. not sure how we would compare them.