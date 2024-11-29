#include "phonebook.hpp"

phonebook::phonebook()
{

}

phonebook::~phonebook()
{
	std::cout << "Closing phonebook\n";
	return;
}

void phonebook::add_contact()
{
	static int	i;

	if (i == 7)
		i = 0;
	phonebook::contacts[i++].add();
}

void phonebook::search_contact()
{
	int index;
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME\n";
	for (int i = 0; i < 8; i++)
		phonebook::contacts[i].display_all(i + 1);
	std::cout << "\nEnter index of the contact you want informations\n";
	std::cin >> index;
	phonebook::contacts[index - 1].display_one();
	std::cout << std::endl;
}
