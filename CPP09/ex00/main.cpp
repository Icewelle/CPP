#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

static bool args(int argc, char **argv) {
	if (argc != 2)
		return (std::cout << "Error: wrong format: './btc [file_name]'\n", false);
	std::ifstream file(*argv);	
	if (!file)
		return (std::cout << "Error: couldn't open file\n", false);
	return (true);
}

int	main(int argc, char **argv) {
	if (!args(argc, argv))
		return (false);
	
}