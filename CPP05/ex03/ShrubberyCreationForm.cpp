#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name) : AForm(name, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() <= 137 && this->getIsSigned()) {
		std::string tmp(this->getName() + "_shrubbery");
		std::ofstream ofs(tmp.c_str());
    	ofs << 
			"       _-_               _-_               _-_               _-_\n"		
        	"    /~~   ~~\\   	    /~~   ~~\\   	    /~~   ~~\\   	    /~~   ~~\\\n"		
        	" /~~         ~~\\	 /~~         ~~\\	 /~~         ~~\\	 /~~         ~~\\\n"
        	"{               } {               } {               } {               }\n"	
        	" \\  _-     -_  /	 \\  _-     -_  /	 \\  _-     -_  /	 \\  _-     -_  /\n"	
        	"    ~ \\\\ //  ~       ~  \\\\ //  ~       ~  \\\\ //  ~       ~  \\\\ //  ~\n"	
        	"_- -   | | _- _   _- -   | | _- _    _- -   | | _- _  _- -   | | _- _\n"
        	"  _ -  | |   -_     _ -  | |   -_      _ -  | |   -_    _ -  | |   -_\n"
        	"      // \\\\             // \\\\              // \\\\            // \\\\\n";
    	ofs.close();
		std::cout << "ShrubberyCreationForm: executed by " << executor.getName() << "\n";
	} else if (executor.getGrade() > 137) {
		throw GradeTooLowException();
	} else {
		throw UnsignedForm();
	}
}
