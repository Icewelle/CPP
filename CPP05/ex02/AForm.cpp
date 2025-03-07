#include "AForm.hpp"

AForm::AForm(void) : _name("Default"), _isSigned(false), _gradeToSign(75), _gradeToExec(75) {}

AForm::AForm(const std::string& name, const int gradeToSign, const int gradeToExec) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	if (_gradeToExec > 150 || _gradeToSign > 150) {
		throw GradeTooLowException();
	}
	else if (_gradeToExec < 1 || _gradeToSign < 1) {
		throw GradeTooHighException();
	}
}

AForm::AForm(const AForm& other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {
	if (_gradeToExec > 150 || _gradeToSign > 150) {
		throw GradeTooLowException();
	}
	else if (_gradeToExec < 1 || _gradeToSign < 1) {
		throw GradeTooHighException();
	}
}

AForm::~AForm(void) {}

//Non pertinant.
AForm& AForm::operator=(const AForm& other) {
	if (this != &other) {
		_isSigned = other._isSigned;
	}
	return (*this);
}

const std::string& AForm::getName(void) const {
	return (_name);
}

bool AForm::getIsSigned(void) const {
	return (_isSigned);
}

int AForm::getGradeToSign(void) const {
	return (_gradeToSign);
}

int AForm::getGradeToExec(void) const {
	return (_gradeToExec);
}

bool AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeToSign) {
		_isSigned = true;
	}
	return (_isSigned);
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("AForm: Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("AForm: Grade too low");
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
	os << "Form name : " << form.getName() << "\nForm's minimum grade to sign : " << form.getGradeToSign() << "\nForm minumum grade to execute : " << form.getGradeToExec() << "\nForm is signed : " << ((form.getIsSigned()) ? "true" : "false");
	return (os);
}
