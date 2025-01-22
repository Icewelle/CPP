#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	std::cout << "CONSTRUCTORS CALLS" << std::endl;
	ClapTrap clap1("Clap1");
	ScavTrap scav1("Scav1");
	FragTrap frag1("frag1");
	std::cout << std::endl;

	clap1.attack("frag1");
	clap1.beRepaired(10);
	clap1.takeDamage(50);
	clap1.attack("frag1");
	std::cout << std::endl;

	scav1.attack("clap1");
	scav1.beRepaired(15);
	scav1.takeDamage(30);
	scav1.attack("clap1");
	std::cout << std::endl;

	frag1.attack("scav1");
	frag1.beRepaired(40);
	frag1.takeDamage(60);
	frag1.attack("scav1");
	std::cout << std::endl;

	std::cout << "DESTRUCTORS CALLS" << std::endl;
}