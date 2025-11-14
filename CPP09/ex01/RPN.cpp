#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const RPN& other) {
	_data = other._data;
}

RPN::~RPN(void) {}

RPN&	RPN::operator=(const RPN& other) {
	if (this != &other)
		_data = other._data;
	return (*this);
}

void	RPN::fill_data(int nb) {
	_data.push(nb);
}

int RPN::operation(int opera) {
	if (_data.size() < 2)
		return (false);
	int val1 = _data.top();
	_data.pop();
	int val2 = _data.top();
	_data.pop();

	switch (opera)
	{
	case '*':
		_data.push(val2 * val1);
		break;
	case '/':
		if (val1 == 0)
			return (false);
		else 
			_data.push(val2 / val1);
		break;
	case '+':
		_data.push(val2 + val1);
		break;
	case '-':
		_data.push(val2 - val1);
		break;
	default:
		break;
	}
	return (true);
}

int	RPN::get_result(void)	{
	return (_data.top());
}