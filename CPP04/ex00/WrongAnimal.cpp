#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->_type = "Definitly not a cat.";
	std::cout << "It's not a cat." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "This not cat is gone." << std::endl;
	std::cout << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other)
		_type = other._type;
	return (*this);
}

std::string WrongAnimal::getType(void) const {
	return (this->_type);
}


void	WrongAnimal::makeSound(void) const {
	std::cout << "What the not cat says ?" << std::endl;
	std::cout << std::endl;
}