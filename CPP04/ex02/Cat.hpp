#pragma once

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();

		Cat &operator=(const Cat &other);
		void	makeSound(void) const;
		const std::string &getIdea(int i) const;
};
