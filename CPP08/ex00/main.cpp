#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <exception>
#include <set>
#include "easyfind.hpp"

int main(void) {
	std::vector<int> vec;
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(2);
	try {
		easyfind(vec, 2);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::list<int> list;
	list.push_back(0);
	list.push_back(2);
	list.push_back(2);
	try {
		easyfind(list, 2);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::deque<int> deque;
	deque.push_back(0);
	deque.push_back(1);
	deque.push_back(2);
	try {
		easyfind(deque, 2);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::set<int> set;
	set.insert(0);
	set.insert(1);
	set.insert(2);
	//set.insert(3);
	try {
		easyfind(set, 3);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}