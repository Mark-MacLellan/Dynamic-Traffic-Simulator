#include "ROADS.h"
#include<string>
#include<iostream>

using namespace std;
											// Setter methods
void ROAD::setno_of_lanes(int x){			
	no_of_lanes = x;
	cout << "Number of lanes is " << x << "." << endl;
	cout << "Road width is " << x*LANES << " meters." << endl;
}

void ROAD::setspeed_limit(float x){
	speed_limit = x;
	cout << "Speed limit is " << x << " meters per hour." << endl;
}
void ROAD::setroad_length(int x){
	road_lenghth = x;
	cout << "Road is " << x << " meters." << endl;
}
											// Getter methods
int ROAD::getno_of_lanes(){					
	return no_of_lanes;
}

float ROAD::getspeed_limit(){
	return speed_limit;
}
int ROAD::getroad_length(){
	return road_lenghth;
}
											// Boolean methods
bool ROAD::is_traffic_lights(string s){		
	if (s == "yes" || s == "y")
	{
		traffic_lights = true;
	}

	else if (s == "no" || s == "n")
	{
		traffic_lights = false;
	}
	return traffic_lights;
}
bool ROAD::is_bi_directional(string s){
	if (s == "yes" || s == "y")
	{
		bi_directional = true;
	}

	else if (s == "no" || s == "n")
	{
		bi_directional = false;
	}
	return bi_directional;
}
bool ROAD::is_pedestrian_crossing(string s){
	if (s == "yes" || s == "y")
	{
		pedestrian_crossing = true;
	}

	else if (s == "no" || s == "n")
	{
		pedestrian_crossing = false;
	}
	return pedestrian_crossing;
}

/*void is_weather_bad(string s) {
	if (s == "snow" || s == "snowy")
	{
		// increase safe spacing distance by x% for y vehicle
	}

	else if (s == "rain" || s == "rainy")
	{
		// increase safe spacing distance by x% for y vehicle
	}

	else if (s == "ice" || s == "black ice")
	{
		// increase safe spacing distance by x% for y vehicle
	}
}*/



