#include "doctest.h"
#include "..\math_core\calculator.h"

TEST_SUITE("calculator") {
	TEST_CASE("calculate") {
		calculator calc;
		SUBCASE("add") {
			CHECK(calc.calculate("   2+ 3  ") == 5);
		}
		SUBCASE("sub") {
			CHECK(calc.calculate("8-6") == 2);
		}
		SUBCASE("mul") {
			CHECK(calc.calculate("4     *                                   60") == 240);
		}
		SUBCASE("div") {
			CHECK(calc.calculate("                                       42 / 7 ") == 6);
		}
		SUBCASE("pow") {
			CHECK(calc.calculate("4 ^4                                        ") == 256);
		}
		SUBCASE("tet") {
			CHECK(calc.calculate("3                   t                   3") == 19683 );
		}
		SUBCASE("undefined") {
			CHECK_THROWS_AS(calc.calculate("53 v 4"), std::invalid_argument);
		}
		SUBCASE("trash") {
			CHECK_THROWS_AS(calc.calculate("2+ehiuoufhegdisuegpiue"), std::invalid_argument);
			CHECK_THROWS_AS(calc.calculate("ehiuoufhegdisuegpiue+2"), std::invalid_argument);
			CHECK_THROWS_AS(calc.calculate("ehiuoufhegdisuegpiue+bsrugbsourjg"), std::invalid_argument);
		}
	}
}