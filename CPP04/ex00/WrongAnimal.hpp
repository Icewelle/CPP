#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	private:
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &other);
		std::string		getType(void) const;
		void	makeSound(void) const;
	protected :
		std::string _type;
};