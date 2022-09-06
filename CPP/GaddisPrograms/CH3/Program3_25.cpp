// Program 3-25
// This program displays the user's name surrounded by stars. 
// It uses the + operator and several string class memeber functions. 
#include <iostream>
#include <string>

using namespace std; 

int main()
{
    string  firstName, 
            lastName,
            fullName, 
            stars; 
    int numStars; 

    cout << "Please enter your fist name: "; 
    getline(cin, firstName); 

    cout << "Please enter your last name: "; 
    getline(cin, lastName); 

    fullName = firstName + " " + lastName; 

    // .length() is a function that assigns the number of characters
    numStars = fullName.length(); 
    cout << "The length of your name + 1 space: \n";
    cout << numStars; 
    // Assigns the variable the numStars value of stars 
    stars.assign(numStars, '*'); 

    cout << endl;
    cout << stars       << endl; 
    cout << fullName    << endl; 
    cout << stars       << endl;  

    return 0; 

}