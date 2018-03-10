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

#include <ctime>
#include <vector>
#include<iostream>

using namespace std;

int main()
{											// Initialising Road Instances
	Aroads example_a;
	Broads example_b;
	ClassifiedRoads example_c;
	Motorway example_d;
	int roadtype;

	cout << "Please choose the type of road you wish to define :" << endl;
	cout << "1. A Road\n2. B Road\n3. Classified Road\n4. Motorway" << endl;
	cin >> roadtype;
											// Switch Statement to allow user to pick road type
	switch (roadtype)
	{
	case 1:									// 4 cases corrosponding to each road subclass. So far user is setting the major road parametrers might try to tidy this...
		int length, lanes, sep_dist;		// ... up later but sufficient for now.
		float speed_lim;
		cout << "Please set the following parameters:\n-length of the A Road in meters\n-The speed limit in kph\n-The separation distance\n-The number of lanes: " << endl;
		cin >> length;
		cin >> speed_lim;
		cin >> sep_dist;
		cin >> lanes;
		example_a.setroad_length(length);
		example_a.getroad_length();
		example_a.setspeed_limit(speed_lim);
		example_a.getspeed_limit();
		example_a.setno_of_lanes(lanes);
		example_a.getno_of_lanes();
		example_a.setSeparation_distance(sep_dist);
		example_a.getSeparation_distance();
		
		
		break;
	case 2:
		cout << "Please set the following parameters:\n-length of the B Road in meters\n-The speed limit in kph\n-The separation distance\n-The number of lanes: " << endl;
		cin >> length;
		cin >> speed_lim;
		cin >> sep_dist;
		cin >> lanes;
		example_b.setroad_length(length);
		example_b.getroad_length();
		example_b.setspeed_limit(speed_lim);
		example_b.getspeed_limit();
		example_b.setno_of_lanes(lanes);
		example_b.getno_of_lanes();
		example_b.setSeparation_distance(sep_dist);
		example_b.getSeparation_distance();
		
		
		break;
	case 3:
		cout << "Please set the following parameters : \n - length of the Classified Road in meters\n - The speed limit in kph\n - The number of lanes : " << endl;
		cin >> length;
		cin >> speed_lim;
		cin >> sep_dist;
		cin >> lanes;
		example_c.setroad_length(length);
		example_c.getroad_length();
		example_c.setspeed_limit(speed_lim);
		example_c.getspeed_limit();
		example_c.setno_of_lanes(lanes);
		example_c.getno_of_lanes();
		
		break;
	case 4:
		cout << "Please set the following parameters:\n-length of the Motorway in meters\n-The speed limit in kph\n-The separation distance\n-The number of lanes: " << endl;
		cin >> length;
		cin >> speed_lim;
		cin >> sep_dist;
		cin >> lanes;
		example_d.setroad_length(length);
		example_d.getroad_length();
		example_d.setspeed_limit(speed_lim);
		example_d.getspeed_limit();
		example_d.setno_of_lanes(lanes);
		example_d.getno_of_lanes();
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
	

	//int stop_s = clock();
	
	//cout << "time: " << (stop_s - start_s)/ double(CLOCKS_PER_SEC) << " seconds" << endl; <- might need this later, not now though
	
	int elapsed_time = 1;					// Set our timer
	
	for (int i = 0; i < 5; i++)				// For loop to increment timer
	{
											// This for "vector" loop iterates through the current ("cur") element in the loop and accesses/ prints out the method/ values for that object
		for (vector<Vehicle*>::iterator cur = vehicle_lanes.begin(); cur != vehicle_lanes.end(); cur++){
			
			cout << (*cur)->get_max_speed() << endl;
			cout << (*cur)->grid_loction(elapsed_time, start_s) << endl;
			system("pause");
			
		}
		elapsed_time++;						// Increasing counter with each loop
		cout << "\nElapsed Time is: " << elapsed_time<< " unit seconds." << endl;
	}
		
											//car_lanes[0]->get_acceleration(); // Used to access methods of parent class

	system("pause");
	return 0;

}