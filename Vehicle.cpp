#include "Vehicle.h"
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
void Vehicle::set_breaking_distance(float f){
	breaking_distance = f;
}


float Vehicle::get_height() {		// Setter methods
	return height;
}
float Vehicle::get_length(){
	return length;
}
float Vehicle::get_width() {
	return width;
}
float Vehicle::get_acceleration(float) {
	return acceleration;
}
float Vehicle::get_breaking_distance(float) {
	return breaking_distance;
}
int Vehicle::get_max_speed(float) {
	return max_speed;
}