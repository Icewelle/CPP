#include "Fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &value) {
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
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
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw) {
	_value = raw;
}
