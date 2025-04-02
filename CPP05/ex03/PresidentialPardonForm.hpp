#pragma once

#include "AForm.hpp"


class PresidentialPardonForm : public AForm {
	public :
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string& name);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		~PresidentialPardonForm(void);

		void	execute(const Bureaucrat& executor) const;
};