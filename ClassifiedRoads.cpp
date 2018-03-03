#include "ClassifiedRoads.h"
#include<iostream>

using namespace std;

bool ClassifiedRoads::is_Speed_bumps(string s) {
	if (s == "y" || s == "yes")
	{
		speed_limit = 20;
	}

	else
	{
		speed_limit = 30;
	}
}
