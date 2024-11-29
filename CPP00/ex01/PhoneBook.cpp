#include "phonebook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{
	std::cout << "Closing phonebook\n";
	return;
}

void PhoneBook::add_contact()
{
	static int	i;

	if (i == 7)
		i = 0;
	PhoneBook::contacts[i++].add();
}

void PhoneBook::search_contact()
{
	int index;
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME\n";
	for (int i = 0; i < 8; i++)
		PhoneBook::contacts[i].display_all(i + 1);
	std::cout << "\nEnter index of the contact you want informations :\n";
	while (1)
	{
		std::cin >> index;
		if (std::cin.fail() || index < 1 || index > 8)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input, only integers are allowed\nPleas try again :\n";
		}
		else
			break ;
	}
	PhoneBook::contacts[index - 1].display_one();
	std::cout << std::endl;
}
