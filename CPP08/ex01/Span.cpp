#include "Span.hpp"

Span::Span() : _array(NULL), _size(0) {};

Span::Span(const unsigned int n) : _size(n) {
	_array = new int[_size];
}

Span::Span(const Span& other) : _size(other._size) {
	
}