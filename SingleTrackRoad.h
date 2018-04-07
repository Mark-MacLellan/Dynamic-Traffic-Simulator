#ifndef SingleTrackRoad_H
#define SingleTrackRoad_H
#include"ROADS.h"

using namespace std;

class SingleTrackRoad : public ROAD
{
private:							// Private members
	bool Speed_bumps;				// <- if speed bumps then cant go above 30

public:

	void is_Speed_bumps(string);	// Boolean methods

};

#endif // !ClassifiedRoads_H