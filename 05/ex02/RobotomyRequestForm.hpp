#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm: public Form {
	private:
		const std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm & operator=(const RobotomyRequestForm &src);

		virtual void execute(Bureaucrat & executor) const;
};

#endif //ROBOTOMYREQUESTFORM_HPP
