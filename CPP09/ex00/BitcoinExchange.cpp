#include "BitcoinExchange.hpp"

static float check_value(std::string value) {
	std::istringstream iss(value);
    double d;
    char c;

    if (!(iss >> d))
        return -1;
    if (iss >> c)
        return -1;
	//round value to 2 decimals so calculation is more acurrate with given data.
    return (std::atof(value.c_str()));
}

static int check_date(std::string year, std::string month, std::string day) {
	std::string::iterator yearIT = year.begin();
	std::string::iterator yearEnd = year.end();
	std::string::iterator monthIT = month.begin();
	std::string::iterator monthEnd = month.end();
	std::string::iterator dayIT = day.begin();
	std::string::iterator dayEnd = day.end();

	while (yearIT != yearEnd) {
		if (!isdigit(*yearIT))
			return (-3);
		++yearIT;
	}
	while (monthIT != monthEnd) {
		if (!isdigit(*monthIT))
			return (-3);
		++monthIT;
	}
	while (dayIT != dayEnd) {
		if (!isdigit(*dayIT))
			return (-3);
		++dayIT;
	}
	//verifier valeur (12 mois, 31 jours max)
	return (0);
}

static int check_key(std::string key) {
	std::string::iterator it = key.begin();
	std::string::iterator end = key.end();
	int i = 0;
	std::string year;
	std::string month;
	std::string day;
	
	while (it != end) {
		if (*it == '-') {
			if (i == 0)
				year = key.substr(0, key.find('-'));
			else if (i == 1)
				month = key.substr(0, key.find('-'));
			++i;
			key.erase(0, key.find('-') + 1);
		}
		++it;
	}
	if (i != 2)
		return (-1);
	day = key.substr(0, key.length());
	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
		return (-2);
	int test = check_date(year, month, day);
	if ( test == -3)
		return (-3);
	std::string date = year + month + day;
	return (std::atof(date.c_str()));
}

void	BitcoinExchange::fill_data(void) {
	std::ifstream file("data.csv");
	std::string	line;

	getline(file, line);
	if (line != "date,exchange_rate")
		throw (std::invalid_argument("Error: parsing: database: wrong format in line : "));
	while (getline(file, line)) {
		size_t	delimiterPos = line.find(',');
		if (delimiterPos == std::string::npos)
			throw (std::invalid_argument("Error: parsing: database: missing delimiter"));
		int key = check_key(line.substr(0, delimiterPos));
		if (key < 0)
			throw (std::invalid_argument("Error: parsing: database: wrong date format"));
		std::string value = line.substr(delimiterPos + 1);
		float val = check_value(value);
		if (val < 0.00)
            throw (std::invalid_argument("Error: parsing: database: number is not positive"));
        _data.insert(std::make_pair(key, val));
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
	//parsing test.txt and compare each line with key (date) 
}

BitcoinExchange::~BitcoinExchange() {}