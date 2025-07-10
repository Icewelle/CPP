#pragma once

#include <stack>
#include <iostream>

class RPN {
	private:
		std::stack<int>	_data;
	public:
		RPN(void);
		RPN(const RPN& other);
		~RPN(void);
	
		RPN&	operator=(const RPN& other);
		void	fill_data(int nb);
		int		operation(int opera);
		int		get_result(void);
};