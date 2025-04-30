#include "Span.hpp"
#include <algorithm>

Span::Span() : _array(NULL) ,_size(0) {
};

Span::Span(const unsigned int n) : _size(n) {
	_array = new std::multiset<int>[_size];
}

Span::Span(const Span& other) : _size(other._size) {
	if (_size == 0) {
		_array = NULL;
		return;
	}
	
}