#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <exception>
#include <iomanip>
#include <sstream>
#include <cmath>

class BitcoinExchange {
	private:
		std::map<int, float> _data;
		void	fill_data(void);
		void	do_math(int key, float value, std::string date) const;
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& other);
		~BitcoinExchange();

		BitcoinExchange& operator=(const BitcoinExchange& other);
		void	calculate(std::string filename) const;
};
