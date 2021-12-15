#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	// _grade != 1 ~ 150
	Bureaucrat bureau1("Brown", 0);
	Bureaucrat bureau2("Jack", 151);
	std::cout << std::endl;

	// _grade = 1 ~ 150 ++ --
	bureau1.setGrade(1);
	bureau2.setGrade(150);

	bureau1.increment_grade();
	bureau2.decrement_grade();

	std::cout << std::endl;

	// _grade = 1 ~ 150
	bureau1.setGrade(45);

	std::cout << bureau1 << std::endl;

	return 0;
}
