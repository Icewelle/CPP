#pragma once

#include "AForm.hpp"
#include "cstdlib"

class RobotomyRequestForm : public AForm {
	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string& name);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		~RobotomyRequestForm(void);

		void	execute(const Bureaucrat& executor) const;
};