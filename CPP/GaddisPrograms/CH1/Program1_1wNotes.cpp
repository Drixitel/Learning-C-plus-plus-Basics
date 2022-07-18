// Program 1-1 Pg.9
// This program calculates the user's pay.
// Double slash creates comments 


#include <iostream>
//  ABOUT iostream (HEADER FILE):
// # :         initiates the prepocessor 
// include:    '#include' is a directive to include the adjacent file 
// <iostream>: 'iostream' is a file to include 
// iostream:    contains code
//              allows c++ to display output on a screen 
//              & read input from keyboard

// using is also a key word 
using namespace std;
// namespace:   is an oranization of names 
// std:         is a specific namespace that is required 
//              by the program to use any names created by 
//              the HEADER FILE iostream.


int main()
// int:         for integer 
//              it indicates that the function sends an int value
//              back to the operating system when it is finished executing
// int main():  This marks the initiation of a function
// The following is a function named "main"
{
    double hours, rate, pay;

    //Get the number of hours worked.
    cout << "How many hours did you work? ";
    // <<:      This is an operator which sends data to cout
    //          Used this way it is called a stream-insertion operator
    // cout:    This is a stream object bc we sent streams of data to it
    cin >> hours;

    //Get the hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    //Calculate the pay.
    pay = hours * rate; 

    //Display  the pay.
    cout << "You have earned $ " << pay << endl;
    // endl:      This is end-line "stream manipulator"
    //            This tells the program to start a new line
    //            it can be used anywhere outside of quotes 
    //            You can also use \n within the quotes similar to python

    return 0;
    // return 0:  This is triggered because of our function (int)
    //            The program returns an integer to indicate it was successful 
    // 0:         is the usual indicator for success

}