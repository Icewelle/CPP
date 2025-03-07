#pragma once

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
	private :
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;

	public :
		Form(void);
		Form(const std::string& name, const int gradeToSign, const int gradeToExec);
		Form(const Form& other);
		~Form(void);

		Form& 				operator=(const Form& other);
		const std::string&	getName(void) const;
		bool 				getIsSigned(void) const;
		int 				getGradeToSign(void) const;
		int 				getGradeToExec(void) const;
		bool 				beSigned(Bureaucrat& bureaucrat);

		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw();
		};
	
		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& form);