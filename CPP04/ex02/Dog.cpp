#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "A stupid being is born, who care" << std::endl;
}

Dog::Dog(const Dog &other) {
	_type = other._type;
	_brain = other._brain;
}

Dog::~Dog() {
	std::cout << "Yeah, that thing ceased to exit, who care" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other) {
		_type = other._type;
		_brain = other._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "WOOF !" << std::endl;
	std::cout << "(ㆆ _ ㆆ)" << std::endl;
	std::cout << std::endl;
}

const std::string &Dog::getIdea(int i) const {
	return (_brain->getIdea(i));
}