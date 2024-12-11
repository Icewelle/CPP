#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <cstdlib>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		int			_phone_number;
		std::string _dark_secret;
	public:
		Contact();
		~Contact();
		void add();
		void display_all(int i);
		void display_one();
};

#endif