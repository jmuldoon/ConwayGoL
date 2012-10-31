/*  Description: Cell class declaration for 2-dimensions. It has knowledge of its 8 neighbor cells. Main purpsose
 *				 is a storage class for the information relating to the cells status with relation to its neighbor
 *				 cells.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 03:14
 *  Modified:	 31 October 2012 03:14
 */

#ifndef Cell_H 
#define Cell_H
using namespace std;

class Cell{
enum Status {DEAD=0, ALIVE};

public: 
	// Default constructor.
    Cell();

    // Destructor 
    ~Cell(); 

	// Updates cell status to one of the enumerated types that are pre-defined.
	void UpdateCellStatus(enum Status);


private:
	// Initialized cell status to dead. Enumerated type is used for future potential expansion of status types.
	enum Status stats;
	Cell *neighbors[3][3];
}; 

#endif //Cell_H