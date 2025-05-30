#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <exception>
#include <iomanip>
#include <sstream>

class BitcoinExchange
{
private:
	std::map<int, double> _data;
	void fill_data(void);
public:
	BitcoinExchange(char *fileName);
	~BitcoinExchange();
};


