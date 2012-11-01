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

