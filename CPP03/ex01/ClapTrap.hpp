#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap {
	private :
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_enrgyPoints;
		unsigned int	_damage;
	public :
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif