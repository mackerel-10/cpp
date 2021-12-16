#include "Intern.hpp"

/* Orthodox Canonical */
Intern::Intern() {

}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern::~Intern() {

}

Intern &Intern::operator=(const Intern &src) {
	return *this;
}

/* Member function */
Form *Intern::makeForm(const std::string form_name, std::string target) {
	Form* ret = NULL;

	t_form form[] = {
			{"shrubbery creation", new ShrubberyCreationForm(target)},
			{"robotomy request", new RobotomyRequestForm(target)},
			{"presidential pardon", new PresidentialPardonForm(target)}
	};

	for (int i = 0; i < 3; i++) {
		if (form_name == form[i].name) {
			ret = form[i].form;
			std::cout << "Intern creates " << form[i].name << std::endl;
		}
		else
			delete form[i].form;
	}
	if (ret == NULL)
		throw CustomExcep();
	return ret;
}

/* Exception */
const char *Intern::CustomExcep::what() const throw() {
	return "[ Creating Form Failed ]";
}