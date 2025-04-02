#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	private :
		std::string	_form;
		std::string	_target;

	public :
		Intern(void);
		Intern(const Intern& other);
		~Intern(void);

		Intern	&operator=(const Intern& other);
		AForm	*makeForm(const std::string& form, const std::string& target) const;

		class FormNameException : public std::exception {
			public :
				const char* what() const throw();
		};
};