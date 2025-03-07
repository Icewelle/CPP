#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; ++i)
		_ideas[i] = "Idea";
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; ++i) {
		_ideas[i] = other._ideas[i];
	}
}

Brain::~Brain() {
	std::cout << " brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}

const std::string &Brain::getIdea(int i) {
	return (_ideas[i]);
}