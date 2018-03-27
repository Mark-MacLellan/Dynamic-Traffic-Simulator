#include "ROADS.h"
#include "Aroads.h"
#include "Broads.h"
#include "ClassifiedRoads.h"
#include "Motorway.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Lorry.h"
#include "Motorbike.h"
#include "Van.h"

#include<Windows.h>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

bool pointless(Vehicle *a, Vehicle *b){ return true; }

int main()
{											// Initialising Road Instances
	Aroads example_a;
	Broads example_b;
	ClassifiedRoads example_c;
	Motorway example_d;
	int roadtype;
	int x, y;


	void bubbleSort(vector<int>& a);
	void printVector(vector<int> a);

	//void bubbleSort(vector<Vehicle>& a);
	//void printVector(vector<Vehicle> a);


	vector<int> v;

	vector<int> v2;

	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);

	v2.push_back(5);
	v2.push_back(3);
	v2.push_back(1);
	v2.push_back(4);
	v2.push_back(6);

	std::sort(v.begin(), v.end());

	std::sort(v2.begin(), v2.end());



	cout << "Please choose the type of road you wish to define :" << endl;
	cout << "1. A Road\n2. B Road\n3. Classified Road\n4. Motorway" << endl;
	cin >> roadtype;
	// Switch Statement to allow user to pick road type
	switch (roadtype)
	{
	case 1:									// 4 cases corrosponding to each road subclass. So far user is setting the major road parametrers might try to tidy this...
		int length, lanes, sep_dist;		// ... up later but sufficient for now.
		float speed_lim;
		cout << "\nPlease set the following parameters:\n\n-length of the A Road in meters\n-The number of lanes:\n-The speed limit in kph\n-The separation distance" << endl;
		cin >> x;							// Parameters for defining road length (x) and width (y) i.e. lanes
		cin >> y;
		cin >> speed_lim;					// Setting Road Speed Limit
		cin >> sep_dist;
		cout << "Defined Road" << endl;
		example_a.draw_road(x, y);			// Calling draw_road function to layout the user defined road
		cout << endl << endl;
		_getch();
		example_a.setspeed_limit(speed_lim);
		example_a.getspeed_limit();
		example_a.setSeparation_distance(sep_dist);
		example_a.getSeparation_distance();


		break;
	case 2:
		cout << "\nPlease set the following parameters:\n\n-length of the B Road in meters\n-The number of lanes:\n-The speed limit in kph\n-The separation distance" << endl;
		cin >> x;							// Parameters for defining road length (x) and width (y) i.e. lanes
		cin >> y;
		cin >> speed_lim;					// Setting Road Speed Limit
		cin >> sep_dist;
		cout << "Defined Road" << endl;
		example_b.draw_road(x, y);			// Calling draw_road function to layout the user defined road
		cout << endl << endl;
		_getch();
		example_b.setspeed_limit(speed_lim);
		example_b.getspeed_limit();
		example_b.setSeparation_distance(sep_dist);
		example_b.getSeparation_distance();


		break;
	case 3:
		cout << "\nPlease set the following parameters:\n\n-length of the Classified Road in meters\n-The number of lanes:\n-The speed limit in kph\n-The separation distance" << endl;
		cin >> x;							// Parameters for defining road length (x) and width (y) i.e. lanes
		cin >> y;
		cin >> speed_lim;					// Setting Road Speed Limit
		cin >> sep_dist;
		cout << "Defined Road" << endl;
		example_c.draw_road(x, y);			// Calling draw_road function to layout the user defined road
		cout << endl << endl;
		_getch();
		example_c.setspeed_limit(speed_lim);
		example_c.getspeed_limit();

		break;
	case 4:
		cout << "\nPlease set the following parameters:\n\n-length of the Motorway in meters\n-The number of lanes:\n-The speed limit in kph\n-The separation distance" << endl;
		cin >> x;							// Parameters for defining road length (x) and width (y) i.e. lanes
		cin >> y;
		cin >> speed_lim;					// Setting Road Speed Limit
		cin >> sep_dist;
		cout << "Defined Road" << endl;
		example_d.draw_road(x, y);			// Calling draw_road function to layout the user defined road
		cout << endl << endl;
		_getch();
		example_d.setspeed_limit(speed_lim);
		example_d.getspeed_limit();
		example_d.setSeparation_distance(sep_dist);
		example_d.getSeparation_distance();


		break;
	}

	int start_s = clock();
	// Initialising Vector of pointers of type vehicle. Vector variable name is vehicle_lanes. The only way of having objects from different...
	vector<Vehicle*> vehicle_lanes;			//  ..classes in the same vector is for each of the intended classes to have the same "parent" class hence creating a "Vehicle" and not a car, van vector etc.

	vehicle_lanes.push_back(new Car);		// Using built in vector "pushback" function to add a new instance to the end of the vector.
	vehicle_lanes.push_back(new Van);
	vehicle_lanes.push_back(new Bus);
	vehicle_lanes.push_back(new Lorry);
	vehicle_lanes.push_back(new Motorbike);


	vehicle_lanes[0]->set_max_speed(70);	// Using this notation accesses the object indexed at [x] then -> accesses any of the Vehicles methods (but not the indivdual methods unique to each subclass).
	vehicle_lanes[1]->set_max_speed(80);
	vehicle_lanes[2]->set_max_speed(60);
	vehicle_lanes[3]->set_max_speed(62);
	vehicle_lanes[4]->set_max_speed(100);
	// Experimental int vector for rearranging grid positions
	vector<int> order;
	

	

	int elapsed_time = 1;					// Set our timer
	for (int i = 0; i < 5; i++)				// For loop to increment timer
	{
		// This for "vector" loop iterates through the current ("cur")
		// element in the loop and accesses/ prints out the method/ values for that object
		

		// for 5 iterations...
		//  ...print car stuff
		// sort vehicle_lanes
		// continue itaration form start...

		for (vector<Vehicle*>::iterator cur = vehicle_lanes.begin(); cur != vehicle_lanes.end(); cur++){
			// Iterator accessing Vehicle Methods for Data
			
			cout << (*cur)->get_max_speed() << " kph." << endl;																																												//The * operator gives the item referenced by the iterator, which is a pointer. Then the -> dereferences that pointer.
			cout << (*cur)->grid_loction(elapsed_time, start_s) << " units travelled." << endl;
			
			/*order.push_back((*cur)->grid_loction(elapsed_time, start_s));
			printVector(order);				// Prints current order of vector*/
			//bubbleSort(order);				// Sorts order of vector based on grid_position
			
			_getch();

	
		}
		for (vector<Vehicle*>::iterator it = vehicle_lanes.begin(); it != vehicle_lanes.end(); it++){
			cout << "Distance travelled is: " << (*it)->get_grid_location() << endl;
		}
		cout << "for breakpoint..." << endl;
		sort(vehicle_lanes.begin(), vehicle_lanes.end(), CompareVehicleLocation);
		order.clear();						// Clears vector after each iteration
		elapsed_time++;						// Increasing counter with each loop
		cout << "\nElapsed Time is: " << elapsed_time << " unit seconds." << endl;
	}

	//car_lanes[0]->get_acceleration(); // Used to access methods of parent class
	//delete &vehicle_lanes;					// Deletes dynamic memory allocation
	system("pause");
	return 0;

}

void bubbleSort(vector<int>& a)
{
	bool swapp = true;
	while (swapp) {
		swapp = false;
		for (size_t i = 0; i < a.size() - 1; i++) {
			if (a[i]>a[i + 1]) {			// If current element is greater than next element
				a[i] += a[i + 1];			// Reassign current element to next one
				a[i + 1] = a[i] - a[i + 1];	// Reassign next element to current one
				a[i] -= a[i + 1];
				swapp = true;
			}
		}
	}
	reverse(a.begin(), a.end());			// Flips order of vector from highest to lowest
}

void printVector(vector<int> a) {
	cout << "Vector Order in terms of Speed: " << endl;
	for (size_t i = 0; i <a.size(); i++) {

		cout << a[i] << " ";

	}
	cout << "\n" << endl;
}