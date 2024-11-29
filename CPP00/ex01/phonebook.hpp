#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

class contacts
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int phone_number;
		std::string dark_secret;
	public:
		contacts();
		~contacts();
		void add();
		void display_all(int i);
		void display_one();
};

class phonebook
{
	private:
		contacts contacts[8];
	public:
		phonebook();
		~phonebook();
		void add_contact();
		void search_contact();
};

#endif