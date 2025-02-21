#pragma once

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private :
		std::string _name;
		AMateria* _materias[4];
	public :

};