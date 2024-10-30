#include "doctest.h"
#include "..\math_core\pow_operation.h"
#include <iostream>

TEST_SUITE("pow_operation") {
	TEST_CASE("calculate") {
		pow_operation op;
		SUBCASE("0 ^ 0 = 0") {
			CHECK(op.calculate(0, 0) == 1);
		}
		SUBCASE("2 ^ 1 = 2") {
			CHECK(op.calculate(2, 1) == 2);
		}
		SUBCASE("large_exponent") {
			CHECK(op.calculate(2, 10) == 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2);
		}
		SUBCASE("large_base") {
			CHECK(op.calculate(16, 3) == 16 * 16 * 16);
		}
		SUBCASE("int_a_negative") {
			// should fail due to "a" containing a negative add operation
			CHECK_THROWS_AS(op.calculate(-7, 3), std::runtime_error);
		}
		SUBCASE("int_b_negative") {
			// This should fail because this implementation is recursive and it fails at negative numbers
			CHECK_THROWS_AS(op.calculate(2, -8), std::runtime_error);
		}
		SUBCASE("all_ints_negative") {
			// same as above
			CHECK_THROWS_AS(op.calculate(-4, -3), std::runtime_error);
		}
	}
}