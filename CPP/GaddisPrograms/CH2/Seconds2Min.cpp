// This program converts seconds to minutes and seconds. 
// It uses integer division and the modulus operator. 

#include <iostream>
using namespace std;

int main()
{
    int totalSec, // # of sec to be converted
        minutes,         // # of minutes in totalSec
        seconds;         // # of seconds remaining

    cout << "Input total seconds: " << endl;
    cin >> totalSec; 
    // Calculate the number of minutes
    minutes = totalSec / 60;  

    // Calculate the remaining seconds
    seconds = totalSec % 60; 

    // Display the results 
    cout << totalSec << " seconds is equivalent to "; 
    cout << minutes << " minutes and "; 
    cout << seconds << " seconds. \n"; 

    return 0;
}

/*

new trick! we have 
multi line comments!!! fuck yea!

 */ 
