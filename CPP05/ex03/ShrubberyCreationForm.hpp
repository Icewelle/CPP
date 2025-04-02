#pragma once

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {
	public :
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string& name);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm(void);

		void	execute(const Bureaucrat& executor) const;
};
