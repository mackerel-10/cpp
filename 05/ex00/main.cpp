#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bureaucrat("Brown", 50);

	std::cout << bureaucrat.getName() << std::endl;
	std::cout << bureaucrat.getGrade() << std::endl;
	return 0;
}
