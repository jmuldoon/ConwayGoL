/*  Description: Cell class declaration for 2-dimensions. It has knowledge of its 8 neighbor cells. Main purpsose
 *				 is a storage class for the information relating to the cells status with relation to its neighbor
 *				 cells.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 03:14
 *  Modified:	 31 October 2012 03:14
 */

#ifndef CELL_H 
#define CELL_H
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
	
	// Checks cell neighbor's statuses and returns the number of alive cells.
	int CheckCellNeighbors();

	// Returns the cell ID
	int GetCellID();

private:
	// Allows for the setting of Cell ID.
	void SetCellID(int);

	// Class attributes.
	enum Status status;		// Enumerated type status keeps track of status of the cell. 
	Cell *neighbors[3][3];	// Array of pointers to Cell objects that neighbor this cell.
	int cID;				// Cell identification number.
}; 

#endif //CELL_H