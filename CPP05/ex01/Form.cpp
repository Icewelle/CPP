#include "Form.hpp"

Form::Form(void) : _name("Default"), _isSigned(false), _gradeToSign(75), _gradeToExec(75) {}

Form::Form(const std::string& name, const int gradeToSign, const int gradeToExec) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	if (_gradeToExec > 150 || _gradeToSign > 150) {
		throw GradeTooLowException();
	}
	else if (_gradeToExec < 1 || _gradeToSign < 1) {
		throw GradeTooHighException();
	}
}

Form::Form(const Form& other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {
	if (_gradeToExec > 150 || _gradeToSign > 150) {
		throw GradeTooLowException();
	}
	else if (_gradeToExec < 1 || _gradeToSign < 1) {
		throw GradeTooHighException();
	}
}

Form::~Form(void) {}

//Non pertinant.
Form& Form::operator=(const Form& other) {
	if (this != &other) {
		_isSigned = other._isSigned;
	}
	return (*this);
}

const std::string& Form::getName(void) const {
	return (_name);
}

bool Form::getIsSigned(void) const {
	return (_isSigned);
}

int Form::getGradeToSign(void) const {
	return (_gradeToSign);
}

int Form::getGradeToExec(void) const {
	return (_gradeToExec);
}

bool Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeToSign) {
		_isSigned = true;
	}
	return (_isSigned);
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Form: Grade too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Form: Grade too low");
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Form name : " << form.getName() << "\nForm's minimum grade to sign : " << form.getGradeToSign() << "\nForm minumum grade to execute : " << form.getGradeToExec() << "\nForm is signed : " << ((form.getIsSigned()) ? "true" : "false");
	return (os);
}
