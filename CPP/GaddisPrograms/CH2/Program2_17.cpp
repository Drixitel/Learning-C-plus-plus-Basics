// This program displays the size of various data types.

#include <iostream>
using namespace std;

int main()
{
    long double apple; 

    cout << "The size of an integer is: \t";
    cout << sizeof(int);
    cout << " bytes.\n"; 


    cout << "The size of a long integer is: \t";
    cout << sizeof(long);
    cout << " bytes.\n"; 


    cout << "An apple can be eaten in : \t";
    cout << sizeof(apple);
    cout << " bytes!\n"; 
    cout << "Where apple = long double float.";

    return 0;


}