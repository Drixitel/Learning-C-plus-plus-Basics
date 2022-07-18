// This is a Checkpoint problem 2.18 from Gaddis

// Start preprocessor with # 
// Call file iostream to use cout
#include <iostream>

// Call the organization code that tracks names 
//      for iostream
using namespace std;

// Create a function called main that returns an int
int main()

{
    // Define variables
    // Integer (can have negatives)
    int age = 27; // This is an initiation
    // Float with double storage
    double weight = 15.5; 

    // object cout is a stream object 
    // send several variables with << operator
    cout << "My age is " << age;
    cout << " and my weight is " << weight;
    cout << " slugs.";

    //conclude the program by returning an int 
    return 0;
}