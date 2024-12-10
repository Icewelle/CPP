#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <cstdlib>

class Contacts
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		int			_phone_number;
		std::string _dark_secret;
	public:
		Contacts();
		~Contacts();
		void add();
		void display_all(int i);
		void display_one();
};

class PhoneBook
{
	private:
		Contacts contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
		void search_contact();
};

#endif