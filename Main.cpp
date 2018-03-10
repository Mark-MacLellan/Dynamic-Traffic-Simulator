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

#include <vector>
#include<iostream>

using namespace std;

int main()
{
	Aroads example_a;
	Broads example_b;
	ClassifiedRoads example_c;
	Motorway example_d;

	int roadtype;

	cout << "Please choose the type of road you wish to define :" << endl;
	cout << "1. A Road\n2. B Road\n3. Classified Road\n4. Motorway" << endl;
	cin >> roadtype;

	switch (roadtype)
	{
	case 1:
		int length, lanes, sep_dist;
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
	









	




	system("pause");
	return 0;

}