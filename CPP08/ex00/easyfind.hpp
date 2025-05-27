#pragma once

#include <algorithm>
#include <exception>

template <typename T>
int easyfind(const T& container, const int toFind) {
	typename	T::const_iterator it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end()) {
		throw std::invalid_argument("argument is not in the container");
	}
	std::cout << "First iteration of (" << toFind << ") was found at emplacement : #" << std::distance(container.begin(), it) << std::endl;
	return (*it);
}