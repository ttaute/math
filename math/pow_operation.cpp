#include "pow_operation.h"
#include "mul_operation.h"
#include <iostream>

int pow_operation::calculate(int a, int b) const
{
	if (b < 0) {
		throw std::runtime_error("Number b is negative");
	}
	else if (b == 0) {
		return 1;
	}
	else if (b == 1) {
		return a;
	}
	else {
		mul_operation op;
		return op.calculate(calculate(a, b - 1), a);
	}
}
