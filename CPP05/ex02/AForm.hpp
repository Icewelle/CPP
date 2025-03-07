#pragma once

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm {
	private :
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;

	public :
		AForm(void);
		AForm(const std::string& name, const int gradeToSign, const int gradeToExec);
		AForm(const AForm& other);
		virtual ~AForm(void);

		AForm& 				operator=(const AForm& other);
		const std::string&	getName(void) const;
		bool 				getIsSigned(void) const;
		int 				getGradeToSign(void) const;
		int 				getGradeToExec(void) const;
		bool 				beSigned(Bureaucrat& bureaucrat);
		virtual void		execute(Bureaucrat& bureaucrat) = 0;

		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw();
		};
	
		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);