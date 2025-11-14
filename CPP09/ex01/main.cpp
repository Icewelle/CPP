#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc < 2)
		return (std::cerr << "Error\n", 1);
	size_t i = 0;
	RPN result;
	std::string input = argv[1];
	while (i < input.size()) {
		
		if (isdigit(input[i])) {
			result.fill_data(input[i] - 48);
		} else if (input[i] == '*' || input[i] == '/' \
			|| input[i] == '+' || input[i] == '-') {
			if (!result.operation(input[i]))
				return (std::cerr << "Error\n", 1);	
		} else {
			return (std::cerr << "Error\n", 1);
		}
		i += 2;
	}
	if (i >= input.size())
		if (input[input.size() - 1] != '+' && input[input.size() - 1] != '-' && input[input.size() - 1] != '*' && input[input.size() - 1] != '/')
			return (std::cerr << "Error\n", 1);
	std::cout << result.get_result() << std::endl;
}