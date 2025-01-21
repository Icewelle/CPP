#include "ClapTrap.hpp"

int main(void){
	ClapTrap clap1("clap1");

	clap1.attack("test");
	clap1.beRepaired(10);
	clap1.takeDamage(50);
	clap1.attack("test2");
}