#include "doctest.h"
#include "..\math_core\add_operation.h"
#include <iostream>

TEST_SUITE("add_operation") {
	TEST_CASE("calculate") {
		add_operation op;
		SUBCASE("0 + 0 = 0") {
			CHECK(op.calculate(0, 0) == 0);
		}
		SUBCASE("1 + 1 = 2") {
			CHECK(op.calculate(1, 1) == 1 + 1);
		}
		SUBCASE("a + 0 = a") {
			CHECK(op.calculate(5, 0) == 5 + 0);
		}
		SUBCASE("6 + 4 = 10") {
			CHECK(op.calculate(6, 4) == 6 + 4);
		}
		SUBCASE("large_int") {
			CHECK(op.calculate(2304, 767) == 2304 + 767);
		}
		SUBCASE("int_a_negative") {
			CHECK(op.calculate(-9, 5) == -9 + 5);
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