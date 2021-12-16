#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	// sign_grade Exception
	try {
		Form form("Brown", 0, 51);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Form form("Brown", 151, 51);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	// execute_grade Exception
	try {
		Form form("Brown", 50, 0);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Form form("Brown", 50, 151);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Bureaucrat beSigned
	try {
		Bureaucrat burea("John", 40);
		Form form("Paper", 50, 50);
		form.beSigned(burea);
		burea.signForm(form);
		std::cout << burea << std::endl;
		std::cout << form << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat burea("John", 50);
		Form form("Paper", 30, 50);
		form.beSigned(burea);
		burea.signForm(form);
		std::cout << burea << std::endl;
		std::cout << form << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
