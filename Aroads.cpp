#include "Aroads.h"
#include<iostream>

using namespace std;

void Aroads::setSeparation_distance(int i) {				// Set seperation distance
	Separation_Distance = i;
}

int Aroads::getSeparation_distance() {						// Get seperation distance
	return Separation_Distance;
}

void Aroads::is_weather_bad(string s) {						// Separation distance is alrtered depnding
	if (s == "snow" || s == "snowy")						// on the weather
	{
		Separation_Distance = Separation_Distance * 8;
	}

	else if (s == "rain" || s == "rainy")
	{
		Separation_Distance = Separation_Distance * 2;
	}

	else if (s == "ice" || s == "black ice")
	{
		Separation_Distance = Separation_Distance * 10;
	}
	else
	{
		Separation_Distance = Separation_Distance;
	}
}