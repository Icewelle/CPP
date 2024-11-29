#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

class Contacts
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int phone_number;
		std::string dark_secret;
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