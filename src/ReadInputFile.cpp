/*
 * ReadInputFile.cpp
 *
 *  Created on: Jul 12, 2014
 *      Author: james
 */
#include "ReadInputFile.h"
#include <string>
#include <sstream>

ReadInputFile::ReadInputFile(const char *idf){
	file.exceptions(std::ifstream::badbit);
	input_data_file = idf;

	std::string line;
	int row, col, num;

	try{
		file.open(input_data_file, std::ifstream::in);

		std::getline(file,line);
		std::stringstream linestream(line);
		linestream>>row>>col;

		fMatrix = new Matrix(row,col);

		for(char c = file.get(); file.good(); c = file.get()){
			if(c!=' ' && c!='\n'){
				fMatrix->AddMatrixData(c-'0');
			}
//			std::cout<<c; // ensure read in of data is valid
		}

//		std::cout<<"\n\n"<<row<<":"<<col<<std::endl; // ensure read of row/col is good
//		fMatrix->PrintMatrix(); // ensure push to matrix data is good
	}
	catch(std::ifstream::failure &e){
		std::cerr<< "Exception opening/reading/closing file"<<std::endl;
	}
}

ReadInputFile::~ReadInputFile(){
	if(file.is_open()) file.close();
	delete[] fMatrix;
}

