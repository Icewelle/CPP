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
	bool isAscii = true;
	std::cout << std::endl << "Adding contact. Please follow instructions." << std::endl << std::endl << "Enter first name :" << std::endl;
	while (1)
	{
		std::cin >> Contact::_first_name;
		for (size_t i = 0; i < _first_name.length(); i++)
		{
			if (!isascii(_first_name[i]))
			{
				isAscii = false;
				break;
			}
			else
				isAscii = true;
		}
		if (isAscii)
			break;
		else
			std::cout << "Only ascii character are accepted" << std::endl;
	}
	std::cout << std::endl << "Enter last name :" << std::endl;
	while (1)
	{
		std::cin >> Contact::_last_name;
		for (size_t i = 0; i < _last_name.length(); i++)
		{
			if (!isascii(_last_name[i]))
			{
				isAscii = false;
				break;
			}
			else
				isAscii = true;
		}
		if (isAscii)
			break;
		else
			std::cout << "Only ascii character are accepted" << std::endl;
	}
	std::cout << std::endl << "Enter nickname :" << std::endl;
	while (1)
	{
		std::cin >> Contact::_nickname;
		for (size_t i = 0; i < _nickname.length(); i++)
		{
			if (!isascii(_nickname[i]))
			{
				isAscii = false;
				break;
			}
			else
				isAscii = true;
		}
		if (isAscii)
			break;
		else
			std::cout << "Only ascii character are accepted" << std::endl;
	}
	std::cout <<std::endl << "Enter phone number :" << std::endl;
	while (1)
	{
		std::cin >> Contact::_phone_number;
		if (std::cin.eof())
            break;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Only numbers tolerated." << std::endl << std::endl;
		}
		else
			break;
	}
	std::cout << std::endl << "Enter dark secret :" << std::endl;
	std::cin >> Contact::_dark_secret;
	std::cout << std::endl;
	return ;
}

void Contact::display_all(int index)
{
	std::string	tmp;

	std::cout << std::setw(8);
	std::cout << "[" << index << "]";
	std::cout << '|';
	tmp = Contact::_first_name;
	if (Contact::_first_name.length() > 10)
	{
		tmp.replace(9, Contact::_first_name.length() - 1, ".");
	}
	std::cout << std::setw(10);
	std::cout << tmp;
	std::cout << '|';
	tmp = Contact::_last_name;
	if (Contact::_last_name.length() > 10)
	{
		tmp.replace(9, Contact::_last_name.length() - 1, ".");
	}
	std::cout << std::setw(10);
	std::cout << tmp;
	std::cout << '|';
	tmp = Contact::_nickname;
	if (Contact::_nickname.length() > 10)
	{
		tmp.replace(9, Contact::_nickname.length() - 1, ".");
	}
	std::cout << std::setw(10);
	std::cout << tmp;
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