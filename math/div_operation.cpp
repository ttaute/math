#include "div_operation.h"
#include "sub_operation.h"
#include <iostream>

int div_operation::calculate(int a, int b) const
{
	if (a < 0) {
		/// Currently, this is the only possible answer for negative numbers.
		/// This is not what for example -8/2 should output.
		return -1;
	}
	else if (b == 0) {
		throw std::runtime_error("Division by 0 error");
	}
	else if (a == 0) {
		return 0;
	}
	else if (a == b) {
		return 1;
	}
	else if (b == 1) {
		return a;
	}
	else {
		sub_operation op;
		return 1 + calculate(op.calculate(a, b), b);
	}
}
