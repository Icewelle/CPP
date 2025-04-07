#include "utils.hpp"

Base	*generate(void) {
	switch (std::rand() % 3)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	default:
		return (new C);
		break;
	}
}

void	identify(Base *p) {
	A *tempA = dynamic_cast<A*>(p);
	if (tempA) {
		std::cout << "it's a class A\n";
		return;
	}
	B *tempB = dynamic_cast<B*>(p);
	if (tempB) {
		std::cout << "it's a class B\n";
		return;
	}
	C *tempC = dynamic_cast<C*>(p);
	if (tempC) {
		std::cout << "it's a class C\n";
		return;
	}
	std::cout << "No class was found it's probsbly a Base class\n";
	return;
}

void	identify(Base &p) {
	try {
		A& tempA = dynamic_cast<A&>(p);
		std::cout << "It's a class A\n";
		(void)tempA;
		return;
	} catch (...) {}

	try {
		B& tempB = dynamic_cast<B&>(p);
		std::cout << "It's a class B\n";
		(void)tempB;
		return;
	} catch (...) {}

	try {
		C& tempC = dynamic_cast<C&>(p);
		std::cout << "It's a class C\n";
		(void)tempC;
		return;
	} catch (...) {}
}