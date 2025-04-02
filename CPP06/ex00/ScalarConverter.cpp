#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal) {
	double d;
	char c;
	int i;
	float f;
	if (literal.length() == 1 && !std::isdigit(literal[0])) {
        c = literal[0];
        i = static_cast<int>(c);
        f = static_cast<float>(c);
        d = static_cast<double>(c);
	} else {
		d = std::atof(literal.c_str());
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<float>(d);
	}
	std::cout << "char: ";
	if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max() || std::isnan(d)) {
		std::cout << "impossible";
	} else if (isascii(static_cast<int>(c)) && isprint(static_cast<int>(c))) {
		std::cout << "'" << c << "'";
	} else if (isascii(static_cast<int>(c)) && !isprint(static_cast<int>(c))) {
		std::cout << "non displayable";
	}
	std::cout << std::endl;
	
	std::cout << "int: ";
	if (d <= std::numeric_limits<int>::max() && d >= std::numeric_limits<int>::min()) {
		std::cout << i;
	} else {
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << std::fixed;

	std::cout << "float: ";
	std::cout << std::setprecision(2)<< f << "f";
	std::cout << std::endl;

	std::cout << "double: ";
	std::cout << std::setprecision(2) << d;
	std::cout << std::endl;
}