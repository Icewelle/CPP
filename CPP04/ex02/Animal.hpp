#pragma once

#include <string>
#include <iostream>

class Animal
{
	private:
	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();

		Animal 						&operator=(const Animal &other);
		const std::string			&getType(void) const;
		virtual void				makeSound(void) const = 0;
		virtual const std::string&	getIdea(int i) const = 0;
	protected :
		std::string _type;
};

