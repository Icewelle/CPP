#include "Bureaucrat.hpp"

int main(void) {
	try {
		Bureaucrat pierre("pierre", 5);
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat Quentin("Quentin", 1);
		Quentin.upGrade();
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat jb("jb", 150);
		jb.downGrade();
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat chuck("chuck", 200);
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat clement("clement", -50);
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
}