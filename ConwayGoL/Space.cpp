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