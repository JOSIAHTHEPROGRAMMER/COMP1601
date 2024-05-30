/*

Question 5: A delivery truck for a soft drink company can transport 500 cases of soft drink on each trip. Each case
contains 24 bottles. 

The soft drink is sold at $60.00 per case. If the delivery truck makes two trips each
day, and on each trip sells all the cases of soft drink on the truck, write a program to find out the following:

• The number of bottles required each day to produce the soft drinks for the truck,
• The income received each day.

*/

#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int casesPerTrip = 500, bottlesPerCase = 24, 
      tripsPerDay = 2,
      totalCasesPerDay = casesPerTrip * tripsPerDay,
      totalBottlesPerDay = totalCasesPerDay * bottlesPerCase;

  float pricePerCase = 60.00;
  
  double incomePerDay = totalCasesPerDay * pricePerCase;


  cout << "The number of bottles required each day: " << totalBottlesPerDay
       << endl;
  cout << "The income received each day: $" << incomePerDay << endl;

  return 0;
}
