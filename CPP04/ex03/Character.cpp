#include "Character.hpp"

Character::Character() : _name("Default") {
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
}

Character::Character(const std::string &name) : _name(name) {
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
}

Character::Character(const Character &other) {
	_name = other._name;
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = (other._inventory[i]) ? other._inventory[i]->clone() : NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		delete _inventory[i];
	}
	std::cout << "Chararcter destructor called\n";
}

std::string const &Character::getName() const {
	return (_name);
}

void Character::equip(AMateria *m) {
	int i;
	for (i = 0; i < 4; ++i) {
		if (_inventory[i] == m) {
			std::cout << "Materia is already in inventory\n";
		}
	}
	for (i = 0; i < 4; ++i) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			break;
		}
		if (i == 3)
			std::cout << _name << "'s is full\n";
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "Unequip: inventory only have 4 slot (0 to 3) please try again\n";
		return;
	}
	if (_inventory[idx]) {
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3) {
		std::cout << "Use: inventory only have 4 slot (0 to 3) please try again\n";
		return;
	}
	if (_inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "No materia in inventory slot [" << idx << "]\n";
}

AMateria *Character::getMateria(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "GetMateria: inventory only have 4 slot (0 to 3) please try again\n";
		return (NULL);
	}
	return (_inventory[idx]);
}