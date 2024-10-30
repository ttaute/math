#pragma once
#include "operation.h"

class div_operation : public operation {
	public:
		/// @brief Takes two numbers and applies the operation.
		/// @param a First number, 
		/// @param b Second number
		/// @returns The division operation in div_operation.cpp
		int calculate(int a, int b) const override;
};