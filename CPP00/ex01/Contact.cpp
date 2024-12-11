#include "Contact.hpp"

Contact::Contact(/* args */)
{
	Contact::_first_name = "Empty";
	Contact::_last_name = "Empty";
	Contact::_nickname = "Empty";
	Contact::_phone_number = 0;
	Contact::_dark_secret = "Empty";

	return ;
}

Contact::~Contact()
{
	return ;
}

void Contact::add()
{
	std::cout << "\nAdding contact. Please follow instructions.\n\nEnter first name :\n";
	std::cin >> Contact::_first_name;
	std::cout << "\nEnter last name :\n";
	std::cin >> Contact::_last_name;
	std::cout << "\nEnter nickname :\n";
	std::cin >> Contact::_nickname;
	std::cout << "\nEnter phone number :\n";
	while (1)
	{
		std::cin >> Contact::_phone_number;
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
	std::cin >> Contact::_dark_secret;
	std::cout << std::endl;
	return ;
}

void Contact::display_all(int index)
{
	std::cout << std::setw(8);
	std::cout << "[" << index << "]";
	std::cout << '|';
	if (Contact::_first_name.length() > 10)
		Contact::_first_name.replace(9, Contact::_first_name.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << Contact::_first_name;
	std::cout << '|';
	if (Contact::_last_name.length() > 10)
		Contact::_last_name.replace(9, Contact::_last_name.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << Contact::_last_name;
	std::cout << '|';
	if (Contact::_nickname.length() > 10)
		Contact::_nickname.replace(9, Contact::_nickname.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << Contact::_nickname;
	std::cout << '\n';
	return ;
}

void Contact::display_one()
{
	std::cout << "First name : " << Contact::_first_name << std::endl;
	std::cout << "Last name : " << Contact::_last_name << std::endl;
	std::cout << "Nickname : " << Contact::_nickname << std::endl;
	std::cout << "Phone : " << Contact::_phone_number << std::endl;
	std::cout << "Dark secret : " << Contact::_dark_secret << std::endl;
}