// Program 3-11 Gaddis 
// This program calculates the area of a circle.
// The formula is: Area = PI * Radius^2 
// PI = 3.14159

#include <iostream>
#include <cmath> // Need the power function 
using namespace std; 

int main()
{
    // const keep PI as it is and does not allow changes 
    const double PI = 3.14159; // PI is a constant 
    double  area,
            raduis;

    cout << "This program calculates the area of a circle.\n\n"; 

    // Get the radius 
    cout << "What is the radius of the cirlce: "; 
    cin >> raduis;

    // Compute and display the area 
    area = PI * pow(raduis, 2); 
    cout << "The area is " << int(area) << " - (int)\n" << endl;
    cout << "The area is " << area << " - (flaot)" <<  endl;

    // Try changing PI - remove comments to see the error
    // PI = PI + 3; 

    return 0; 
}