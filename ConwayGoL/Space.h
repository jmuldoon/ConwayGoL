/*  Description: Space class declaration. This class designates a location on the GameMap that can have a
 *				 cell object.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 18:26
 */

#ifndef SPACE_H 
#define SPACE_H
#include "Cell.h"
#include "Location.h"
#include "Neighbor.h"
using namespace std;

class Space{
public: 
	// Constructor takes an integer value to set the sID of the space. Location will be updated as well at
	// this time. MapSize is also passed in as an int. 3rd and 4th parameter are the row and column for
	// the location of the space with reference tot he Game Map.
    Space(int, int, int, int);

    // Destructor 
    ~Space();

private:
	// Accessor method for setting the location of the space.
	void SetSpaceLocation(int, int);

	int mSize;				// Map size constraint. Allows for easier manipulation and updating.
	int sID;				// Space identification number.
	Neighbor *sNeighbor;	// the sID for each space is stored in this object.
	Cell *sCell;			// Space cell.
	Location *sLoc;			// Space location with reference to the map.
};

#endif //SPACE_H