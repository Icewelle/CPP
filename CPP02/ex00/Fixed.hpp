#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_value;
	static const int _fractional;
public:
	Fixed();
	Fixed(const Fixed &value);
	~Fixed();

	Fixed& operator=(const Fixed& other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif