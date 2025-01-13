#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

void 		find_and_replace(char **argv, std::ifstream& inputFile, std::ofstream& outputFile);
std::string	customReplace(const std::string& str, const std::string& from, const std::string& to);
std::string	filename_replace(char *filename);
#endif