#include "BitcoinExchange.hpp"

static int check_key(std::string &key) {
	std::string::iterator it = key.begin();
	std::string::iterator end = key.end();
	std::string tmp;
	int i = 0;
	
	while (it != end) {
		if (*it == '-') {
			++i;
		}
		tmp = key.substr(0, *it);
		key.erase(*it);
	}
	if (i != 3)
		throw (std::invalid_argument("Error: wrong date format"));
	return (std::atoi(tmp.c_str()));
}

void	BitcoinExchange::fill_data(void) {
	std::ifstream file("data.csv");
	std::string	line;

	while (getline(file, line)) {
		size_t	delimiterPos = line.find(',');
		if (delimiterPos == std::string::npos)
			throw (std::invalid_argument("Error: parsing: missing delimiter"));
		std::string tmp_key = line.substr(0, delimiterPos);
		int key;
		try {
			key = check_key(tmp_key);
		} catch (...) {
			std::cerr << "erreur" << std::endl;
		}
        std::string value = line.substr(delimiterPos + 1);
		value.erase(value.find_last_not_of("\t\n\r\f\v") + 1);
		try {
			double val = std::atof(value.c_str());
			_data.insert(std::make_pair(key, val));
		} catch (std::invalid_argument &e) {
			std::cerr << "Error: filling _data: bad value\n";
		}
	}
}


BitcoinExchange::BitcoinExchange(char *fileName) {
	std::ifstream	file(fileName);
	if (!file) {
		std::cerr << "Error: couldn't open file during creation\n";
		return;
	}
	try {
		fill_data();
	} catch (std::invalid_argument &e) {
		std::cerr << e.what() << '\n';
	}
}

BitcoinExchange::~BitcoinExchange() {}