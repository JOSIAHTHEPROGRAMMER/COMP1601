/*

Question 3: (From Lab #1) The width of a room is 30 feet, and its length is 40
feet. Write a program to find out how many 2 feet x 2 feet tiles are required to
tile the room (as a whole number).

*/

#include <iostream>
using namespace std;

int main() {

  int width = 30, length = 40, area = width * length, tile = 4,
      numTiles = area / tile;

  cout << "A room with a width of " << width << " feet and a length of "
       << length << " feet will need " << numTiles
       << " 2 feet x 2 feet tiles to tile the floor.\n";

  return 0;
}