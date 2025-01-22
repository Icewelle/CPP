#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "NoName";
	_hitPoints = 100;
	_enrgyPoints = 50;
	_damage = 20;
	std::cout << "SvacTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	_name = name;
	_hitPoints = 100;
	_enrgyPoints = 50;
	_damage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap entered gate keeper mod" << std::endl;
}