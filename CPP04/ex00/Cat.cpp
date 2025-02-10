#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << std::endl;
	std::cout << "A CAT IS BORN, HUMANS BOW TO YOUR NEWLY BORN RULER THIS INSTANT !!!" << std::endl;
	std::cout << std::endl;
}

Cat::~Cat() {
	std::cout << "Today is a sad day. One of our rulers is dead, pray for his magnificient sould to rest in peace in Cat's heaven. ε/̵͇̿̿/’̿’̿ ̿(◡︵◡)" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Mew ฅ^•ﻌ•^ฅ" << std::endl;
	std::cout << "*He is so cute, how could you say no to him*" << std::endl;
	std::cout << std::endl;
}
