#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << std::endl;
	std::cout << "A CAT IS BORN, HUMANS BOW TO YOUR NEWLY BORN RULER THIS INSTANT !!!" << std::endl;
	std::cout << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	_brain = new Brain(*other._brain); // Deep copy of Brain
    std::cout << "Dog copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Today is a sad day. One of our rulers is dead, pray for his magnificient sould to rest in peace in Cat's heaven. ε/̵͇̿̿/’̿’̿ ̿(◡︵◡)" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other) {
        Animal::operator=(other); // Copy base class part
        delete _brain; // Delete existing Brain
        _brain = new Brain(*other._brain); // Deep copy of Brain
    }
    return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Mew ฅ^•ﻌ•^ฅ" << std::endl;
	std::cout << "*He is so cute, how could you say no to him*" << std::endl;
	std::cout << std::endl;
}

const std::string &Cat::getIdea(int i) const {
	return (_brain->getIdea(i));
}
