#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::~Weapon() {}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return (_type);
}
