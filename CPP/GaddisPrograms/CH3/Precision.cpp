// Program 3-17
// This program demonstrates how the setprecision mainupulator 
// affects the way a floating-point value is displayed. 

#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    double num1 = 123.455, num2 = 25.23; 
    double quotient = num1/num2; 

    cout << quotient << endl;
    // Sets numbers allowed to print - does not count decimal
    cout << setprecision(5) << quotient << endl; 
    cout << setprecision(4) << quotient << endl; 
    cout << setprecision(3) << quotient << endl; 
    cout << setprecision(2) << quotient << endl; 
    cout << setprecision(1) << quotient << endl; 

    // Used fixed to set the values after the decimal
    // fixed is order sensitive it must be either b4 the code you want affected
    quotient = quotient * 10000;

    cout << "This is without fixed with set(2): \n";
    cout << setprecision(2) << quotient << endl;

    cout << "This is useing fixed << setprecision(2): \n";
    cout << fixed << setprecision(2) << quotient << endl;


    return 0;
}