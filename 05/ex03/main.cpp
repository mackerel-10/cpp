#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat burea("Brown", 1);
	Intern intern;
	Form *form;

	try {
		form = intern.makeForm("shrubbery creation", "John");
		delete form;
		form = intern.makeForm("robotomy request", "John");
		delete form;
		form = intern.makeForm("presidential pardon", "John");
		delete form;
		form = intern.makeForm("", "John");
		delete form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
