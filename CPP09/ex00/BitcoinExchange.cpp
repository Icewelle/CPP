#include "BitcoinExchange.hpp"

static float check_value(std::string value) {
	std::istringstream iss(value);
    double d;
    char c;

    if (!(iss >> d))
		return -1;
	if (iss >> c)
		return -1;
	float val = std::atof(value.c_str());
    return round(val * 100) / 100.0f;
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
	if (std::atoi(month.c_str()) > 12 || std::atoi(month.c_str()) < 1 || \
		std::atoi(day.c_str()) > 31 || std::atoi(day.c_str()) < 1)
		return (-3);
	switch (std::atoi(month.c_str())) {
		case 2:
			if (std::atoi(day.c_str()) > 29)
				return (-3);
			break;
		case 4:
			if (std::atoi(day.c_str()) > 30)
				return (-3);
			break;
		case 6:
			if (std::atoi(day.c_str()) > 30)
				return (-3);
			break;
		case 9:
			if (std::atoi(day.c_str()) > 30)
				return (-3);
			break;
		case 11:
			if (std::atoi(day.c_str()) > 30)
				return (-3);
			break;
		default:
			break;
	}
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

static int check_key_file(std::string key) {
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
	day = key.substr(0, key.length() - 1);
	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
		return (-2);
	int test = check_date(year, month, day);
	if ( test == -3)
		return (-3);
	std::string date = year + month + day;
	return (std::atof(date.c_str()));
}

void	BitcoinExchange::do_math(int key, float value, std::string date) const {
	if (value > 1000) {
		std::cerr << "Error: value is too big (>1000)\n";
		return;
	}
	std::map<int, float>::const_iterator it = _data.lower_bound(key);

    if (it != _data.end() && it->first == key) {
        std::cout << date << " => " << value << " = " << value * it->second << std::endl;
        return;
    }
    if (it == _data.begin() && it->first > key) {
        std::cerr << "Error: no data available for this date.\n";
        return;
    }
    if (it == _data.end() || it->first > key) {
        --it;
    }

    std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}


void	BitcoinExchange::fill_data(void) {
	std::ifstream file("data.csv");
	std::string	line;

	if (!file) {
		throw (std::invalid_argument("Error: couldn't open: no such file or permission"));
	}
	getline(file, line);
	if (line != "date,exchange_rate")
		throw (std::invalid_argument("Error: parsing: database: wrong format in line : 1"));
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


BitcoinExchange::BitcoinExchange(void) {
	try {
		fill_data();
	} catch (std::invalid_argument &e) {
		std::cerr << "data.csv: " << e.what() << '\n';
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	_data = other._data;
}

BitcoinExchange::~BitcoinExchange() {}


BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other)
		_data = other._data;
	return (*this);
}

void	BitcoinExchange::calculate(std::string filename) const {
	std::ifstream file(filename.c_str());
	if (!file) {
		std::cerr << filename << ": Error: couldn't open: no such file or permission\n";
		return;
	}
	std::string line;
	getline(file, line);
	if (line != "date | value") {
		std::cerr << filename << ": Error: first line is not valid : must be 'date | value'\n";
		return;
	}
	while (getline(file, line)) {
		size_t	delimiterPos = line.find('|');
		if (delimiterPos == std::string::npos)
			std::cerr << filename << ": Error: parsing: missing delimiter\n";
		else {
			int key = check_key_file(line.substr(0, delimiterPos));
			if (key < 0)
				std::cerr << filename << ": Error: parsing: wrong date format\n";
			else {
				std::string value = line.substr(delimiterPos + 1);
				if (*value.begin() != ' ' || value[1] == ' ')
					std::cerr << filename << ": Error: too many/too little space before value\n";
				else {
					float val = check_value(value);
					if (val < 0.00)
						std::cerr << filename << ": Error: parsing: number is not positive\n";
					else
						do_math(key, val, line.substr(0, delimiterPos));
				}
			}
		}
	}
}
