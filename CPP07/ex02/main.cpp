#include <string>
#include <iostream>
#include "Array.tpp"

int main(void) {
	Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 10;
    }
    std::cout << "Integer Array:" << std::endl;
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }

    Array<std::string> strArray(3);
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "!";
    std::cout << "\nString Array:" << std::endl;
    for (unsigned int i = 0; i < strArray.size(); ++i) {
        std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;
    }

    try {
        std::cout << "\nAccessing out-of-bounds index:" << std::endl;
        std::cout << intArray[10] << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return (0);
}