// This program has a variable.

#include <iostream>
using namespace std;

int main()
{
    // Declare the variable by asigning type integer
    //          aka variable definition
    int number; // if number = # then it would be an initiation 
    
    // Assignment statement with '=' the assignment operator
    number = 5; // This however is an assignment 

    // Another way to write the previous 2 lines: 
    // int number =5;

    cout << "The value of number is \n";
    cout << "number" << endl;

    cout << "The value of number is " << number << endl;

    // Reasign the variable 
    number = 7;

    cout << "Now the value of number is \n";
    cout << number << endl;

    //End function with required return 
    return 0;
}