// Program 3-32
// This program demonstrates what happens in C++ if you 
// try to generate random numbers without setting a 'seed'

#include <iostream>
#include <cstdlib> // Header file to use rand

using namespace std; 

int main()
{
    unsigned seed; // Random generator seed
    int numberInRange10; 


    // Generate and print three random numbers
    cout << "Three rand() values without a seed: \n"; 
    cout << rand() << endl; 
    cout << rand() << endl; 
    cout << rand() << endl; 
    // Result: 
    // each time this runs the same 3 values return
    // 41, 18467, 6334

    // To get new numbers we use srand() function

    // Get a "seed" value from the user
    cout << "Enter a seed value: "; 
    cin >> seed; 

    // Set the random generator seed b4 calling rand()

    srand(seed); 

    // Now generate and print 3 #'s 
    cout << "Three rand() values WITH a seed: \n"; 
    cout << rand() << endl; 
    cout << rand() << endl; 
    cout << rand() << endl;

    // consider the seed to change for every second of the day
    // removing the need to ask the user 
    // Use the time function to get a "seed" value for srand()
    // time(): 
    //      pass 0 to the argument to return the number of seconds
    //      that have elapsed since midnight Jan 1, 1970 
    seed = time(0); 
    srand(seed); 

    // Now generate and print 3 #'s
    cout << "Three rand() values WITH a seed from time(): \n"; 
    cout << rand() << endl; 
    cout << rand() << endl; 
    cout << rand() << endl;

    //Now let's make the range between 0-10 inclusive 
    cout << "Three rand() values within [0-10]: \n";
    numberInRange10 = rand() % 11;  // should be 0-10 modulo
    cout << numberInRange10 << endl; 
    numberInRange10 = rand() % 11;  // should be 0-10 modulo
    cout << numberInRange10 << endl; 
    numberInRange10 = rand() % 11;  // should be 0-10 modulo
    cout << numberInRange10 << endl; 
    return 0; 

}