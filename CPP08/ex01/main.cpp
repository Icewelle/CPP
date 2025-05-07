#include "Span.hpp"
#include <iostream>
#include <exception>
#include <vector>

int main(void) {
	Span	test1(5);

	try {
		std::cout << test1.shortestSpan() << std::endl;
		std::cout << test1.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		test1.addNumber(4);
		test1.addNumber(2);
		test1.addNumber(8);
		test1.addNumber(45);
		std::cout << test1.shortestSpan() << std::endl;
		std::cout << test1.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		test1.addNumber(5);
		test1.addNumber(20);
		std::cout << test1.shortestSpan() << std::endl;
		std::cout << test1.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	Span	test2(5);
	std::vector<int> vec(10, 5);
	try {
		test2.addNumber(vec.begin(), vec.end());
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	test2.printNElements(2);

}