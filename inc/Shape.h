/*
 * Shape.h
 *
 *  Created on: Jul 12, 2014
 *      Author: james
 */

#ifndef SHAPE_H_
#define SHAPE_H_

struct Shape {
public:
    char xCoord;
    char yCoord;
    char height;
    char width;
    char **figure;
};

// Spaceships Shapes
struct Glider : public Shape {
    static const char GLIDER_SIZE = 3;
    Glider( char x , char y );
    ~Glider();
};

struct LightWSS : public Shape {
    static const char LIGHTWSS_HEIGHT = 4;
    static const char LIGHTWSS_WIDTH = 5;
    LightWSS( char x , char y );
    ~LightWSS();
};


// Oscillator Shapes
struct Blinker : public Shape {
    static const char BLINKER_HEIGHT = 3;
    static const char BLINKER_WIDTH = 1;
    Blinker( char x , char y );
    ~Blinker();
};

struct Toad : public Shape {
    static const char TOAD_HEIGHT = 2;
    static const char TOAD_WIDTH = 4;
    Toad( char x , char y );
    ~Toad();
};

struct Beacon : public Shape {
    static const char BEACON_SIZE = 4;
    Beacon( char x , char y );
    ~Beacon();
};

struct Pulsar : public Shape {
    static const char PULSAR_SIZE = 13;
    Pulsar( char x , char y );
    ~Pulsar();
};

// Still Life shapes
struct Block : public Shape {
    static const char BLOCK_SIZE = 2;
    Block( char x , char y );
    ~Block();
};

struct Beehive : public Shape {
	static const char BEEHIVE_HEIGHT = 3;
	static const char BEEHIVE_WIDTH = 4;
    Beehive( char x , char y );
    ~Beehive();
};

struct Loaf : public Shape {
	static const char LOAF_SIZE = 4;
	Loaf( char x , char y );
    ~Loaf();
};

struct Boat : public Shape {
	static const char BOAT_SIZE = 3;
	Boat( char x , char y );
    ~Boat();
};

#endif /* SHAPE_H_ */
