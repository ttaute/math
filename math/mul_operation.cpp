#include "add_operation.h"
#include "mul_operation.h"

int mul_operation::calculate(int a, int b) const
{
	if (b == 0 || a == 0) {
		return 0;
	}
	if (b == 1 || a == 1) {
		return a;
	}
	else {
		add_operation op;
		return op.calculate(calculate(a, b - 1), a);
	}
}
