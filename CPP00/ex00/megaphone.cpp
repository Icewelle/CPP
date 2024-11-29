#include <iostream>

void	strprint_upper(std::string str, std:: locale loc)
{
	for (std::string::size_type i = 0; i < str.length(); i++)
		std::cout << std::toupper(str[i], loc);
}

int	main(int argc, char **argv)
{
	std::locale loc;

	if (argc < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" , 1);
	for (int i = 1; i < argc; i++)
		strprint_upper(argv[i], loc);
	std::cout << '\n';
	return (0);
}
