#include "add_operation.h"
#include <iostream>

int add_operation::calculate(int a, int b) const
{
	if (b < 0) {
		throw std::runtime_error("Number b is negative");
	}
	else if (b == 0) {
		return a;
	}
	else {
		int result = calculate(a, b - 1);
		return result + 1;
	}
}
