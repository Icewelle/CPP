#include "FragTrap.hpp"

FragTrap::FragTrap () {
	_name = "NoName";
	_hitPoints = 100;
	_enrgyPoints = 100;
	_damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap (std::string name) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_enrgyPoints = 100;
	_damage = 30;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Let's do a High Fives guys !!" << std::endl;
}
