#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private :

	public :
		MateriaSource();
		~MateriaSource() {}
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};