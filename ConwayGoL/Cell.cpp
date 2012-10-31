/*  Description: Cell class definition for 2-dimensions. It has knowledge of its 8 neighbor cells. Main purpsose
 *				 is a storage class for the information relating to the cells status with relation to its neighbor
 *				 cells.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 03:56
 *  Modified:	 31 October 2012 03:56
 */

#include "Cell.h"
using namespace std;

// Default constructor 
Cell::Cell(void){

}

// Default deconstructor
Cell::~Cell(){};

// Updates cell status to one of the enumerated types that are pre-defined
// Parameter s is the current status of the cell that should override the previous cell status
void Cell::UpdateCellStatus(enum Status s){
	stats = s;
}