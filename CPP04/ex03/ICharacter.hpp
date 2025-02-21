#pragma once

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class ICharacter
{
	public:
		ICharacter();
		ICharacter(const ICharacter &other);
		virtual ~ICharacter();

		ICharacter &operator=(const ICharacter &other);
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};