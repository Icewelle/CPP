#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Format : <file_name> 'sring to replace' 'replacement string'";
		return (0);
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Failed to open the file.\n";
		return (1);
	}
	std::string fileName = filename_replace(argv[1]);
	std::ofstream outputFile(fileName.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Failed to open the output file." << std::endl;
        inputFile.close();
        return 1;
    }
	find_and_replace(argv, inputFile, outputFile);
	inputFile.close();
	outputFile.close();
	return (0);
}