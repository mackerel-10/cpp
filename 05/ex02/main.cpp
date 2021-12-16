#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat burea1("Brown", 1);
	Bureaucrat burea2("John", 40);
	Bureaucrat burea3("Jackson", 130);
	Bureaucrat burea4("Jack", 150);
	Form *form;

	// Shrubbery
	try {
		form = new ShrubberyCreationForm("Shrubbery");
		form->beSigned(burea1);
		burea1.signForm(*form);
		form->execute(burea1);
		delete form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		form = new ShrubberyCreationForm("Shrubbery");
		form->beSigned(burea4);
		burea4.signForm(*form);
		form->execute(burea1);
		delete form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Robotomy
	try {
		form = new RobotomyRequestForm("Robotomy");
		form->beSigned(burea1);
		burea1.signForm(*form);
		form->execute(burea1);
		delete form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		form = new RobotomyRequestForm("Robotomy");
		form->beSigned(burea3);
		burea3.signForm(*form);
		form->execute(burea3);
		delete form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Presidential
	try {
		form = new PresidentialPardonForm("Presidential");
		form->beSigned(burea1);
		burea1.signForm(*form);
		form->execute(burea1);
		delete form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		form = new PresidentialPardonForm("Presidential");
		form->beSigned(burea2);
		burea3.signForm(*form);
		form->execute(burea2);
		delete form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Bureaucrat executeform
	try {
		ShrubberyCreationForm shrub("Shrub");
		shrub.beSigned(burea1);
		burea1.executeForm(shrub);

		shrub.beSigned(burea4);
		burea4.executeForm(shrub);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
