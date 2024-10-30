#pragma once
class operation {
	public:
		/// @brief Placeholder definition for the operations in the headers.
		/// @param a First number
		/// @param b Second number
		/// @returns The appropriate operation.
		virtual int calculate(int a, int b) const = 0;
};