#include "doctest.h"
#include "..\math_core\sub_operation.h"
#include <iostream>

TEST_SUITE("sub_operation") {
	TEST_CASE("calculate") {
		sub_operation op;
		SUBCASE("0 - 0 = 0") {
			CHECK(op.calculate(0, 0) == 0);
		}
		SUBCASE("2 - 1 = 1") {
			CHECK(op.calculate(2, 1) == 2 - 1);
		}
		SUBCASE("a - 0 = a") {
			CHECK(op.calculate(8, 0) == 8 - 0);
		}
		SUBCASE("large_int") {
			CHECK(op.calculate(2392, 875) == 2392 - 875);
		}
		SUBCASE("int_a_negative") {
			CHECK(op.calculate(-64, 111) == -64 - 111);
		}
		SUBCASE("int_b_negative") {
			// This should fail because this implementation is recursive and it fails at negative numbers
			CHECK_THROWS_AS(op.calculate(63, -40), std::runtime_error);
		}
		SUBCASE("all_ints_negative") {
			// same as above
			CHECK_THROWS_AS(op.calculate(-32, -11), std::runtime_error);
		}
	}
}
