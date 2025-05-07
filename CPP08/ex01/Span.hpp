#include <iostream>
#include <set>
#include <exception>

class Span
{
	private:
		std::multiset<int> *_array;
		unsigned int _size;
		Span();

	public:
		Span(const unsigned int n);
		Span(const Span& other);
		~Span();

		Span&	operator=(const Span& other);
		void	addNumber(const int val);
		template <typename it>
		void	addNumber(it start, it end) {
			while (start != end) {
				if (_array->size() == _size) {
					throw std::out_of_range("Couldn't add more number: Span is full");
				}
				_array->insert(*start);
				++start;
			}
		}
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		
		unsigned int	size(void) const;
		int				getFirstElem(void) const;
		void			printNElements(unsigned int n) const;
};
