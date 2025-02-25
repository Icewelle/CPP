#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria &other) {
	_type = other._type;
}

AMateria::AMateria(std::string const &type) {
	_type = type;
}

AMateria::~AMateria() {
	std::cout << _type << " : materia destroyer\n";
}

AMateria &AMateria::operator=(const AMateria &other) {
	if (this != &other)
		_type = other._type;
	return (*this);
}

std::string const &AMateria::getType(void) const {
	return (_type);
}

AMateria* AMateria::clone() const {
	//je sais pas quoi faire ici
}

void AMateria::use(ICharacter &target) {
	std::cout << "Materia as been used.\n";
}
