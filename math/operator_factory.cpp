#include "operator_factory.h"
#include "calculator.h"
#include "operation.h"
#include "add_operation.h"
#include "sub_operation.h"
#include "mul_operation.h"
#include "div_operation.h"
#include "pow_operation.h"
#include "tet_operation.h"

std::shared_ptr<operator_factory> operator_factory::getInstance()
{
	static std::shared_ptr<operator_factory> instance = std::make_shared<operator_factory>();
	return instance;
}

std::shared_ptr<operation> operator_factory::create(char c)
{
	std::shared_ptr<operation> op;
	switch (c)
	{
	case '+':
		op = std::make_unique<add_operation>();
		break;
	case '-':
		op = std::make_unique<sub_operation>();
		break;
	case '*':
		op = std::make_unique<mul_operation>();
		break;
	case '/':
		op = std::make_unique<div_operation>();
		break;
	case '^':
		op = std::make_unique<pow_operation>();
		break;
	case 't':
		op = std::make_unique<tet_operation>();
		break;
	default:
		throw std::runtime_error("Invalid operator");
		break;
	}
	return op;
}
