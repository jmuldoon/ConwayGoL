/*  Description: GameMap class declaration. Stores location object, and map instantiation capability
 *				 through the use of the constructor. Each location is a space, which is derived from
 *				 the game map super class.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 05:24
 *  Modified:	 31 October 2012 05:24
 */
#ifndef GAMEMAP_H 
#define GAMEMAP_H
#include <vector>
#include "Space.h"
using namespace std;

class GameMap{
public:
	GameMap(int);
	~GameMap();

private:
	// Computes the row the space is currently located in with the use of the mSize for reference and the
	// Space ID (sID).
	int ComputeRow(int);
	
	// Computes the col the space is currently located in with the use of the mSize for reference and the
	// Space ID (sID).
	int ComputeCol(int);

	// Updates the space's location(row,col) for the game map with regards to the map size (mSize). First
	// parameter is the id of the space that is going to be updated for quick reference.
	void UpdateSpaceLocation(int, int, int);

	int mSize, nSpaces;
	vector<Space*> mSpaces;
};

#endif //GAMEMAP_H
