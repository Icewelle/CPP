#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Paul"), _grade(150){
	std::cout << "Default constructor : " << _name << " as been hired\n";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	}
	std::cout << "Parametized constructor : " << _name << " as been hired. His grade is " << _grade << "\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {
	std::cout << "Copy constructor : " << _name << " as been hired. His grade is " << _grade << "\n";
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor : " << _name << " has been fired\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other) {
		_grade = other._grade;
		std::cout << _name << " now have the same grade as " << other._name << "\n";
	}
	return (*this);
}

const std::string &Bureaucrat::getName(void) const {
	return (_name);
}

int Bureaucrat::getGrade(void) const {
	return (_grade);
}

void Bureaucrat::upGrade(void) {
	if (_grade == 1) {
		throw GradeTooHighException();
	}
	--_grade;
}

void Bureaucrat::downGrade(void) {
	if (_grade == 150) {
		throw GradeTooLowException();
	}
	++_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}