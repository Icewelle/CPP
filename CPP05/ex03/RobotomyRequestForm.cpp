#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& name) : AForm(name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() <= 45 && this->getIsSigned()) {
		std::cout << "* drilling noise *\n";
		if (std::rand() % 2) {
			std::cout << this->getName() << " has been robotomized succesfully !\n";
		} else {
			std::cout << "Robotomization failed on " << this->getName() << "\n";
		}
	} else if (executor.getGrade() > 45) {
		throw GradeTooLowException();
	} else {
		throw UnsignedForm();
	}
}
