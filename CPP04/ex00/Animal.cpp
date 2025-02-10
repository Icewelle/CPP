#include "Animal.hpp"

Animal::Animal() {
	this->_type = "mmhh, I wonder what kind of animal is that...";
	std::cout << "What did you create ?!" << std::endl;
}


Animal::~Animal() {
	std::cout << "thankfully that thing is dead !" << std::endl;
	std::cout << std::endl;
}


std::string Animal::getType(void) const {
	return (this->_type);
}


void	Animal::makeSound(void) const {
	std::cout << "*you hear an indescriptible noise coming from that thing*" << std::endl;
	std::cout << "Maybe you should run ?" << std::endl;
	std::cout << std::endl;
}