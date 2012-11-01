/*  Description: Space definition for the setting of the location with reference to the GameMap and the
 *				 creation of a cell for each space within the constructor.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 18:26
 *  Modified:	 01 November 2012 03:36
 */
#include "Space.h"

// Constructor for Space identification number is set by parameter i.
Space::Space(int i){
	sID = i;
	sCell = new Cell();
}

// Deconstructor
Space::~Space(){
	// Do something
}

// Set Space location from the parameters row and column by creating a new location object.
void Space::SetSpaceLocation(int row, int col){
	this->sLoc = new Location(row,col);
}