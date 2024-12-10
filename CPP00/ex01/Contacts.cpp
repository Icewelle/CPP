#include "phonebook.hpp"

Contacts::Contacts(/* args */)
{
	Contacts::_first_name = "Empty";
	Contacts::_last_name = "Empty";
	Contacts::_nickname = "Empty";
	Contacts::_phone_number = 0;
	Contacts::_dark_secret = "Empty";

	return ;
}

Contacts::~Contacts()
{
	return ;
}

void Contacts::add()
{
	std::cout << "\nAdding contact. Please follow instructions.\n\nEnter first name :\n";
	std::cin >> Contacts::_first_name;
	std::cout << "\nEnter last name :\n";
	std::cin >> Contacts::_last_name;
	std::cout << "\nEnter _nickname :\n";
	std::cin >> Contacts::_nickname;
	std::cout << "\nEnter phone number :\n";
	while (1)
	{
		std::cin >> Contacts::_phone_number;
		if (std::cin.eof())
            break;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Only numbers tolerated.\n\n";
		}
		else
			break;
	}
	std::cout << "\nEnter dark secret :\n";
	std::cin >> Contacts::_dark_secret;
	std::cout << std::endl;
	return ;
}

void Contacts::display_all(int index)
{
	std::cout << std::setw(8);
	std::cout << "[" << index << "]";
	std::cout << '|';
	if (Contacts::_first_name.length() > 10)
		Contacts::_first_name.replace(9, Contacts::_first_name.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << Contacts::_first_name;
	std::cout << '|';
	if (Contacts::_last_name.length() > 10)
		Contacts::_last_name.replace(9, Contacts::_last_name.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << Contacts::_last_name;
	std::cout << '|';
	if (Contacts::_nickname.length() > 10)
		Contacts::_nickname.replace(9, Contacts::_nickname.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << Contacts::_nickname;
	std::cout << '\n';
	return ;
}

void Contacts::display_one()
{
	std::cout << "First name : " << Contacts::_first_name << std::endl;
	std::cout << "Last name : " << Contacts::_last_name << std::endl;
	std::cout << "_nickname : " << Contacts::_nickname << std::endl;
	std::cout << "Phone : " << Contacts::_phone_number << std::endl;
	std::cout << "Dark secret : " << Contacts::_dark_secret << std::endl;
}