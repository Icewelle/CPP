#include "ScavTrap.hpp"

int main(void){
	ScavTrap scav1("Scav1");
	ClapTrap clap1("Clap1");

	clap1.attack("scav1");
	clap1.beRepaired(10);
	clap1.takeDamage(50);
	clap1.attack("scav1");

	scav1.attack("clap1");
	scav1.beRepaired(15);
	scav1.takeDamage(30);
	scav1.attack("clap1");
}