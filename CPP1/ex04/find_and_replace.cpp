#include "replace.hpp"

std::string customReplace(const std::string& str, const std::string& from, const std::string& to)
{
    if (from.empty()) {
        return str;
    }
    std::string result;
    size_t start_pos = 0;
    size_t pos;

    while ((pos = str.find(from, start_pos)) != std::string::npos) {
        result.append(str, start_pos, pos - start_pos);
        result.append(to);
        start_pos = pos + from.length();
    }
    result.append(str, start_pos, std::string::npos);
    return (result);
}

void find_and_replace(char **argv, std::ifstream& inputFile, std::ofstream& outputFile)
{
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	std::string line;
	while (std::getline(inputFile ,line))
	{
		size_t pos = 0;
		while ((pos = line.find(str1, pos)) != std::string::npos)
			line = customReplace(line, str1, str2);
		outputFile << line << std::endl;
	}
}