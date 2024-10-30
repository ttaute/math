#include "doctest.h"
#include "..\math_core\mul_operation.h"
#include <iostream>

TEST_SUITE("mul_operation") {
	TEST_CASE("calculate") {
		mul_operation op;
		SUBCASE("0 * 0 = 0") {
			CHECK(op.calculate(0, 0) == 0);
		}
		SUBCASE("2 * 1 = 2") {
			CHECK(op.calculate(2, 1) == 2 * 1);
		}
		SUBCASE("1 * 5 = 5") {
			CHECK(op.calculate(1, 5) == 1 * 5);
		}
		SUBCASE("a * 0 = 0") {
			CHECK(op.calculate(8, 0) == 8 * 0);
		}
		SUBCASE("0 * b = 0") {
			CHECK(op.calculate(0, 7) == 8 * 0);
		}
		SUBCASE("4 * 4 = 16") {
			CHECK(op.calculate(4, 4) == 4 * 4);
		}
		SUBCASE("large_int") {
			CHECK(op.calculate(44, 28) == 44 * 28);
		}
		SUBCASE("int_a_negative") {
			// should fail due to "a" containing a negative add operation
			CHECK_THROWS_AS(op.calculate(-7, 6), std::runtime_error);
		}
		SUBCASE("int_b_negative") {
			// This should fail because this implementation is recursive and it fails at negative numbers
			CHECK_THROWS_AS(op.calculate(33, -8), std::runtime_error);
		}
		SUBCASE("all_ints_negative") {
			// same as above
			CHECK_THROWS_AS(op.calculate(-32, -11), std::runtime_error);
		}
	}
}