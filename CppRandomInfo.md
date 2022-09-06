# Key Words (reversed words)
- All key words are ALWAYS written in lowercase
  - `using`
  - `namespace`
  - `int`
  - `double`

- Operands
  - Look like terms/ variables
    - Variable must be declared before use
  - math can operate on operands
  - Stored in RAM
- `=`
  - assignment operator 
- Ending with a semicolon `;`: 
  - simialr to a period 
  - marks the end of a statement 
- Objects 
  - `cin >>` (see in): 
    - `object` that takes input form keyboard
  - `cout <<` (see out): 
    - `object` to display messages
# Functions & Member Functions 
- `getline(cin, inputLine)`
  - reads in an entire line, including leading and embedded spaces and stores it in a string obj. 
  - only works for sting obj's not c-strings 
-  `cin.getline(stringArray, sizeofArray)`
    - used for C-strings
    - allows you to read in a string containing spaces, it will continue to read until the max specified characters are used.
    - will read up to one less than number given
    - removes need for `setw()` or `.width()`

- `cin.get();`
  - member function
  - reads a single character & any whitespace 
  - To store the character: 
    - `cin.get(ch);`
    - `ch = cin.get();`
  - Can pause the screen until [ENTER] is pressed 
    - `cin.get();`
    
- `cin.ignore( #integer, character )`
  - tells the `cin` object to skip one or more characters in the keyboard buffer
  - E.g.: 
    - cin.ignore(20,'\n'); 
      - skip the next 20 characters or until '\n' is found which ever is first. 
    - cin.ignore(); 
      - will ignore the very next character

- Proper way to use `cin >>` and `cin.get(ch);`:
  - We MUST use `cin.ignore()`
  - `cin >> number;` // Keyboard buffer collects 
  - `cin.ignore();` // skip the end '\0' 
  - `cin.get(ch);`  // Take the new 


 - `.length()` :
   - same as python len(Variable)
- `.assign( , )` : 
  - lets you assign a set of repeated characters to a string without having to count the characters. 
  - e.g.: 
    - `string  spaces;` // initialize 
    - `spaces.assign(22, ' ');` // assign 22 spaces to spaces
- `rand()` & `srand()` :
  - needs Header file 
  - gives "random" number with seed assignment 
  - use `time(0)` to generate a random number no matter how much it's run


# Manipulators, Directives, Header Files, & Objects
- Directive 
  - #define 
    - used to define variables outside of functions and cause the preprocessor to imidiately change all instances of the defined variable in the code for the definition 
    - not able to change in functions only at define
- Manipulator 
  - `fixed`
    - removes scientific notation
    - fixed point/decimal notation
  - `setw(#)`
    - right justifed #of characters
  - `setprecision(#)`
    - `#` of allowed characters 
  - `showpoint`
    - show zeros after decimal 
  - `left` & `right`
    - justification
- Objects
- Header Files
  - #include <`iostream`>
    - use: cout
  - #include <`iomanip`>
    - To use Stream Manipulators 
    - use: setw(#), setprecision(#)
  - #include <`string`>
    - use: sting objs 
      - e.g.: `string sValue = "Mich Pich";` 
  - #include <`cstdlib`>
    - use: `rand()`, `srand()`
    - generates "random" numbers with seeds 
  - #include <`ctime`>
    - use: `time()`

# Operators 
- Scope operator 
  - double colon 
  - e.g.: `std::Somthing1`
  - "Something1 is in the scope of std" 

# Characters 
- `'\0'` : Null Character 
  - end of strings with `" "`

# Random 
- Concatonate Strings 
  - `word1 = "A ";`
  - `word2 = "dog"; `
  - `sentance = word1 + word2 `
  - output: "A dog"
  - OR: 
    - word1 += word2; // does the same