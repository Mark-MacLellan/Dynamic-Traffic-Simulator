#ifndef ROADS_H
#define ROADS_H
#include<string>

using namespace std;

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
	const float LANES = 3.65;		// Standard British Lane width. Negligible exceptions hence constant.

public:
	// add in constructors and destructors (probably need to add them for sub classes as opposed to parent class).
	void setno_of_lanes(int);		// Setter methods
	void setroad_length(int);
	void setlane_width(float);
	void setspeed_limit(float);

	int getno_of_lanes();			// Getter methods
	int getroad_length();
	float getlane_width();			// <-- Set lane width as constant so can probably get rid of this
	float getspeed_limit();

	bool is_traffic_lights(string);	// Boolean methods
	bool is_bi_directional(string);
	bool is_pedestrian_crossing(string);
	

};

#endif // !ROADS_H

// Idea for implementing condition where car reduces speed by a percentage if braking distance is > seperation
// distance. Though not sure how to implement this as braking and seperation are private members of different classes
// i.e. not sure how we would compare them.