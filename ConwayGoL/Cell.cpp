/*  Description: Cell class definition for 2-dimensions. It has knowledge of its 8 neighbor cells. Main purpsose
 *				 is a storage class for the information relating to the cells status with relation to its neighbor
 *				 cells.
 *  Author:		 James Muldoon
 *  Created:	 31 October 2012 03:56
 */

#include "Cell.h"
using namespace std;

// Default constructor 
Cell::Cell(Neighbor &sNeighbor){
	UpdateCellStatus(DEAD);
	csNeighbor = &sNeighbor;
}

// Default deconstructor
Cell::~Cell(){
	// Do something
}

// Updates cell status to one of the enumerated types that are pre-defined
// Parameter s is the current status of the cell that should override the previous cell status
void Cell::UpdateCellStatus(STATUS status_){
	this->status = status_;
}

// Accessor method for reading the cell's status.
//STATUS Cell::CheckCellStatus(){
int Cell::CheckCellStatus(){
	return this->status;
}

//// Checks cell neighbor's statuses and returns the number of alive cells.
//void Cell::CheckCellNeighbors(){
//	livingCellCount = 0;
//	for(int i=0,j=0; i<3; i++,j++){
//		if(neighbors[i][j].stats == ALIVE){
//			// Checks the neighbor cell with the current and makes sure they are not the same
//			if(&neighbors[1][1] != this){
//				++livingCellCount;
//			}
//		}
//	}
//	return cnt;
//}

// Accessor methods for cell id.
void Cell::SetCellID(int id){
	cID = id;
}
int Cell::GetCellID(){
	return cID;
}