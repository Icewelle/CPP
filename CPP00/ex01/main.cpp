#include "phonebook.hpp"

int main()
{
	std::string str;
	phonebook phonebook;

	while (1)
	{
		std::cout << "Please enter a command : \n";
		std::cin >> str;
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