#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "invalid format : <level>" << std::endl;
		return (1);
	}
	Harl	Harl;
	Harl.complain(argv[1]);
	return (0);
}