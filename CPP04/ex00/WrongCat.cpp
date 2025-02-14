#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "Wrong Cat";
	std::cout << std::endl;
	std::cout << "A non cat is born" << std::endl;
	std::cout << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	*this = other;
}

WrongCat::~WrongCat() {
	std::cout << "That non cat is gone" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "Mew ฅ^•ﻌ•^ฅ" << std::endl;
	std::cout << "*He is so cute, how could you say no to him*" << std::endl;
	std::cout << std::endl;
}