// This program prints a character from its ASCII code. 
#include <iostream>
using namespace std; 

int main()
{
    int number = 74; 

    // Display the value of the number vairiable 
    cout << "The number is: "; 
    cout << number << endl;

    // Use type cast to display the value of number 
    // converted to the char data type 
    cout << "The associated character from ASCII is: ";
    cout << static_cast<char>(number) << endl;

    return 0; 


}