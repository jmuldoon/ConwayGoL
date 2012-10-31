/*  Description: GameMap class declaration. Stores location, and map instantiation capability.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 03:14
 *  Modified:	 31 October 2012 03:14
 */
#ifndef GAMEMAP_H 
#define GAMEMAP_H
#include "Cell.h"
using namespace std;

class GameMap{
public:
	GameMap(void);
private:
	Cell space;
};

#endif //GAMEMAP_H
