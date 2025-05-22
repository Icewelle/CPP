#include "MutantStack.hpp"

template < typename T, typename Container>
MutantStack< T , Container>::MutantStack(void) : base_type() {}

template < typename T, typename Container>
MutantStack< T , Container>::MutantStack(const MutantStack& other) : base_type(other) {}

template < typename T, typename Container>
MutantStack< T , Container>::~MutantStack(void) {}

template < typename T, typename Container>
typename MutantStack< T , Container>::iterator MutantStack< T , Container>::begin(void) {
	return (this->c.begin());
}

template < typename T, typename Container>
typename MutantStack< T , Container>::iterator MutantStack< T , Container>::end(void) {
	return (this->c.end());
}