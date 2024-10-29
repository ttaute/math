# How this program works

## In the beginning, there was a `main.cpp` living peacefully, able to be compiled by itself...

First (in main.cpp), it asks what equation this program is to go through.
Then it grabs the input and stores it in the `input` variable.

## And then the classes and custom includes attacked the `main` nation...

Then it sets a variable of type `calculator` named `calculator`. If you know how a C++ compiler
would handle it in an empty `main.cpp`, you would know that this simply wouldn't work due to
`calculator` being undefined, or in simpler terms, the compiler does not know what the type
`calculator` is.

It now branches to the `calculator.h` header file included at the beginning of `main.cpp`.
This includes a class named calculator which defines an integer named calculate
with the argument of the string `input`.

This also now means that `calculator` is now a valid instruction for the compiler.

## A long series of instructions stemming from a `std::cout`? Really?

Now a `std::cout` is called with the output of the calculate instruction of `input`. Here, code
starts running from `calculator.cpp`. It includes the headers for the definition of `calculate`,
as well as the headers for the operator factory, the base definition of an operator and
the operators themselves.

The function `calculator::calculator` starts with the declaration of the integers `a`, `b` and `m` 
and the character `c`. Then it takes the input from back in `main.cpp` and processes it through the
`std::istringstream` function and stores the result in `strstream`. It then gets split up into
a, c and b. Now a shared pointer of operation named op gets declared and 
then set to `operator_factory_::getInstance` pointing to `create` with an argument of `c`.

## The operator factory, where all operators are manufactured

