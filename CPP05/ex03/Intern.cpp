#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& other) : _form(other._form), _target(other._target) {}

Intern::~Intern(void) {}

Intern	&Intern::operator=(const Intern& other) {
	if (this != &other) {
		_form = other._form;
		_target = other._target;
	}
	return (*this);
}

AForm	*Intern::makeForm(const std::string& form, const std::string& target) const {
	int i;
	std::string tmp = form;
	std::string	forms[] = {"SHRUBBERY CREATION", "ROBOTOMY REQUEST", "PRESIDENTIAL PARDON"};
	for (size_t j = 0; j < form.length(); ++j) {
		tmp[j] = (char)toupper(tmp[j]);
	}
	for (i = 0; i < 3; ++i) {
		if (tmp == forms[i]) {
			break;
		}
	}
	switch (i) {
		case 0 :
			std::cout << "Intern create form: " << forms[i] << '\n';
			return (new ShrubberyCreationForm(target));
		case 1 :
			std::cout << "Intern create form: " << forms[i] << '\n';
			return (new RobotomyRequestForm(target));
		case 2 :
			std::cout << "Intern create form: " << forms[i] << '\n';
			return (new PresidentialPardonForm(target));
		default : 
			throw (FormNameException());
	}
}


const char* Intern::FormNameException::what() const throw() {
	return ("The form you try to create doesn't exist yet.");
}