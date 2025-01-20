#include "Fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed() : _value(0) {
}

Fixed::Fixed(const Fixed &value) {
	*this = value;
}

Fixed::Fixed(const int value) : _value(value) {
	_value = value << _fractional;
}

Fixed::Fixed(const float value) {
	_value = roundf(value * (1 << _fractional));
}

Fixed::~Fixed() {
}

Fixed&	Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->setRawBits(other.getRawBits());
	}
	return (*this);
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->getRawBits() != other.getRawBits());
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator>(const Fixed& other) const {
	return (this->getRawBits() > other.getRawBits());
}

int	Fixed::operator+(const Fixed& other) const {
	return (this->toFloat() + other.toFloat());
}

int	Fixed::operator-(const Fixed& other) const {
	return (this->toFloat() - other.toFloat());
}

float	Fixed::operator*(const Fixed& other) const {
	return (this->toFloat() * other.toFloat());
}

float	Fixed::operator/(const Fixed& other) const {
	if (other.getRawBits() == 0)
	{
		std::cerr << "Error : trying to divide by 0" << std::endl;
		return (0);
	}
	return (this->toFloat() / other.toFloat());
}

int		Fixed::getRawBits(void) const {
	return (_value);
}

void	Fixed::setRawBits(int const raw) {
	_value = raw;
}

Fixed&	Fixed::operator++() {
	++_value;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed temp = *this;
	_value++;
	return (temp);
}

Fixed& Fixed::operator--() {
	--_value;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	_value--;
	return (temp);
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

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2) {
	if (fixed1 < fixed2)
		return (fixed1);
	else
		return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2) {
	if (fixed1 < fixed2)
		return (fixed1);
	else
		return (fixed2);
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2) {
	if (fixed1 < fixed2)
		return (fixed2);
	else
		return (fixed1);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2) {
	if (fixed1 < fixed2)
		return (fixed2);
	else
		return (fixed1);
}