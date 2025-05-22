#pragma once

#include <stack>
#include <deque>

template < typename T, typename Container = std::deque<T> >
class  MutantStack : public std::stack<T, Container> {
	public : 
		explicit MutantStack(void);
		MutantStack(const MutantStack& other);
		~MutantStack(void);

		typedef std::stack<T, Container> base_type;
		typedef	typename Container::iterator iterator;

		iterator begin(void);
		iterator end(void);
};

#include "MutantStack.tpp"