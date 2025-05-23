#include "Animal.hpp"

Animal::Animal() {
	this->_type = "mmhh, I wonder what kind of animal is that...";
	std::cout << "What did you create ?!" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal::~Animal() {
	std::cout << "thankfully that thing is dead !" << std::endl;
	std::cout << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

const std::string &Animal::getType(void) const {
	return (this->_type);
}
