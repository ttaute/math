#include "doctest.h"
#include "..\math_core\tet_operation.h"
#include <iostream>

TEST_SUITE("tet_operation") {
	TEST_CASE("calculate") {
		tet_operation op;
		SUBCASE("0 t 0 = 0") {
			CHECK(op.calculate(0, 0) == 1);
		}
		SUBCASE("2 t 1 = 2") {
			CHECK(op.calculate(2, 1) == 2);
		}
		SUBCASE("2 t 4 = 256") {
			CHECK(op.calculate(2, 4) == (2 * 2) * (2 * 2) * (2 * 2) * (2 * 2));
		}
		SUBCASE("3 t 3 = 19683") {
			CHECK(op.calculate(3, 3) == (3 * 3 * 3) * (3 * 3 * 3) * (3 * 3 * 3));
		}
		SUBCASE("int_a_negative") {
			// should fail due to "a" containing a negative add operation
			CHECK_THROWS_AS(op.calculate(-3, 3), std::runtime_error);
		}
		SUBCASE("int_b_negative") {
			// This should fail because this implementation is recursive and it fails at negative numbers
			CHECK_THROWS_AS(op.calculate(2, -4), std::runtime_error);
		}
		SUBCASE("all_ints_negative") {
			// same as above
			CHECK_THROWS_AS(op.calculate(-3, -3), std::runtime_error);
		}
	}
}