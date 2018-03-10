#include "Bus.h"
#include<iostream>

using namespace std;

void Bus::random_dimensions() {
	width = rand() % 3 + 2;		// picks random number from the range 2m - 4m 
	length = rand() % 5 + 15;	// picks random number from the range 15m - 19m
	height = rand() % 3 + 3;	// picks random number from the range 3m - 5m
}
