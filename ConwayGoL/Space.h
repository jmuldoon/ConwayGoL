/*  Description: Space class declaration is derived from GameMap. This class designates a location on the
 *				 GameMap that can have a cell object.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 18:26
 *  Modified:	 31 October 2012 18:26
 */

#ifndef SPACE_H 
#define SPACE_H
#include "Cell.h"
#include "Location.h"
using namespace std;

class Space{
public: 
	// Constructor takes an integer value to set the sID of the space. Location will be updated as well at
	// this time.
    Space(int);

    // Destructor 
    ~Space(); 
private:
	int sID;				// Space identification number.
	Cell *sCell;			// Space cell.
	Location *sLoc;			// Space location with reference to the map.
}; 

#endif //SPACE_H