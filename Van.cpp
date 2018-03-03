#include "Van.h"
#include<iostream>

using namespace std;

void Van::random_dimensions() {
	width = rand() % 4 + 1;		// picks random number from the range 1m - 3m 
	length = rand() % 5 + 3;	// picks random number from the range 3m - 7m
	height = rand() % 3 + 2;	// picks random number from the range 2m - 4m
}

// Van Dimensions found at - https: //www.longmarshltd.co.uk/news/van-and-truck-dimensions-and-carrying-capacity