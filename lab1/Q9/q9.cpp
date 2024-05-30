// // Question 8: The length of a room is 40 feet. The width of the room is 30
// feet. Write a program to calculate how many 2 feet x 2 feet tiles are
// required to tile the room (as a whole number).

#include <iostream>

using namespace std;

int main() {

  int years = 5, months = years * 12;
  double principal = 150000.00, annualRate = 8.0,
         simpleInterest = (principal * annualRate * years) / 100.0,
         totalAmount = principal + simpleInterest,
         monthlyPayment = totalAmount / months;

  cout << "Total interest paid over " << years << " years: $" << simpleInterest
       << "\nTotal amount to be repaid over " << years << " years: $" << totalAmount 
       << "\nMonthly payment: $" << monthlyPayment << endl;

  return 0;
}
