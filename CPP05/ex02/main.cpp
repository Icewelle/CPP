#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main(void) {
	std::srand(std::time(0));

	try {
		AForm *test = new ShrubberyCreationForm("ShrubTest");
		AForm *robo = new RobotomyRequestForm("robo");
		AForm *prez = new PresidentialPardonForm("prez");
		Bureaucrat paul("paul", 1);
		Bureaucrat pierre("pierre", 160);
		std::cout << std::endl;
		pierre.executeForm(*test);
		pierre.signForm(*test);
		paul.signForm(*test);
		paul.signForm(*robo);
		paul.signForm(*prez);
		pierre.signForm(*test);
		
		std::cout << std::endl;
		paul.executeForm(*test);
		std::cout << std::endl;
		paul.executeForm(*robo);
		std::cout << std::endl;
		paul.executeForm(*prez);
		std::cout << std::endl;

		delete test;
		delete robo;
		delete prez;
	} catch (const AForm::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const AForm::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
/* 	try {
	 */
/* 	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const AForm::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const AForm::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const AForm::UnsignedForm& e) {
		std::cerr <<"Exception caught : " << e.what() << std::endl;
	} */
}