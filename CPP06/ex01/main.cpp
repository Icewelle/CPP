#include "Serializer.hpp"


int main(void) {
	Data	*test = new Data;
	Data	test2;
	uintptr_t raw;
	std::cout << "First ptr : " << test << std::endl;
	raw = Serializer::serialize(test);
	std::cout << "raw value of first ptr : " << raw << std::endl;
	test = &test2;
	std::cout << "value of first ptr after assigning it to another data struct : " << test << std::endl;
	test = Serializer::deserialize(raw);
	std::cout << "value of first ptr after assigning it to raw deserialized value : " << test << std::endl;

	delete test;
	return (0);
}
