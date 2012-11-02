/*  Description: Space definition for the setting of the location with reference to the GameMap and the
 *				 creation of a cell for each space within the constructor.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 18:26
 */
#include "Space.h"

// Constructor for Space identification number is set by parameter i. 3rd and 4th parameter are the row and
// column for the location of the space with reference tot he Game Map.
Space::Space(int id, int size, int x, int y){
	sID = id;
	mSize = size;
	SetSpaceLocation(x,y);
	sNeighbor = new Neighbor(id, *sLoc);
	sNeighbor->UpdateCenterNeighbors(size);
	sCell = new Cell(*sNeighbor);
}

// Deconstructor
Space::~Space(){
	// Do something
}

// Set Space location from the parameters row and column by creating a new location object.
void Space::SetSpaceLocation(int row, int col){
	this->sLoc = new Location(row,col);
}