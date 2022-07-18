/* 
This program calculates the area of a circle. 
The formula is: 
    Area = PI * radius^2
PI = 3.14159

*/

#include <iostream>
#include <cmath> // Needed for the power function (pow)

using namespace std;

int main()
{
    double  area, 
            radius;

    cout << "Ths program calculates the area of a circle.\n";

    // Get the radius
    cout << "Input the radius of the circle: "; 
    cin >> radius; 

    // Compute & Display area
    area = 3.14159 * pow(radius, 2);

    cout << "The area is " << area << endl;
    
    return 0; 
}