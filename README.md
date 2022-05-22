# Learning C ++
- Books: 
> Progamming Principles and Practice Using C++ <br>
>> `Bjarne Stroustup`<br>

> C ++ Early Objects<br>
>> `Tony Gaddis`

# Create Project and Run Project 
- Create `source file`: `filename.cpp`
- Commandline:
  - Name your execution file 
    - `g++ filename.cpp -o Newfilename.exe`
    - if you do not rename the default is `a.exe`
  - Run file:
    - `Newfilename.exe` 

# Source Code, Object Code, & Executable Code 
- Write 
  - `Source code` in `source file` 
- Processing 
  - Translates C++ to `Machine Lang`. 
  - <ins>1st phase</ins>:
    - `Preprocessor` reads source code
      - Searches for line begining with `(#)`
      - these lines contain comands/directives 
  - <ins>Next phase</ins>:
    - `Comipler` steps through preprocessed code 
      - translates the source code into the appropriate Machine Lang. 
      - Uncovers synax errors in the progam
      - if no errors the compiler stores the progam `object code/object file`translated into machine lang. 
      -" Compiler Generates Object File " 
  - <ins>Last Phase</ins>: 
    - The compiler did not store any Run-time library programs 
    - `Linker`: 
      - combines the object file with the needed library routines 
    - When complete a `executable file` is created
- `Run-Time Library`
  - collection of code 
  - E.g.: 
    - Hardware specific code for displaying messages 
    - reading input from keyboard
    - math functions 
- `Executable file`: 
  - contains machine lang. or `executable code` ready to run

  ### Preprocessor < Compiler < Linker < Execute file


