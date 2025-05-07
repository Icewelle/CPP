#include "Span.hpp"
#include <algorithm>
#include <exception>

Span::Span() {};

Span::Span(const unsigned int n) : _size(n) {
	_array = new std::multiset<int>();
}

Span::Span(const Span& other) : _size(other._size) {
	_array = new std::multiset<int>();
	if (other._size == 0) {
		return;
	}
	std::multiset<int>::iterator	start = other._array->begin();
	std::multiset<int>::iterator	end = other._array->end();
	while (start != end) {
		_array->insert(*start);
		++start;
	}
}

Span::~Span() {}

void	Span::addNumber(const int val) {
	if (_array->size() == _size) {
		throw std::out_of_range("cannot add numbers: Span is full");
	} else {
		_array->insert(val);
	}
}

int		Span::shortestSpan(void) const {
	if (_array->size() < 2)
		throw std::out_of_range("no span can be found: not enough numbers in Span");
	std::multiset<int>::iterator n = _array->begin();
	std::multiset<int>::iterator n1 = ++_array->begin();
	std::multiset<int>::iterator end = _array->end();
	int span = *n1 - *n;
	while (n1 != end) {
		(*n1 - *n < span) ? span = *n1 - *n : NULL ;
		++n1;
		++n;
	}
	return (span);
}

unsigned int		Span::size(void) const {
	return (_size);
}

int		Span::longestSpan(void) const {
	std::multiset<int>::iterator last = --_array->end();
	return (*last - *_array->begin());
}

int		Span::getFirstElem(void) const {

	return (*_array->begin());
}

void	Span::printNElements(unsigned int n) const {
	std::multiset<int>::iterator elem = _array->begin();
	for (unsigned int i = 0; i < n; ++i) {
		if (i == _size) {
			throw std::out_of_range("max element reached");
		}
		std::cout << *elem << "\n";
		++elem;
	}
}