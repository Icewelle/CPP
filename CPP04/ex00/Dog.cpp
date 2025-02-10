#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "A stupid being is born, who care" << std::endl;
}

Dog::~Dog() {
	std::cout << "Yeah, that thing ceased to exit, who care" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "WOOF !" << std::endl;
	std::cout << "(ㆆ _ ㆆ)" << std::endl;
	std::cout << std::endl;
}
