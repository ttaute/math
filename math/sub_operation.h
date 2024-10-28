#pragma once
#include "operation.h"

class sub_operation : public operation {
	public:
		/// @brief Takes two numbers and applies the operation.
		/// @param a First number, 
		/// @param b Second number
		/// @returns The subtraction operation in sub_operation.cpp
		int calculate(int a, int b) const override;
};