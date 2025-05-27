#pragma once

#include <map>
#include <iostream>
#include <fstream>

class BitcoinExchange
{
private:
	std::map<std::string, double> _data;
public:
	BitcoinExchange(std::string &fileName);
	~BitcoinExchange();
};


