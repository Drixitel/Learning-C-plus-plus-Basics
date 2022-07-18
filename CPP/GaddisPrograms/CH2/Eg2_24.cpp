// This Program is a check point problem from Gaddis 
// 2.24
// This program stores your name, address, and phone #
// in three seperate strings 
// Then displays their contents on the screen 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string  name, 
            address, 
            phoneNumber;

    cout << "State your name: " << endl;
    // New form of input
    // cin >> name; will not work if there is a space
    // instead we use getline to take a string 
    //      from the user
    getline(cin,name);

    cout << "State your adress: " << endl;
    getline(cin,address);

    cout << "State your phone number: "<< endl; 
    getline(cin,phoneNumber);


    cout << "Your Contact information: \n";
    cout << "Name: " << name << endl; 
    cout << "Adress: " << address << endl; 
    cout << "Phone: " << phoneNumber << endl; 

    return 0;

}