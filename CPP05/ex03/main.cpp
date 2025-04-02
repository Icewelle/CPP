#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <ctime>

int main(void) {
	std::srand(std::time(0));

	Intern	someRandomIntern;
	AForm*	rrf;
	AForm*	ppf;
	Bureaucrat paul("paul", 1);
	try	{
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
		paul.signForm(*rrf);
		paul.executeForm(*rrf);
		delete rrf;
	} catch(const Intern::FormNameException& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		ppf = someRandomIntern.makeForm("presidential form", "target");
	} catch (const Intern::FormNameException& e) {
		std::cerr << e.what() << std::endl;
	}
	
}