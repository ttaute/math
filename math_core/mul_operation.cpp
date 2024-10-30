#include "add_operation.h"
#include "mul_operation.h"
#include <iostream>

int mul_operation::calculate(int a, int b) const
{
	if (b < 0) {
		throw std::runtime_error("Number b is negative");
	}
	else if (b == 0 || a == 0) {
		return 0;
	}
	else if (b == 1) {
		return a;
	}
	else if (a == 1) {
		return b;
	}
	else {
		add_operation op;
		return op.calculate(calculate(a, b - 1), a);
	}
}
