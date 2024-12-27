#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string weapon)
{
	_type = weapon;
}

Weapon::~Weapon() {}

void Weapon::setType(const std::string &type)
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return (_type);
}
