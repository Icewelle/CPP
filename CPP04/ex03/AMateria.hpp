#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(const AMateria &other);
		AMateria(std::string const &type);
		virtual ~AMateria();

		AMateria &operator=(const AMateria &other);
		std::string const &getType(void) const;
		virtual AMateria* clone() const = 0;
		//virtual void use(ICharachter& target); ICharacter class to do !
};
