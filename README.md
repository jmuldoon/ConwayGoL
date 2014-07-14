ConwayGoL
=========

Base Source: http://rosettacode.org/wiki/Conway's_Game_of_Life#C.2B.2B

Extension to work for all base test cases in the main. Additionally, the
following configuration files input.csv can be used for dynamic seeding.

An example and detailed explanation is best done through Figure 1:

// Default Matrix Seed
6 6
1 0 1 0 1 1
0 1 1 0 0 1
0 0 0 0 1 1
1 0 1 0 1 1
1 1 1 1 0 0
0 1 1 1 0 1

-Figure 1

The first line of the file should be row column, and must be separated by
white space. The following lines will be what comprise the matrix. For all
1's, there can be considered a living cell within the game 'X'. For all 0's
they will be recorded as being '.' or dead cells/non-existing.

The following definitions found in ConwayGoL.cpp can be adjusted if needed for
larger mapping/start locations of the initial cells as seen in Figure 2.

// Default Values
#define HEIGHT 20
#define WIDTH 20
#define INPUT_DATA_FILE "res/input.csv"
#define GENERATION_COUNT 48
#define X_LOC 0
#define Y_LOC 0

-Figure 2