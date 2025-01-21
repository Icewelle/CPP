#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_name("NoName"), _hitPoints(10), _enrgyPoints(10), _damage(0) {
	std::cout << "ClapTrap [" << _name << "] as been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _enrgyPoints(10), _damage(0) {
	std::cout << "ClapTrap [" << _name << "] as been created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap [" << _name << "] as been destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_hitPoints > 0 && _enrgyPoints > 0)
	{
		_enrgyPoints--;
		std::cout << "ClapTrap [" << _name << "] attacks [" << target << "], causing (" << _damage << ") points of damage !" << std::endl;
		std::cout << "(" << _enrgyPoints << ") Energy points left" << std::endl;
	}
	else if (_hitPoints == 0 && _enrgyPoints == 0)
		std::cout << "Cannot attack, no Hit points & Energy points left on CalTrap [" << _name << "]." << std::endl;
	else if (_hitPoints == 0)
		std::cout << "Cannot attack, no Hit points left on ClapTrap [" << _name << "]." << std::endl;
	else if (_enrgyPoints == 0)
		std::cout << "Cannot attack, no Energy points left on ClapTrap [" << _name << "]." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints > 0 && _enrgyPoints > 0)
	{
		_enrgyPoints--;
		std::cout << "ClapTrap [" << _name << "] used 1 energy point to heal (" << amount << ") Hit points" << std::endl;
		std::cout << "(" << _enrgyPoints << ") Energy points left" << std::endl;
	}
	else if (_hitPoints == 0 && _enrgyPoints == 0)
		std::cout << "Cannot repai, no Hit points & Energy points left on CalTrap [" << _name << "]." << std::endl;
	else if (_hitPoints == 0)
		std::cout << "Cannot repair, no Hit points left on ClapTrap [" << _name << "]." << std::endl;
	else if (_enrgyPoints == 0)
		std::cout << "Cannot repair, no Energy points left on ClapTrap [" << _name << "]." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap [" << _name << "] take (" << amount << ") damage" << std::endl;
	if (amount > _hitPoints)
		amount = _hitPoints;
	_hitPoints -= amount;
	std::cout << "(" << _hitPoints << ") Hit points left" << std::endl;
}