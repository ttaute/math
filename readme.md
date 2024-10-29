# Math program

This program takes 2 numbers together by incrementing or decrementing by 1.<br>
Every operation on top of a base operation (addition/subtraction) calls 
the base function to accomplish their tasks.

## Currently supported operations:

+: Addition<br>
-: Subtraction<br>
\*: Multiplication<br>
^: Exponentation<br>
t: Tetration (labeled as t because ↑ is not part of default Windows keyboard layouts or non-Unicode character sets)

In progress:

/: Division (bug: negative numbers always result in -1 due to it being the return value) 

# Build process

## Cloning the repository
Type `git clone https://github.com/ttaute/math` in your shell or click on "Code", then on one of the options in here.

## Building the program
The main building environment used here is Visual Studio 2022. It will give you the least amount of pain.<br>
Simply open up the project and press F5 (or Alt > Debug > Start (without) Debugging if your keyboard has no function keys).<br>

### Alternate build process
Alternatively, you could try building with another C++ compiler. You need to include every .cpp file in your build command however.<br>
Most likely, the file inclusion is going to be `math/*.cpp` or `math\*.cpp` for you.

#### Requirements for your C++ compiler
It needs to support:<br>
* `#pragma once` (should be supported by most modern compilers)
* The headers iostream, memory, sstream and string

## Building the code documentation
This program uses Doxygen to generate the code documentation.
A Doxyfile is already provided in this repository.

To build it, type the following into your shell: `doxygen Doxyfile`

Alternatively, open the file into the Doxygen wizard and pick your working and output directories.

It will generate HTML documentation and manpages.

## License
This program is licensed unter the MIT License.

A copy of it can be found under LICENSE.