#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private :
	public :
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		void	guardGate();
};

#endif