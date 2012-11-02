/*  Description: Storage class that contains the center, and 8 surrounding neighbors information.
 *				 Additionally is capable of setting the data members with an update method.
 *  Author:		 James Muldoon
 *  Created:	 01 November 2012 21:36
 */
#include "Neighbor.h"

Neighbor::Neighbor(int id, Location &loc){
	center = id;
	nLoc = &loc;
}

// Updates the center positions neighbors. parameters are the size of the map and the location that the
// current center is at.
void Neighbor::UpdateCenterNeighbors(int size){
	// the increment of venter will get the very next id to the right of it.
	// the increment of center by size will give it the id below it.
	upperLeft	= center-size-1;
	up			= center-size;
	upperRight	= center-size+1;
	left		= center-1;
	right		= center+1;
	lowerLeft	= center+size-1;
	down		= center+size;
	lowerRight	= center+size+1;

	// Checks are done after the initial setting to avoid any of the wall/corner cases for incorrect id
	// assignment. This one Accounts for top wall of the map. Nothing should exist above this center.
	if(nLoc->ReadX() == 0){
		upperLeft = -1;
		up = -1;
		upperRight = -1;
	}
	// Accounts for bottom wall of the map. Nothing should exist below this center.
	if(nLoc->ReadX() == size-1){
		lowerLeft = -1;
		down = -1;
		lowerLeft = -1;
	}
	// Accounts for the right hand wall of the map. Nothing should exist to the right of this center.
	if(nLoc->ReadY() == size-1){
		upperRight = -1;
		right = -1;
		lowerRight = -1;
	}
	// Accounts for the left hand wall of the map. Nothing should exist to the right of this center.
	if(nLoc->ReadY() == 0){
		upperLeft = -1;
		left = -1;
		lowerLeft = -1;
	}
}

// Accessor method for reading out all the values of the neighboring spaces.
int *Neighbor::ReadNeighborInformation(){
	snArray[0] = upperLeft;
	snArray[1] = up;
	snArray[2] = upperRight;
	snArray[3] = left;
	snArray[4] = center;
	snArray[5] = right;
	snArray[6] = lowerLeft;
	snArray[7] = down;
	snArray[8] = lowerRight;
	return snArray;
}