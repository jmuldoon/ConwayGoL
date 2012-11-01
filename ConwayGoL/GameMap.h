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

	void UpdateSpaceLocation();

private:
	int mSize, nSpaces;
	vector<Space*> mSpaces;
};

#endif //GAMEMAP_H
