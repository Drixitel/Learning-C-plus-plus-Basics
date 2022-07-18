// This program demonstrates that characters are actually
// stored internally by their ASCII integer value. 
// ASCII: American Standard Code for Info Interchange
// E.g: 65 = A and 66 = B 

#include <iostream>
using namespace std;

int main()
{
    char letter; 

    cout << "The following are stored characters"; 
    cout << " called on by number storage." << endl;
    
    letter = 65;
    cout << letter << endl; 
    
    letter = 69; 
    cout << letter << endl;
    return 0;
}