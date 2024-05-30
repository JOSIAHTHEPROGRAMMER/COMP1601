/*

Question 4: The width of a wall in a warehouse is 100 feet, and its height is 12 feet. A gallon of paint can cover
400 square feet. 
Write a program to find out how many gallons of paint are required to paint both
sides of the wall, if two coats of paint are applied (as a whole number).

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
   
    int width = 100, height = 12, paint = 400, area = width * height, totalArea = 2 * 2 * area, gallons = ceil(totalArea / paint);

    
  cout << "The number of gallons of paint required: " << gallons << endl;

    return 0;
}
