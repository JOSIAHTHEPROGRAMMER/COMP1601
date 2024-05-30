/*

Question 8: Write a program called CurrencyConverter. The user is asked to enter the amount of money in Trinidad
and Tobago dollars (TTD). The program then outputs a conversion table for the user using the
following currencies: US dollar (USD), Canadian dollar (CAN) and Euros (EUR). Use the exchange rates
in the following table.


*/

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  float USDToTTD = 6.80, CANToTTD = 5.28, EURToTTD = 7.77;

  double amountTTD;

  cout << "Enter the amount in Trinidad and Tobago dollars (TTD): $";
  cin >> amountTTD;

  double amountUSD = amountTTD/ USDToTTD,
         amountCAN = amountTTD/ CANToTTD,
         amountEUR = amountTTD/ EURToTTD;

 
  cout << fixed << setprecision(2); 
  cout << "\nConversion Table:" << endl;
  cout << "---------------------------------" << endl;
  cout << "TTD: $" << amountTTD << endl;
  cout << "USD: $" << amountUSD << endl;
  cout << "CAN: $" << amountCAN << endl;
  cout << "EUR: €" << amountEUR << endl;

  return 0;
}