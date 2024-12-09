#include "phonebook.hpp"

Contacts::Contacts(/* args */)
{
	Contacts::first_name = "Empty";
	Contacts::last_name = "Empty";
	Contacts::nickname = "Empty";
	Contacts::phone_number = "Empty";
	Contacts::dark_secret = "Empty";

	return ;
}

Contacts::~Contacts()
{
	return ;
}

void Contacts::add()
{
	std::cout << "\nAdding contact. Please follow instructions.\n\nEnter first name :\n";
	std::getline(std::cin, Contacts::first_name);
	std::cout << "\nEnter last name :\n";
	std::getline(std::cin, Contacts::last_name);
	std::cout << "\nEnter nickname :\n";
	std::getline(std::cin, Contacts::nickname);
	std::cout << "\nEnter phone number :\n";
	std::getline(std::cin, Contacts::phone_number);
	//verif phone number

	std::cout << "\nEnter dark secret :\n";
	std::getline(std::cin, Contacts::dark_secret);
	std::cout << std::endl;
	return ;
}

void Contacts::display_all(int index)
{
	std::cout << std::setw(8);
	std::cout << "[" << index << "]";
	std::cout << '|';
	if (Contacts::first_name.length() > 10)
		Contacts::first_name.replace(9, Contacts::first_name.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << Contacts::first_name;
	std::cout << '|';
	if (Contacts::last_name.length() > 10)
		Contacts::last_name.replace(9, Contacts::last_name.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << Contacts::last_name;
	std::cout << '|';
	if (Contacts::nickname.length() > 10)
		Contacts::nickname.replace(9, Contacts::nickname.length() - 1, ".");
	std::cout << std::setw(10);
	std::cout << Contacts::nickname;
	std::cout << '\n';
	return ;
}

void Contacts::display_one()
{
	std::cout << "First name : " << Contacts::first_name << std::endl;
	std::cout << "Last name : " << Contacts::last_name << std::endl;
	std::cout << "Nickname : " << Contacts::nickname << std::endl;
	std::cout << "Phone : " << Contacts::phone_number << std::endl;
	std::cout << "Dark secret : " << Contacts::dark_secret << std::endl;
}