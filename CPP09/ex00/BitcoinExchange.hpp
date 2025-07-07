#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <exception>
#include <iomanip>
#include <sstream>
#include <cmath>

class BitcoinExchange
{
private:
	std::map<int, double> _data;
	void fill_data(void);
public:
	BitcoinExchange(char *fileName);
	BitcoinExchange(const BitcoinExchange& other);
	~BitcoinExchange();

	BitcoinExchange& operator=(const BitcoinExchange& other);
	
};
