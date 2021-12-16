#include "RobotomyRequestForm.hpp"

/* Orthodox Canonical */
RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 75, 45), _target(""){

}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):
	Form("RobotomyRequestForm", 75, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	return *this;
}

/* Member Function */
void RobotomyRequestForm::execute(Bureaucrat &executor) const {
	Form::check_execute(executor);
	std::cout << "[ Drrrrr... ]" << std::endl;
	if (std::rand() % 2)
		std::cout << "[ " << _target << " Robotomized Successfully! ]" << std::endl;
	else
		std::cout << "[ " << _target << " Robotomized Failed ]" << std::endl;
}