#include <memory>
#include <string>
#include <sstream>
#include "calculator.h"
#include "operator_factory.h"
#include "operation.h"
#include "add_operation.h"
#include "sub_operation.h"
#include "mul_operation.h"
#include "div_operation.h"
#include "pow_operation.h"
#include "tet_operation.h"

int calculator::calculate(std::string input)
{
    int a, b, m;
    char c;
    std::istringstream strstream(input);
    strstream.exceptions(std::ios::failbit);
    try {
        strstream >> a >> c >> b;
    }
    catch (const std::exception& ex) {
        throw std::invalid_argument("a or b is not a number");
    }
    std::shared_ptr<operation> op;
    op = operator_factory::getInstance()->create(c);
    m = op->calculate(a, b);
    return m;
}
