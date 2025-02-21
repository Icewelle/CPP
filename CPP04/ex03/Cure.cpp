#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(const Cure &other) : AMateria(other){
}

Cure::~Cure() {
	std::cout << _type << " : Cure destroyer\n";
}

Cure &Cure::operator=(const Cure &other) {
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

std::string const &Cure::getType(void) const {
	return (_type);
}

AMateria *Cure::clone() const {
	return (new Cure(*this));
}