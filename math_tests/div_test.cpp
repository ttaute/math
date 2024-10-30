#include "doctest.h"
#include "..\math_core\div_operation.h"
#include <iostream>

TEST_SUITE("div_operation") {
	TEST_CASE("calculate") {
		div_operation op;
		SUBCASE("0 / 0 = 0") {
			// should fail because you can't reasonably divide by 0
			CHECK_THROWS_AS(op.calculate(0, 0), std::runtime_error);
		}
		SUBCASE("2 / 1 = 2") {
			CHECK(op.calculate(2, 1) == 2 / 1);
		}
		SUBCASE("18 / 3 = 6") {
			CHECK(op.calculate(18, 3) == 18 / 3);
		}
		SUBCASE("large_int") {
			CHECK(op.calculate(4096, 256) == 4096 / 256);
		}
		SUBCASE("int_a_negative") {
			// should return -1 due to an a < 0 condition being met
			CHECK(op.calculate(-8, 2) == -1);
		}
		SUBCASE("int_b_negative") {
			// This should fail because this implementation is recursive and it fails at negative numbers
			CHECK_THROWS_AS(op.calculate(32, -8), std::runtime_error);
		}
		SUBCASE("all_ints_negative") {
			// should return -1
			CHECK(op.calculate(-44, -11) == -1);
		}
	}
}