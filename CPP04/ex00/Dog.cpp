#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "A stupid being is born, who care" << std::endl;
}

Dog::Dog(const Dog &other) {
	*this = other;
}

Dog::~Dog() {
	std::cout << "Yeah, that thing ceased to exit, who care" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "WOOF !" << std::endl;
	std::cout << "(ㆆ _ ㆆ)" << std::endl;
	std::cout << std::endl;
}
