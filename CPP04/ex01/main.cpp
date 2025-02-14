#include "main.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << std::endl;
	std::cout << i->getIdea(5) << std::endl;
	std::cout << std::endl;

	std::cout << j->getType() << std::endl;
	std::cout << j->getIdea(3) << std::endl;
	delete j;//should not create a leak
	delete i;
	return 0;
}