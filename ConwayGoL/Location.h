/*  Description: GameMap class declaration. Stores location, and map instantiation capability.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 03:14
 */
#ifndef LOCATION_H 
#define LOCATION_H
using namespace std;

class Location{
public:
	// Constructor that takes x and y coordinates.
	Location(int,int);

	// Accessor methods for X and Y coordinates.
	int ReadX();
	int ReadY();

private:
	int x, y;
};

#endif //LOCATION_H
