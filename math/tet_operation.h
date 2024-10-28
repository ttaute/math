#pragma once
#include "operation.h"

class tet_operation : public operation {
	public:
		/// @brief Takes two numbers and applies the operation.
		/// @param a First number, 
		/// @param b Second number
		/// @returns The tetration operation in tet_operation.cpp
		int calculate(int a, int b) const override;
};