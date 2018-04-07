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
void Vehicle::set_name(string f){
	name = f;
}
void Vehicle::set_total_dist(float f){

	total_dist += f;
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
float Vehicle::get_total_dist(){
	return total_dist;
}

string Vehicle::get_name(){
	return name;
}

float Vehicle::grid_loction(float stop_s, float start_s) {				// Other Methods
	float travel_time = stop_s; //(stop_s - start_s) / double(CLOCKS_PER_SEC);
	grid_location = max_speed * travel_time;
	return grid_location;
}

/*float Vehicle:: get_grid_location(){
	return this->grid_location;
}*/



bool CompareVehicleLocation(Vehicle* lhs, Vehicle* rhs)
{								// Returns true if lhs is greater than rhs grid_location
	return (lhs->get_total_dist() > rhs->get_total_dist());
	
}

