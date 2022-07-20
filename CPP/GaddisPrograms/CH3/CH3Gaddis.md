# Gaddis CH3
# Epressions and Interactivity 
# The `cin` Object 
![stuff](KeyboardBuffer.png "cin's Keyboard Buffer")
- `>>`: Stream extraction operator

# No Exponents Please!
- HEADER FILE: <`cmath`>
- C++ does not have an exponent operator 
- Use `library function`: 
  - `pow(a,b)`:
    - Where `a` is raised to `b` i.e $a^b$
    - a & b are arguments 

# Data Type Conversion and Type Casting 
- Data types can change (to be the same) if the user defines variables of different types but interact with operators. 
  - `type coercion`: 
    - The act of forcing the same tpye
    - `promoted`: 
      - changed to a higher rank
    - `demote`: 
      - changed to a lower rank
- A ranking is used to determine the resulting type 
- Highest to Lowest Ranking
  - `long double`
  - `double`
  - `float`
  - `unsigned long `
  - `long`
  - `unsigned int`
  - `int`

## Rules: 
* Rule 1: 
    - `char`, `short`, and `unsigned short` are automatically promoted to `int` values.
      - `char` = 'A' 
      - `short` = 2 byte int type
      - `unsigned short` = 2 byte int 
      - `int` = 4 bytes 
* Rule 2: 
    - When an operator works with two values of different data types, the lower-ranking value is `promoted` to the type of the higherranking value.
    - E.g.: 
      - `int years;` 
      - `double interestRate; `
      - `years * interestRate;` 
        - // B4 operator acts -  years is `promoted` to double
* Rule 3: 
    - When the final value of an expression is assigned to a variable, it will be converted to the data type of that variable.
    - E.g.: 
      - `long int area;` 
      - `int length, width;`
      - `area = length * width;`
        - // length and width are both ints no conversion 
        - // operator acts to multiply 
        - // area is long int so the product is promoted 

# Type Casting 
- Python equivalent: 
  - `x = 5 `
  - `type(x) = 'int'`
  - `x_as_a_string = str(5)`
  - `type(x_as_a_string) = 'str'`

- C++ code: 
  - `static_cast<`DataTpye`>(Value)`
    - Value = variable or literal value we wish to convert
    - DataType = is the target type 
    - E.g.: 
      - `double number = 3.7;`
      - `int val;`
      - `val = static_cast<`int`>(number);`

# C-style and Prestandard C++ Type Cast Expressions 
- One way to convert: `static_cast<`DataTpye`>(Value)`
- Second way (`prefix notation`): 
  - `cout << (int) 2.6;` // Displays integer 2 
  - `intVal = (int)number;` // Assigns intVal the value of number, int converted  
- Third way (`functional notation`) "python-like": 
  - `int(2.6)`
  - `int(number)`
  - `double(Variable)`

# Overflow and Underflow 
- See program 

# Named Constants 
- `const` doble INTEREST_RATE = 0.069; 
- `const`: 
  - a qualifier that tells the computer to make the variable (read-only)
  - if any statement in the program attempts to change its value, an error results when compiled 
  - convention: all UPPER_CASE 
  - requires initilization 
  - E.g.: 
    - NO: 
      - `const` double INTEREST_RATE; 
      - INTEREST_RATE = 0.069; 
    - YES: 
       - ` `const` doble INTEREST_RATE = 0.069;`

# The `#define` Directive 
- `#define` is a directive that uses the preprocessor to define constants  

# Formatting Output 
- HEADER FILE NEEDED: <`iomanip`>
- `setw`: 
  - stream manipulaor 
  - specifying the min number of spaces to use 
  - print fields of specific width 

# The `setprecision` Manipulator 
- HEADER FILE NEEDED: <`iomanip`>
- setprecision(#): 
  - Lets you set the number of values to print 
- Can be used with `fixed` to remove scientific notation 
- E.g.: 
    - `cout << fixed << setprecision(2) << Variable`
    - fixed will remove SN and give 2 decimal points from set()

# The `showpoint` Manipulator
- shows the 0's after the decimal 
# Justify Variables 
- `cout << left << x << endl;` 
- `cout << right << x << endl;` 

#Functions 
- cin.get()
    - Specific to Characters
    - cin.get(Characters, lengthOfCharacters)
        - Does not terminate at a whitespce 
    - cin (>>) terminates at a white space 
- cin.ignore()

