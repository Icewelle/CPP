#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _Contact[8];
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
		void search_contact();
};

#endif