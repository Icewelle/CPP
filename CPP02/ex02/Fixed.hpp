#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_value;
	static const int _fractional;
public:
	Fixed();
	Fixed(const Fixed &value);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed&	operator=(const Fixed& other);
	bool	operator>(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;
	int		operator+(const Fixed& other) const;
	int		operator-(const Fixed& other) const;
	float	operator*(const Fixed& other) const;
	float	operator/(const Fixed& other) const;
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed& min(Fixed& fixed1, Fixed& fixed2);
	static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
	static Fixed& max(Fixed& fixed1, Fixed& fixed2);
	static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif