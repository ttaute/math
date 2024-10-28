#pragma once
#include <string>
#include <sstream>

class calculator {
	public:
		/// @brief Takes an input string and puts it through the
		/// calculator::calculate function.
		/// @param input The string put in from the prompt in main.cpp
		/// @returns result of calculation
		int calculate(std::string input);
};
