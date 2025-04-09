#include <ctime>
#include "utils.hpp"
#include "Base.hpp"

int main(void) {
	std::srand(std::time(0));

	Base *test = generate();
	Base &test2 = *generate();
	identify(test);
	identify(*test);
	identify(test2);
	delete test;
	delete &test2;
}