/*
 * Matrix.h
 *
 *  Created on: Jul 12, 2014
 *      Author: james
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <cstring>
#include <vector>

class Matrix{
public:
    Matrix(size_t rows, size_t cols);
    void AddMatrixData(const double);
    void PrintMatrix();

private:
    size_t mRows;
    size_t mCols;
    std::vector<double> mData;
};


#endif /* MATRIX_H_ */
