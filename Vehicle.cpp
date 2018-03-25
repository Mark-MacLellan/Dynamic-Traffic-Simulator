#include "Vehicle.h"
#include <ctime>
#include<string>
#include<iostream>

using namespace std;

void Vehicle::set_height(int i) {		// Setter methods
	height = i;
}
void Vehicle::set_length(float f) {
	length = f;
}
void Vehicle::set_width(float f) {
	width = f;
}
void Vehicle::set_max_speed(float f) {
	max_speed = f;
}
void Vehicle::set_acceleration(float f) {
	acceleration = f;
}
void Vehicle::set_breaking_distance(float f) {
	breaking_distance = f;
}


float Vehicle::get_height() {		// Getter methods
	return height;
}
float Vehicle::get_length() {
	return length;
}
float Vehicle::get_width() {
	return width;
}
float Vehicle::get_acceleration() {
	return acceleration;
}
float Vehicle::get_breaking_distance() {
	return breaking_distance;
}
int Vehicle::get_max_speed() {
	return max_speed;
}

int Vehicle::grid_loction(int stop_s, int start_s) {				// Other Methods
	float travel_time = stop_s; //(stop_s - start_s) / double(CLOCKS_PER_SEC);
	grid_location = max_speed * travel_time;
	return grid_location;
}
