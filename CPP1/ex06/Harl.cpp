#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
	int i;
    void		(Harl::*functions[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            break;
        }
    }
	switch (i)
	{
	case 0:
		for (i = 0; i < 4; i++)
		{
			(this->*functions[i])();
		}
		break;
	case 1:
		for (i = 1; i < 4; i++)
		{
			(this->*functions[i])();
		}
		break;
	case 2:
		for (i = 2; i < 4; i++)
		{
			(this->*functions[i])();
		}
		break;
	case 3:
		for (i = 3; i < 4; i++)
		{
			(this->*functions[i])();
		}
		break;
	default:
		std::cout << "Invalid complaint level : " << level << std::endl;
		break;
	}
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << std::endl;
}
