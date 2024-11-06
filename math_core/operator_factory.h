#pragma once
#include <memory>
#include "operation.h"

class operator_factory {
public:
	/// @brief Returns the static instance of the operator_factory
	static std::shared_ptr<operator_factory> getInstance();

	/// @brief Creates the correct operation for the given
	/// operator \c c
	/// @param c The operator to construct the operation from (e.g. '+')
	/// @returns The corresponding operation in form of a std::shared_ptr
	std::shared_ptr<operation> create(char c);
};