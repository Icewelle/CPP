#pragma once

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cmath>

class ScalarConverter {
	private :
		ScalarConverter();

	public :
		static void convert(const std::string& literal);
};