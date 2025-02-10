#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	private:
	public:
		Animal();
		virtual ~Animal();

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
	protected :
		std::string _type;
};

#endif