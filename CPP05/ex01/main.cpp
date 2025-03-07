#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	try {
		Bureaucrat pierre("pierre", 5);
		Form form1("form1", 5, 60);
		std::cout << form1 << std::endl;
		pierre.signForm(form1);
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Form::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat Quentin("Quentin", 10);
		Form form2("form2", 1, 40);
		Quentin.signForm(form2);
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Form::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat jb("jb", 150);
		Form form3("form3", 200, 150);
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Form::GradeTooHighException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException &e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
}