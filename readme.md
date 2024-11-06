# Math program

This program takes 2 numbers together by incrementing or decrementing by 1.<br>
Every operation on top of a base operation (addition/subtraction) calls 
the base function to accomplish their tasks.

## Currently supported operations:

+: Addition<br>
-: Subtraction<br>
\*: Multiplication<br>
^: Exponentation<br>
t: Tetration (labeled as t because ↑ is not part of default Windows keyboard layouts or non-Unicode character sets and as such you can not use ↑↑)

In progress:

/: Division (bug: negative numbers always result in -1 due to it being the return value) 

# Build process

## Cloning the repository
Type `git clone https://github.com/ttaute/math` in your shell or click on "Code", then on one of the options in here.

## Building the program
The main building environment used here is Visual Studio 2022. It will give you the least amount of pain.<br>
Simply open up the project and press Ctrl-Shift-B. The output should be under the target folder (by default \x64\Debug).<br>

## Building the code documentation
This program uses Doxygen to generate the code documentation. To build it yourself, type the following into your shell: `doxygen Doxyfile`

Alternatively, open the file into the Doxygen wizard and pick your working and output directories.

It will generate HTML documentation and manpages.

# Badges with barely any value for anything but development
![Can this program compile?](https://github.com/ttaute/math/actions/workflows/msbuild.yml/badge.svg)

# License
This program is licensed under the MIT License.

A copy of it can be found under LICENSE.

# Credits
This program uses [doctest](https://github.com/doctest/doctest) to build unit tests.
