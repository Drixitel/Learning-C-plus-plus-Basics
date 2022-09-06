# Learning C ++
- Books: 
> Progamming Principles and Practice Using C++ <br>
>> `Bjarne Stroustup`<br>

> C ++ Early Objects<br>
>> `Tony Gaddis`

Read: 
 - CH1-CH3 (skip 3.12 skim 3.11)
 - CH4: 
   - 4.1, 4.5, 4.7, 4.9, 4.10, 4.13, 4.16
   - skim 4.12
  - CH5:
    - 5.3, 5.10, 5.11, 5.15
  - CH6: 
    - 6.2, 6.3, 6.4, 6.5, 6.7, 6.8, 6.10, 6.11, 6.12, 6.13!, 6.14, 6.18
  - CH7: 
    - skip: 7.13
    - skim: 7.14
  - CH8: 
    - skip: 8.13
  - CH9: SKIP
  - CH10: 
    - All not 10.13

Notes: 
  - learn all types/classes in file (TTree, TH1F, etc.)


# Create Project and Run Project 
1.  Create `source file`: `filename.cpp`
2. Commandline to `Process/Compile` the `Source file`:
    - Name/create your execution file 
      - `g++ filename.cpp -o Newfilename.exe`
      - if you do not rename the default is `a.exe`
    - Run file:
      - `Newfilename.exe` 

# Source Code, Object Code, & Executable Code 
  ### Preprocessor < Compiler < Linker < Execute file
- 1ST: Write/create 
  - `Source code` in `source file` 
  - E.g.: `HelloWorld.cpp` = `Source file` 
    - The code within this file is the source code
- 2ND: Processing Phase
  - Translates C++ to `Machine Lang`. 
  - <ins>1st phase</ins>:
    - `Preprocessor` reads source code
      - Searches for line begining with `(#)`
        - these lines contain comands/directives that cause the preprocessor to amend/process the code in some way
  - <ins>Next phase</ins>:
    - `Comipler` steps through preprocessed code 
      - translates the source code into the appropriate Machine Lang. 
      - Uncovers synax errors in the progam
      - if no errors the compiler `stores` the progam `object code/object file` translated into machine lang. 
      -" Compiler Generates Object File " 
      - E.g.: `HelloWorld.obj`
  - <ins>Last Phase</ins>: 
    - The compiler did not store any Run-time library programs 
    - `Linker`: 
      - combines the object file with the needed library routines 
    - When complete a `executable file` is created
    - E.g.: `HelloWorld.exe`
- `Run-Time Library`
  - collection of code 
  - E.g.: 
    - Hardware specific code for displaying messages 
    - reading input from keyboard
    - math functions 
- `Executable file`: 
  - contains machine lang. or `executable code` ready to run




