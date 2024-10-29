#include <iostream>
#include <string>
#include <sstream>
#include "calculator.h"

int main()
{
    for (int d = 0; d <= 1; d = d) {
        std::cout << "What should be calculated? ";
        std::string input;
        std::getline(std::cin, input);
        calculator calculator;
        std::cout << calculator.calculate(input);
        std::cout << "\n\n";
    }
}
