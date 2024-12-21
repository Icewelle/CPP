#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde;

	horde = zombieHorde(5, "Paul");
	for (int i = 0; i < 5; i++)
	{
		horde->announce();
	}
	delete[] horde;
}
