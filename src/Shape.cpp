/*
 * Shape.cpp
 *
 *  Created on: Jul 12  2014
 *      Author: james
 */

#include "Shape.h"

Glider::Glider( char x, char y ) {
    xCoord = x;
    yCoord = y;
    height = GLIDER_SIZE;
    width = GLIDER_SIZE;
    figure = new char*[GLIDER_SIZE];
    for ( char i = 0; i < GLIDER_SIZE; i++ ) {
        figure[i] = new char[GLIDER_SIZE];
    }
    for ( char i = 0; i < GLIDER_SIZE; i++ ) {
        for ( char j = 0; j < GLIDER_SIZE; j++ ) {
            figure[i][j] = '.';
        }
    }
    figure[0][1] = 'X';
    figure[1][2] = 'X';
    figure[2][0] = 'X';
    figure[2][1] = 'X';
    figure[2][2] = 'X';
}

Glider::~Glider() {
    for ( char i = 0; i < GLIDER_SIZE; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}

LightWSS::LightWSS( char x, char y ) {
	xCoord = x;
	yCoord = y;
	height = LIGHTWSS_HEIGHT;
	width = LIGHTWSS_WIDTH;
	figure = new char*[LIGHTWSS_HEIGHT];
	for ( char i = 0; i < LIGHTWSS_HEIGHT; i++ ) {
		figure[i] = new char[LIGHTWSS_WIDTH];
	}
	for ( char i = 0; i < LIGHTWSS_HEIGHT; i++ ) {
		for ( char j = 0; j < LIGHTWSS_WIDTH; j++ ) {
			figure[i][j] = '.';
		}
	}
	figure[0][1] = 'X';
	figure[0][4] = 'X';
	figure[1][0] = 'X';
	figure[2][0] = 'X';
	figure[2][4] = 'X';
	figure[3][0] = 'X';
	figure[3][1] = 'X';
	figure[3][2] = 'X';
	figure[3][3] = 'X';
}

LightWSS::~LightWSS() {
    for ( char i = 0; i < LIGHTWSS_WIDTH; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}

Blinker::Blinker( char x, char y ) {
    xCoord = x;
    yCoord = y;
    height = BLINKER_HEIGHT;
    width = BLINKER_WIDTH;
    figure = new char*[BLINKER_HEIGHT];
    for ( char i = 0; i < BLINKER_HEIGHT; i++ ) {
        figure[i] = new char[BLINKER_WIDTH];
    }
    for ( char i = 0; i < BLINKER_HEIGHT; i++ ) {
        for ( char j = 0; j < BLINKER_WIDTH; j++ ) {
            figure[i][j] = 'X';
        }
    }
}

Blinker::~Blinker() {
    for ( char i = 0; i < BLINKER_HEIGHT; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}

Toad::Toad( char x, char y ) {
    xCoord = x;
    yCoord = y;
    height = TOAD_HEIGHT;
    width = TOAD_WIDTH;
    figure = new char*[TOAD_HEIGHT];
    for ( char i = 0; i < TOAD_HEIGHT; i++ ) {
        figure[i] = new char[TOAD_WIDTH];
    }
	for (char i = 0; i < TOAD_HEIGHT; i++) {
		for (char j = 0; j < TOAD_WIDTH; j++) {
			figure[i][j] = '.';
		}
	}

    figure[0][1] = 'X';
    figure[0][2] = 'X';
	figure[0][3] = 'X';
	figure[1][0] = 'X';
	figure[1][1] = 'X';
	figure[1][2] = 'X';
}

Toad::~Toad() {
    for ( char i = 0; i < TOAD_WIDTH; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}

Beacon::Beacon( char x, char y ) {
    xCoord = x;
    yCoord = y;
    height = BEACON_SIZE;
    width = BEACON_SIZE;
    figure = new char*[BEACON_SIZE];
    for ( char i = 0; i < BEACON_SIZE; i++ ) {
        figure[i] = new char[BEACON_SIZE];
    }
	for (char i = 0; i < BEACON_SIZE; i++) {
		for (char j = 0; j < BEACON_SIZE; j++) {
			figure[i][j] = '.';
		}
	}

    figure[0][0] = 'X';
	figure[0][1] = 'X';
	figure[1][0] = 'X';
	figure[1][1] = 'X';

	figure[2][2] = 'X';
	figure[2][3] = 'X';
	figure[3][2] = 'X';
	figure[3][3] = 'X';
}

Beacon::~Beacon() {
    for ( char i = 0; i < BEACON_SIZE; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}

Pulsar::Pulsar( char x, char y ) {
    xCoord = x;
    yCoord = y;
    height = PULSAR_SIZE;
    width = PULSAR_SIZE;
    figure = new char*[PULSAR_SIZE];
    for ( char i = 0; i < PULSAR_SIZE; i++ ) {
        figure[i] = new char[PULSAR_SIZE];
    }
	for (char i = 0; i < PULSAR_SIZE; i++) {
		for (char j = 0; j < PULSAR_SIZE; j++) {
			figure[i][j] = '.';
		}
	}

	//NW Quad
    figure[0][2] = 'X';
	figure[0][3] = 'X';
	figure[0][4] = 'X';
	figure[2][0] = 'X';
	figure[2][5] = 'X';
	figure[3][0] = 'X';
	figure[3][5] = 'X';
	figure[4][0] = 'X';
	figure[4][5] = 'X';
	figure[5][2] = 'X';
	figure[5][3] = 'X';
	figure[5][4] = 'X';
	//SW Quad
	figure[7][2] = 'X';
	figure[7][3] = 'X';
	figure[7][4] = 'X';
	figure[8][0] = 'X';
	figure[8][5] = 'X';
	figure[9][0] = 'X';
	figure[9][5] = 'X';
	figure[10][0] = 'X';
	figure[10][5] = 'X';
	figure[12][2] = 'X';
	figure[12][3] = 'X';
	figure[12][4] = 'X';
	//NE Quad
	figure[0][8] = 'X';
	figure[0][9] = 'X';
	figure[0][10] = 'X';
	figure[2][7] = 'X';
	figure[2][12] = 'X';
	figure[3][7] = 'X';
	figure[3][12] = 'X';
	figure[4][7] = 'X';
	figure[4][12] = 'X';
	figure[5][8] = 'X';
	figure[5][9] = 'X';
	figure[5][10] = 'X';
	//SE Quad
	figure[7][8] = 'X';
	figure[7][9] = 'X';
	figure[7][10] = 'X';
	figure[8][7] = 'X';
	figure[8][12] = 'X';
	figure[9][7] = 'X';
	figure[9][12] = 'X';
	figure[10][7] = 'X';
	figure[10][12] = 'X';
	figure[12][8] = 'X';
	figure[12][9] = 'X';
	figure[12][10] = 'X';
}

Pulsar::~Pulsar() {
    for ( char i = 0; i < PULSAR_SIZE; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}


// Still Life Shapes
Block::Block( char x, char y ) {
    xCoord = x;
    yCoord = y;
    height = BLOCK_SIZE;
    width = BLOCK_SIZE;
    figure = new char*[BLOCK_SIZE];
    for ( char i = 0; i < BLOCK_SIZE; i++ ) {
        figure[i] = new char[BLOCK_SIZE];
    }
    for ( char i = 0; i < BLOCK_SIZE; i++ ) {
        for ( char j = 0; j < BLOCK_SIZE; j++ ) {
            figure[i][j] = '.';
        }
    }
    figure[0][0] = 'X';
    figure[0][1] = 'X';
    figure[1][0] = 'X';
    figure[1][1] = 'X';
}

Block::~Block() {
    for ( char i = 0; i < BLOCK_SIZE; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}

Beehive::Beehive( char x, char y ) {
    xCoord = x;
    yCoord = y;
    height = BEEHIVE_HEIGHT;
    width = BEEHIVE_WIDTH;
    figure = new char*[BEEHIVE_HEIGHT];
    for ( char i = 0; i < BEEHIVE_HEIGHT; i++ ) {
        figure[i] = new char[BEEHIVE_WIDTH];
    }
	for (char i = 0; i < BEEHIVE_HEIGHT; i++) {
		for (char j = 0; j < BEEHIVE_WIDTH; j++) {
			figure[i][j] = '.';
		}
	}
    figure[0][1] = 'X';
	figure[0][2] = 'X';
	figure[1][0] = 'X';
	figure[1][3] = 'X';
	figure[2][1] = 'X';
	figure[2][2] = 'X';
}

Beehive::~Beehive() {
    for ( char i = 0; i < BEEHIVE_WIDTH; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}

Loaf::Loaf( char x, char y ) {
    xCoord = x;
    yCoord = y;
    height = LOAF_SIZE;
    width = LOAF_SIZE;
    figure = new char*[LOAF_SIZE];
    for ( char i = 0; i < LOAF_SIZE; i++ ) {
        figure[i] = new char[LOAF_SIZE];
    }
    for ( char i = 0; i < LOAF_SIZE; i++ ) {
        for ( char j = 0; j < LOAF_SIZE; j++ ) {
            figure[i][j] = '.';
        }
    }
    figure[0][1] = 'X';
    figure[0][2] = 'X';
    figure[1][0] = 'X';
    figure[1][3] = 'X';
    figure[2][1] = 'X';
    figure[2][3] = 'X';
    figure[3][2] = 'X';
}

Loaf::~Loaf() {
    for ( char i = 0; i < LOAF_SIZE; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}

Boat::Boat( char x, char y ) {
    xCoord = x;
    yCoord = y;
    height = BOAT_SIZE;
    width = BOAT_SIZE;
    figure = new char*[BOAT_SIZE];
    for ( char i = 0; i < BOAT_SIZE; i++ ) {
        figure[i] = new char[BOAT_SIZE];
    }
    for ( char i = 0; i < BOAT_SIZE; i++ ) {
        for ( char j = 0; j < BOAT_SIZE; j++ ) {
            figure[i][j] = '.';
        }
    }
    figure[0][0] = 'X';
    figure[0][1] = 'X';
    figure[1][0] = 'X';
    figure[1][2] = 'X';
    figure[2][1] = 'X';
}

Boat::~Boat() {
    for ( char i = 0; i < BOAT_SIZE; i++ ) {
        delete[] figure[i];
    }
    delete[] figure;
}
