#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
	public : 
		Cure();
		Cure(const Cure &other);
		~Cure();

		Cure &operator=(const Cure &other);
		std::string const &getType(void) const;
		AMateria* clone() const;
		void use(ICharacter& target);
};