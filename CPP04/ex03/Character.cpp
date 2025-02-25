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
}

std::string const &Character::getName() const {
	return (_name);
}

void Character::equip(AMateria *m) {
	bool	isFull;

	isFull = false;
	for (int i = 0; i < 4; ++i) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			isFull = true;
			break;
		}
	}
	if (isFull)
		std::cout << _name << "'s is full\n";
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "inventory only have 4 slot (0 to 3) please try again\n";
		return;
	}
	//floor ?
	if (_inventory[idx]) {
		_inventory[idx] = NULL;
	}
}