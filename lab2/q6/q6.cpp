/*

Question 6: Write a program which, when executed, produces the following output. Note that the data after the
question mark (shown in bold) must be input by the user at the keyboard.

Hi! What is your first name? Sam
Welcome to C++ programming, Sam!

How old are you, Sam? 22
22. Wow! You are on your way to becoming a young programmer!

So, Sam, where are you from? Trinidad
I have heard that Trinidad is a beautiful place.

*/


#include <iostream>

using namespace std;

int main() {
    
    string firstName, location;

    int age;
  
    cout << "Hi! What is your first name? ";
    cin  >> firstName;
 
    cout << "Welcome to C++ programming, " << firstName << "!\n" 
         << "How old are you, " << firstName << "? ";
    cin  >> age;
   
    cout << age << ". Wow! You are on your way to becoming a young programmer!\n" 
         <<  "So, " << firstName << ", where are you from? ";
    cin  >> location;
 
    cout << "I have heard that " << location << " is a beautiful place." << endl;

    return 0;
}

