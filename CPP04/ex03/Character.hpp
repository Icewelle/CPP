#pragma once

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private :
		std::string	_name;
		AMateria*	_inventory[4];
	public :
		Character();
		Character(const std::string &name);
		Character(const Character &other);
		~Character();

		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};