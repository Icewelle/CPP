#pragma once

#include "Ice.hpp"
#include "Cure.hpp"

class  Floor {
	private :
		AMateria *_floor[1000];
	public :
		Floor();
		Floor(const Floor &other);
		~Floor();

		Floor	&operator=(const Floor &other);
		void	addOnFloor(AMateria* materia) ;
		void	cleanFloor(void);
};