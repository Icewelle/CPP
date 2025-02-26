#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = other._inventory[i];
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		if (_inventory[i])
			delete _inventory[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = other._inventory[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; ++i) {
		if (!_inventory[i]) {
			_inventory[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; ++i) {
		if (_inventory[i]) {
			if (_inventory[i]->getType() == type) {
				return (_inventory[i]->clone());
			}
		}
	}
	std::cout << "No materia of type \"" << type << "\" learned.\n";
	return (0);
}