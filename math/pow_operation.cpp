#include "pow_operation.h"
#include "mul_operation.h"

int pow_operation::calculate(int a, int b) const
{
	if (b == 0) {
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
