/*
 * ReadInputFile.h
 *
 *  Created on: Jul 12  2014
 *      Author: james
 */

#ifndef READINPUTFILE_H_
#define READINPUTFILE_H_

#include "Matrix.h"
#include <iostream>
#include <fstream>

class ReadInputFile {
public:
	ReadInputFile(const char *idf);
	~ReadInputFile();
	Matrix* GetMatrix();

private:
    const char *input_data_file;
    std::ifstream file;
    Matrix *fMatrix;
};


#endif /* READINPUTFILE_H_ */
