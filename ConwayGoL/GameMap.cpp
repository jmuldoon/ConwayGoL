/*  Description: GameMap class declaration. Stores location, and map instantiation capability.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 05:24
 *  Modified:	 31 October 2012 05:24
 */

#include "GameMap.h"

// Constructor receives the size of the map which will be made square for 2-dimensions. e.g. size^2
GameMap::GameMap(int size){
	mSize = size;			// Map size
	nSpaces = (size*size);	// Number of map spaces

	for(int i=0; i<nSpaces; i++){
		mSpaces.push_back(new Space(i));
	}
}

// Deconstructor to remove memory leaks. I believe there may be one concerning the vector assignment
// however, I don't leave any pointers hanging. Vector copy constructor is the main reason for this.
GameMap::~GameMap(){
	//Do something
}

void GameMap::UpdateSpaceLocation(){
	
}