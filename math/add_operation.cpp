#include "add_operation.h"

int add_operation::calculate(int a, int b) const
{
	if (b == 0) {
		return a;
	}
	else {
		return calculate(a, b - 1) + 1;
	}
}
