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
		UpdateSpaceLocation(i, ComputeRow(i),ComputeCol(i));
	}
}

// Deconstructor to remove memory leaks. I believe there may be one concerning the vector assignment
// however, I don't leave any pointers hanging. Vector copy constructor is the main reason for this.
GameMap::~GameMap(){
	//Do something
}

// Computes the row for the space location. This is done by taking the id of the space, and making sure
// that it is greater than the mSize. if it is not, then we know which row it is in, otherwise continue
// checking by increment of the row counter until it fails.
int GameMap::ComputeRow(int id){
	for(int i=1; i<=mSize; i++){
		if(!(id>=mSize))
			return i;
	}
}

// Computes the col for the space location. This is done by checking if id>=mSize. if it is take the
// id%mSize and return it as the column. Otherwise just return the id.
int GameMap::ComputeCol(int id){
	if(id>=mSize)
		return id%mSize;
	else
		return id;
}

// Updates the location in the space object stored in the vector.
void GameMap::UpdateSpaceLocation(int id, int row, int col){
	mSpaces[id]->SetSpaceLocation(row,col);
}

