// This program demo's tuples 

#include <iostream>
#include <tuple>
#include <string>

using namespace std; 

int main()
{
    tuple <string, int, char> tup_name1; 
    tuple <string, string, int> tup_name2; 

    // Declaring tuples or Initialize with make_tuple()
    tup_name1 = make_tuple("Welcome", 2, 'a'); 
    tup_name2 = make_tuple("Eddy", "Classes", 9); 

    int i,j; 

    string s1,s2,s3; 

    char c1; 

    // Ties s1 = Welcome and so on with tie()
    tie(s1, j, c1) = tup_name1; 

    cout << "The tuple values for the first tuple is as follows: \n";
    
    cout << s1 << " " << j << " " << c1 << endl; 

    tie(s1,s2,i) = tup_name2; 

    cout << "The tuple values for the second tuple is as follows: \n";

    cout << s1 << " " << s2 << " " << i << endl; 

    // tuple_cat links the two tuples 
    // stores them in the variable mystr 
    auto mystr = std::tuple_cat (tup_name1, tup_name2); 

    cout << "\n"; 

    cout << "The concatenated tuple using the tuple_cat function() is as follows: \n"; 
    
    // Access the values in the tuple with get()
    // Have not found a method to print whole tuple
    cout << std::get<0>(mystr) << " "; 
    cout << std::get<1>(mystr) << " "; 
    cout << std::get<2>(mystr) << " "; 
    cout << std::get<3>(mystr) << " "; 
    cout << std::get<4>(mystr) << " "; 
    cout << std::get<5>(mystr) << " " << endl; 


    return 0; 
    

}