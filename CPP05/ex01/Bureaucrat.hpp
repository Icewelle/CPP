#pragma once

#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat {
	private :
		const std::string	_name;
		int					_grade;

	public :
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat			&operator=(const Bureaucrat &other);
		const std::string	&getName(void) const;
		int					getGrade(void) const;
		void				upGrade(void);
		void				downGrade(void);
		void				signForm(Form& form);

		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw();
		};
	
		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &bureaucrat);