#include "sub_operation.h"
#include <iostream>

int sub_operation::calculate(int a, int b) const
{
	if (b < 0) {
		throw std::runtime_error("Number b is negative");
	}
	if (b == 0) {
		return a;
	}
	else {
		return calculate(a, b - 1) - 1;
	}
}
