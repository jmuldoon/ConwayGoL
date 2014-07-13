/*
 * Matrix.cpp
 *
 *  Created on: Jul 12, 2014
 *      Author: james
 */
#include "Matrix.h"
#include <iostream>

Matrix::Matrix(size_t rows, size_t cols): mRows(rows), mCols(cols){}//, mData(rows * cols){}

void Matrix::AddMatrixData(const double data){
	mData.push_back(data);
}

void Matrix::PrintMatrix(){
	for (auto i = mData.begin(); i != mData.end(); ++i) {
		std::cout << *i;
	}
}


