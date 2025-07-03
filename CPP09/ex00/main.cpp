#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

static bool args(int argc, char **argv) {
	if (argc != 2)
		return (std::cerr << "Error: wrong format: './btc [file_name]'\n", false);
	std::ifstream file(*argv);	
	if (!file)
		return (std::cerr << "Error: couldn't open file\n", false);
	return (true);
}

int	main(int argc, char **argv) {
	if (!args(argc, argv))
		return (false);
	BitcoinExchange	test(argv[1]);
}