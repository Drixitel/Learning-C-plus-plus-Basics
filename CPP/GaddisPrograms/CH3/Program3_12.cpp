// Progarm 3-12 Gaddis 
// This program calcs the area of a circle - and uses #define
// Area = PI * radius^2
// PI = 3.14159 

#include <iostream>
#include <cmath>        // Needed for power function 

using namespace std; 

#define PI 3.14159      // PI is "defined"
// PI is now a text replacer and the compile switches out each instance

int main()
{
    double  area, 
            radius; 

    cout << "Area calculations.\n"; 

    // Get radius
    cout << "What is the radius: "; 
    cin >> radius; 

    // Compute and display area
    area = PI * pow(radius, 2); 
    cout << "The area is : " << area << endl; 

    return 0; 
}