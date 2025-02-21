#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
	private :
	public : 
		Ice();
		Ice(const Ice &other);
		~Ice();

		Ice &operator=(const Ice &other);
		std::string const &getType(void) const;
		AMateria* clone() const;
		//void use(ICharachter& target);
};