// Program 3-19
// This program illustrates how the showpoint, setprecision, and 
// fixed manipulators operate both individually and when used together. 

#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
    double x = 6.0; 


    cout << "This is how value x = 6.0 is stored but prints:  \n";
    cout << x << endl; 

    cout << "We define showpoint on x to show all decimal zeros: \n";
    cout << showpoint << x << endl; 

    cout << "We define set(2) to reduce it to 2 characters: \n";
    cout << setprecision(2) << x << endl; 

    cout << "We define fixed on x to change the 2 characters to decimal specific: \n";
    cout << fixed << x << endl;
    
    return 0; 
}