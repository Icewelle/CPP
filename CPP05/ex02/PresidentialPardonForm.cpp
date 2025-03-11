#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& name) : AForm(name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() <= 5 && this->getIsSigned()) {
		std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox\n";
	} else if (executor.getGrade() > 5) {
		throw GradeTooLowException();
	} else {
		throw UnsignedForm();
	}
}
