#include "template.hpp"
#include <iostream>

int main(void) {
	int i = 5;
	int j = 2;
	//double k = 8;


	std::cout << "i before swap : " << i  << " adresse : " << &i << std::endl;
	std::cout << "j before swap : " << j  << " adresse : " << &j << std::endl;

	swap(i, j);
	//swap(i, k);
	int& minimum = min(i, j);
	int& maximum = max(i, j);
	std::cout << "i after swap : "<< i  << " adresse : " << &i << std::endl;
	std::cout << "j after swap : " << j  << " adresse : " << &j << std::endl;
	std::cout << "min : " << minimum << " adress : "  << &minimum << std::endl;
	std::cout << "max : " << maximum  << " adresse : " << &maximum << std::endl;

}