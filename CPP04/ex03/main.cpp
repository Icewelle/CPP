#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Floor.hpp"

int main()
{
	Floor	floor;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	floor.addOnFloor(me->getMateria(0));
	me->unequip(0);
	//floor.cleanFloor();
	me->use(0, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}