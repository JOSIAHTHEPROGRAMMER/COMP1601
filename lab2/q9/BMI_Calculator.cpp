/*

Question 9: The body mass index (BMI) of an individual is a value derived from the mass (weight) and height of an
individual. It is calculated by taking the weight of a person in kilograms and dividing it by the square
of his/her height in metres.
Write a program which prompts the user to enter the weight (in kilograms) and height (in centimetres)
of a person at the keyboard and then calculates and displays the approximate BMI.


*/

#include <iostream>
#include <cmath> // For pow function

using namespace std;

int main() {
   
    float weightKg, heightCm;

   
    cout << "Enter your weight in kilograms: ";
    cin >> weightKg;

    
    cout << "\nEnter your height in centimeters: ";
    cin >> heightCm;

    
    double heightM = heightCm / 100.0, bmi = weightKg / pow(heightM, 2);

    cout << "\nYour approximate BMI is: " << bmi << endl;

    return 0;
}