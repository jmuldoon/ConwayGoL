/*
 * Matrix.cpp
 *
 *  Created on: Jul 12, 2014
 *      Author: james
 */
#include "Matrix.h"

Matrix::Matrix(size_t rows, size_t cols): mRows(rows), mCols(cols), mData(rows * cols){

}

//double& Matrix::operator()(size_t i, size_t j){
//    return mData[i * mCols + j];
//}
//
//double Matrix::operator()(size_t i, size_t j) const{
//    return mData[i * mCols + j];
//}



