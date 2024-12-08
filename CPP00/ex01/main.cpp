#include "phonebook.hpp"

int main()
{
	std::string str;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): \n";
		std::getline(std::cin, str);
		if (str == "ADD")
			phonebook.add_contact();
		else if (str == "SEARCH")
			phonebook.search_contact();
		else if (str == "EXIT")
			break;
		else
			std::cout << "invalid command, valid command are : 'ADD' 'SEARCH' & 'EXIT'\n\n";
	}
	return (0);
}