#pragma once

#include <iostream>
#include <string>

class Brain {
	private :
		std::string _ideas[100];
	public :
		Brain();
		Brain(const Brain &other);
		~Brain();

		Brain &operator=(const Brain &other);
		const std::string &getIdea(int i);
};