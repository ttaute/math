#include "doctest.h"
#include "..\math_core\operator_factory.h"
#include "..\math_core\operation.h"
#include "..\math_core\add_operation.h"
#include "..\math_core\sub_operation.h"
#include "..\math_core\mul_operation.h"
#include "..\math_core\pow_operation.h"
#include "..\math_core\div_operation.h"
#include "..\math_core\tet_operation.h"
#include "..\math_core\operation.h"
#include <stdexcept>
#include <ios>
#include <ostream>

template <typename T>
std::ostream& operator<<(std::ostream& stream, std::shared_ptr<T> ptr) {
	return stream << std::hex << static_cast<void*>(ptr.get());
}

TEST_SUITE("operator_factory") {
	TEST_CASE("getInstance") {
		auto instance = operator_factory::getInstance();
		CHECK(instance != nullptr);
		CHECK(operator_factory::getInstance() == instance);
		CHECK(operator_factory::getInstance() == instance);
		CHECK(operator_factory::getInstance() == instance);
	}
	TEST_CASE("create") {
		auto instance = operator_factory::getInstance();
		SUBCASE("add") {
			auto operation = instance->create('+');
			CHECK(std::dynamic_pointer_cast<add_operation>(operation) != nullptr);
		}
		SUBCASE("sub") {
			auto operation = instance->create('-');
			CHECK(std::dynamic_pointer_cast<sub_operation>(operation) != nullptr);
		}
		SUBCASE("mul") {
			auto operation = instance->create('*');
			CHECK(std::dynamic_pointer_cast<mul_operation>(operation) != nullptr);
		}
		SUBCASE("div") {
			auto operation = instance->create('/');
			CHECK(std::dynamic_pointer_cast<div_operation>(operation) != nullptr);
		}
		SUBCASE("pow") {
			auto operation = instance->create('^');
			CHECK(std::dynamic_pointer_cast<pow_operation>(operation) != nullptr);
		}
		SUBCASE("tet") {
			auto operation = instance->create('t');
			CHECK(std::dynamic_pointer_cast<tet_operation>(operation) != nullptr);
		}
		SUBCASE("literally_anything_else") {
			CHECK_THROWS_AS(instance->create(' '), std::invalid_argument);
		}
	}
}