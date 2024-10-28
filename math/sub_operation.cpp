#include "sub_operation.h"

int sub_operation::calculate(int a, int b) const
{
	if (b == 0) {
		return a;
	}
	else {
		return calculate(a, b - 1) - 1;
	}
}
