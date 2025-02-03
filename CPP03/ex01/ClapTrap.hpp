#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap {
	private :
	public :
		ClapTrap(std::string name);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected :
		ClapTrap();
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_enrgyPoints;
		unsigned int	_damage;
};


#endif