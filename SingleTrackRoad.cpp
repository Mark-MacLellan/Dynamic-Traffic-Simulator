#include "SingleTrackRoad.h"
#include<iostream>

using namespace std;

void SingleTrackRoad::is_Speed_bumps(string s) {
	if (s == "y" || s == "yes")
	{
		speed_limit = 20;
	}

	else
	{
		speed_limit = 30;
	}
}