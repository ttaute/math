#include "tet_operation.h"
#include "pow_operation.h"
#include <iostream>

int tet_operation::calculate(int a, int b) const
{
	if (b < 0) {
		throw std::runtime_error("Number b is negative");
	}
	if (b == 0) {
		return 1;
	}
	else if (b == 1) {
		return a;
	}
	else {
		pow_operation op;
		return op.calculate(calculate(a, b - 1), a);
	}
}
