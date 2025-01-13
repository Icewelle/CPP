#include "replace.hpp"

std::string	filename_replace(char *filename)
{
	std::string result = filename;
	size_t pos = result.find_last_of('.');

	result = result.substr(0, pos);
	result.append(".replace");
	return (result);
}