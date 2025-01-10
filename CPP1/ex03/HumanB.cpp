#include "HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
}
