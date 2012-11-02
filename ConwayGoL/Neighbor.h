/*  Description: Storage class that contains the center, and 8 surrounding neighbors information.
 *  Author:		 James Muldoon
 *  Created:	 01 November 2012 21:36
 */
#ifndef NEIGHBOR_H 
#define NEIGHBOR_H
#include "Location.h"
using namespace std;

class Neighbor{
public:
	// Constructor takes the center id value and sets it.
	Neighbor(int, Location &);

	// Update the eight neighbors for each center position. Takes int as the map size and Location object.
	void UpdateCenterNeighbors(int);

	// Accessor method for returning all the stored data member IDs as an array.
	int *ReadNeighborInformation();

private:
	// Declaring the member variables that are to store any class type.
	int upperLeft;
	int up;
	int upperRight;
	int left;
	int center;
	int right;
	int lowerLeft;
	int down;
	int lowerRight;

	int snArray[9];		// Space neighbor array. Contains the ID for each neighboring space to center.
	Location *nLoc;		// Location of the center.
};

#endif //NEIGHBOR_H