// Program 3-24
// This program demonstrates 3 ways to use cin.get()
// to pause the program. 

#include <iostream>
// #include <string>
using namespace std; 

int main()
{
    char ch,
         name[25];

    cout << "This program has paused. Press Enter to continue.";
    cin.get(ch); 

    cout << "It has paused a second time. Please press Enter again."; 
    ch = cin.get();

    cout << "It has paused a third time. Please press Enter again."; 
    cin.get(); 

    cout << "Thank you!\n"; 

    cout <<  "Try sending in a characters with spaces\n";
    cin.get(name, 25);
    cout << name; 

    return 0; 
}
// Breaks if anything other than enter is in cin