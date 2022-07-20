// Program 3-15 Gaddis 
// This program uses setw to display three rows of numbers so they align. 

#include <iostream>
#include <iomanip>  // Header file needed to use setw
using namespace std; 

int main()
{
    int num1 = 2000,    num2 = 3,    num3 = 230, 
        num4 = 10,      num5 = 9,    num6 = 2093, 
        num7 = 390,     num8 = 3094, num9 = 23; 

    // Display the first row of numbers 
    cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl; 

    // setw(6) sets the (MIN) width for the variable following it 
    // 6 = 6 character spaces 
    // They will all be right justified 

    // 2nd row
    cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl; 
    
    // 3rd row
    cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << endl; 

    return 0; 
}