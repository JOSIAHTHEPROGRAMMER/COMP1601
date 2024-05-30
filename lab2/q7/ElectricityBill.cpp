/*

Question 7:Write a program, ElectricityBill, which calculates the electricity
bill for a customer. The program requests the previous meter reading and the
current reading. The difference in the two readings gives the number of units of
electricity used. The customer pays 20 cents for each unit plus a fixed charge
of $25.00.

Your program should output the number of units used by the customer and the
amount the customer must pay, appropriately labelled.


*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int previousReading = 0, currentReading = 0, unitsUsed = 0;

  float unitCharge = 0.20, fixedCharge = 25.00;

  double amountDue;

  cout << "Enter the previous meter reading: ";
  cin >> previousReading;

  cout << "Enter the current meter reading: ";
  cin >> currentReading;

  unitsUsed = currentReading - previousReading;

  amountDue = (unitsUsed * unitCharge) + fixedCharge;

  cout << "Number of units used: " << unitsUsed << endl
       << "Total amount to be paid: $" << setprecision(2) << fixed << amountDue << endl;

  return 0;
}
