#include "main.hpp"

int main()
{
	Cat i;
	Dog j;

	std::cout << i.getType() << std::endl;
	std::cout << i.getIdea(5) << std::endl;
	std::cout << std::endl;

	std::cout << j.getType() << std::endl;
	std::cout << j.getIdea(3) << std::endl;
	return 0;
}