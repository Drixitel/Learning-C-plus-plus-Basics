// This program demonstrates overflow and underflow. 

#include <iostream>
using namespace std;

int main()
{
    // Set intVar to the max value a short int can hold 
    short intVar = 32767; 

    // Set floatVar to a number too small to fit in a float 
    float floatVar = 3.0E-47; 

    // Display intVar
    cout << "Original value of intVar   " << intVar << endl; 

    // Add 1 to intVar to make it overflow 
    intVar = intVar + 1; 
    cout << "intVar after overflow (add 1)     " << intVar << endl; 

    // Add 1 again to intVar to make it overflow 
    intVar = intVar + 1; 
    cout << "intVar after  2nd overflow (add 1)     " << intVar << endl; 

    // Subtract 1 from intVar to make it overflow again 
    intVar = intVar -2; 
    cout << "intVar after 2nd overflow (subt. 2)  " << intVar << endl; 

    // Display floatVar
    cout << "Value of very tiny floarVar  " << floatVar; 

    return 0; 
}