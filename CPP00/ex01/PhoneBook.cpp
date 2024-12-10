#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "______ _                     ______             _    \n";
	std::cout << "| ___ \\ |                    | ___ \\           | |   \n";
	std::cout << "| |_/ / |__   ___  _ __   ___| |_/ / ___   ___ | | __\n";
	std::cout << "|  __/| '_ \\ / _ \\| ' _\\ / _ \\ ___ \\/ _ \\ / _ \\| |/ /\n";
	std::cout << "| |   | | | | (_) | | | |  __/ |_/ / (_) | (_) |   < \n";
	std::cout << "\\_|   |_| |_|\\___/|_| |_|\\___\\____/ \\___/ \\___/|_|\\_\\\n\n\n";
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Closing phonebook\n";
	return;
}

void PhoneBook::add_contact()
{
	static int	i;

	if (i == 8)
		i = 0;
	PhoneBook::contacts[i++].add();
}

void PhoneBook::search_contact()
{
	int			index;
	std::string	tmp;

	std::cout << "     INDEX|FIRST NAME| LAST NAME|  _nickname\n";
	for (int i = 0; i < 8; i++)
		PhoneBook::contacts[i].display_all(i + 1);
	std::cout << "\nEnter index of the contact you want informations :\n";
	while (1)
	{
		std::cin >> index;
		if (std::cin.eof())
            return;
		if (std::cin.fail() || index < 1 || index > 8)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Enter a number between 1 & 8.\n\n";
		}
		else
			break;
	}
	PhoneBook::contacts[index - 1].display_one();
	std::cout << std::endl;
}
