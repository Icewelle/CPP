#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice &other) : AMateria(other){
}

Ice::~Ice() {
	std::cout << _type << " : Ice destroyer\n";
}

Ice &Ice::operator=(const Ice &other) {
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

std::string const &Ice::getType(void) const {
	return (_type);
}

AMateria *Ice::clone() const {
	return (new Ice(*this));
}