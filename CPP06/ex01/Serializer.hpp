#pragma once

#include "data.hpp"
#include <iomanip>

class Serializer
{
	private:
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data*		deserialize(uintptr_t raw);
};
