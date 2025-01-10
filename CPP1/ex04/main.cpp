#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc < 4)
		return (0);
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Failed to open the file.\n";
		return (1);
	}
	
}