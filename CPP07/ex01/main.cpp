#include "iter.hpp"
#include <iostream>
#include <string>
#include <cstddef>

void printArrayElem(const int &elem) {
	std::cout << elem << "\n";
}

int main(void) {
	int array[5] = {1, 2, 3 ,4 ,5};

	iter(array, (size_t)5, printArrayElem);
}