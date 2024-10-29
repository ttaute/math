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
        try {
            std::cout << calculator.calculate(input);
        }
        catch (const std::exception& ex) {
            std::cout << "Error: " << ex.what() << "\n";
        }
        std::cout << "\n\n";
    }
}
