#include "PresidentialPardonForm.hpp"

/* Orthodox Canonical */
PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5), _target("") {

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):
	Form("PresidentialPardonForm", 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	return *this;
}

/* Member Function */
void PresidentialPardonForm::execute(Bureaucrat &executor) const {
	Form::check_execute(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}