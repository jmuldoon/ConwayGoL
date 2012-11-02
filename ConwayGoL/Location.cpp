/*  Description: Location constructor for setting the attributes of the storage class.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 18:26
 */
#include "Location.h"

// Constructor that takes x and y coordinates to set them.
Location::Location(int x, int y){
	this->x = x;
	this->y = y;
}

// Accessor methods for X and Y coordinates.
int Location::ReadX(){
	return x;
}
int Location::ReadY(){
	return y;
}