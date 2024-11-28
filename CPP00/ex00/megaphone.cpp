#include <iostream>

void	strprint_upper(char * str)
{
	while (*str)
	{
		std::cout << (unsigned char)std::toupper(*str++);
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" , 1);
	for (int i = 1; i < argc; i++)
	{
		strprint_upper(argv[i]);
	}
	std::cout << '\n';
	return (0);
}