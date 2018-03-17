#include "Motorbike.h"
#include<iostream>

using namespace std;

void Motorbike::random_dimensions() {
	width = rand() % 1 + 1;		// picks random number from the range 1m 
	length = rand() % 2 + 1;	// picks random number from the range 1m - 2m
	height = rand() % 1 + 1;	// picks random number from the range 1m
}

// Motorbike dimensions found at - http: //www.motorcycleguidelines.org.uk/wp-content/uploads/2013/08/IHE-Guidelines-for-Motorcycling-Motorcycle-Parking.pdf