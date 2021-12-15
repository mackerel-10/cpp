#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	// _grade != 1 ~ 150
	try {

		Bureaucrat up("", 0);
	}
	catch (std::exception & e) {
		std::cerr << "[ " << e.what() << std::endl;
	}

	try {
		Bureaucrat down("", 151);
	}
	catch (std::exception & e) {
		std::cerr <<  "[ " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// Error: increment, decrement
	Bureaucrat bureau("Brown", 50);

	try {
		bureau.setGrade(1);
		bureau.increment_grade();
	}
	catch (std::exception & e) {
		std::cerr << "[ " << bureau.getName() << "'s Grade is ";
		std::cerr << e.what() << std::endl;
	}

	try {
		bureau.setGrade(150);
		bureau.decrement_grade();

	}
	catch (std::exception & e) {
		std::cerr << "[ " << bureau.getName() << "'s Grade is ";
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	// _grade = 1 ~ 150
	try {
		bureau.setGrade(45);
		std::cout << bureau << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << "[ " << bureau.getName() << "'s Grade is ";
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
