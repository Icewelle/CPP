#include <iostream>
#include <set>

class Span
{
	private:
		std::multiset<int> *_array;
		unsigned int _size;
	public:
		Span();
		Span(const unsigned int n);
		Span(const Span& other);
		~Span();

		Span&	operator=(const Span& other);
		void	addNumber(const int val);
		int		shortestSpan(void);
		int		longestSpan(void);
};
