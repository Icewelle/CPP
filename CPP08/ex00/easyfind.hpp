#include <algorithm>
#include <exception>

template <typename T>
int easyfind(const T& container, const int toFind) {
	int count = -1;
	for (typename T::const_iterator i = container.begin(); i != container.end(); ++i) {
		++count;
		if (*i == toFind) {
			std::cout << toFind << " was found at emplacement : #" << count << std::endl;
			return (count);
		}
	}
	throw std::invalid_argument("argument is not in the container");
}