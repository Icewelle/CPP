#include "phonebook.hpp"

contacts::contacts(/* args */)
{
	return ;
}

contacts::~contacts()
{
	return ;
}

void contacts::add()
{
	std::cout << "\nAdding contact. Please follow instructions.\n\nEnter first name :\n";
	std::cin >> contacts::first_name;
	std::cout << "\nEnter last name :\n";
	std::cin >> contacts::last_name;
	std::cout << "\nEnter nickname :\n";
	std::cin >> contacts::nickname;
	std::cout << "\nEnter phone number :\n";
	std::cin >> contacts::phone_number;
	std::cout << "\nEnter dark secret :\n";
	std::cin >> contacts::dark_secret;
	std::cout << std::endl;
	return ;
}

void contacts::display_all(int index)
{
	std::cout << std::setw(8);
	std::cout << "[" << index << "]";
	std::cout << '|';
	if (contacts::first_name.length() > 10)
		contacts::first_name.replace(9, contacts::first_name.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << contacts::first_name;
	std::cout << '|';
	if (contacts::first_name.length() > 10)
		contacts::first_name.replace(9, contacts::first_name.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << contacts::first_name;
	std::cout << '|';
	if (contacts::first_name.length() > 10)
		contacts::first_name.replace(9, contacts::first_name.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << contacts::first_name;
	std::cout << '\n';

	return ;
}

void contacts::display_one()
{
	std::cout << "First name : " << contacts::first_name << std::endl;
	std::cout << "Last name : " << contacts::last_name << std::endl;
	std::cout << "Nickname : " << contacts::nickname << std::endl;
	std::cout << "Phone : " << contacts::phone_number << std::endl;
	std::cout << "Dark secret : " << contacts::dark_secret << std::endl;
}