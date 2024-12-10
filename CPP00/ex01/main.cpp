#include "phonebook.hpp"

int main()
{
	std::string str;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): \n";
		std::cin >> str;
		if (std::cin.eof())
		{
			std::cout << "End of input detected. Exiting...\n";
			break;
		}
		if (std::cin.fail())
		{
            std::cout << "Input error detected. Exiting...\n";
            break;
        }
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
