#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string &fileName) {
	std::ifstream	file(fileName);
	if (!file)
		return;
	std::string	line;
	std::string key, value_str;
	while (getline(file, line)) {
		for (int i = 0; i < 2; ++i) {
			key.erase(0, key.find_first_not_of(" \t"));
			key.erase(key.find_last_not_of(" \t") + 1);
			value_str.erase(0, value_str.find_first_not_of(" \t"));
			value_str.erase(value_str.find_last_not_of(" \t") + 1);

			double value = std::atof(value_str.c_str());
			_data[key] = value;
		}
	}
}

BitcoinExchange::~BitcoinExchange() {}