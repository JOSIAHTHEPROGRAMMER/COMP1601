// // Question 8: The length of a room is 40 feet. The width of the room is 30 feet. Write a program to calculate how
// many 2 feet x 2 feet tiles are required to tile the room (as a whole number).

#include <iostream>

using namespace std;

int main() {

  int length = 40, width = 30,
      tileLength = 2, tileWidth = 2,
      roomArea = length * width, 
      tileArea = tileLength * tileWidth,
      tilesRequired = roomArea / tileArea;

  cout << "Number of 2 feet x 2 feet tiles required are " << tilesRequired << endl;

  return 0;
}
