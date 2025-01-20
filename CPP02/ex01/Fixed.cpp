#include "Fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &value) {
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

Fixed::Fixed(const int value) : _value(value) {
	std::cout << "Int constructor called" << std::endl;
	_value = value << _fractional;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _fractional));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignement called" << std::endl;
	if (this != &other) {
		this->setRawBits(other.getRawBits());
	}
	return (*this);
}

int		Fixed::getRawBits(void) const {
	return (_value);
}

void	Fixed::setRawBits(int const raw) {
	_value = raw;
}


float Fixed::toFloat(void) const {
	return (static_cast<float>(_value) /  (1 << _fractional));
}

int Fixed::toInt(void) const {
	return (_value >> _fractional);
}

std::ostream& operator<<(std::ostream&os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}