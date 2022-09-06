// Program 3-26
// This program uses cin >> to read a word into a C-string

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std; 

int main()
{
    // const = qualifier
    // doesn't allow the program to change the value 
    const int SIZE = 12; 
    
    char name1[SIZE], // name is set of 12 memory cells
         name2[SIZE],
         name[SIZE],
         fullname[SIZE]; // name is set of 12 memory cells

    cout << "Please enter your first name: \n"; 
    // to prevent buffer overload use setw() or cin.width()
    // cin >> setw(SIZE) >> name; 
    cin.width(SIZE); 
    cin >> name; 

    cout << " Hello, " << name << endl; 

    // Required to pause the program 
    cin.get();

    cout << "Please enter your full name: \n"; 
    // to remove the need for space skips and setw() use: 
    cin.getline(fullname, SIZE);

    cout << " Hello, " << fullname << endl; 
    
    cout << "The following are examples of string copy: \n"; 
    
    strcpy(name1, name); 
    cout << "name1 now hold the sting: " << name1 << endl; 

    strcpy(name1, "Ada"); 
    cout << "name1 now hold the sting: " << name1 << endl; 

    strcpy(name2, name1); 
    cout << "name2 now ALSO hold the sting: " << name2 << endl; 


    return 0; 
}