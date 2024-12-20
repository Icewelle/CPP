#include "Zombie.hpp"

int main()
{
	Zombie *Paul;

	randomChump("Andrew");

	Paul = newZombie("Paul");
	Paul->announce();

	randomChump("Ashley");
	
	delete(Paul);
}