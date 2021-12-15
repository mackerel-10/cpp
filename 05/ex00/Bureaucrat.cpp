#include "Bureaucrat.hpp"

/* Orthodox Canonical */
Bureaucrat::Bureaucrat(): _name("") {
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string &name, int grade): _name(name) {
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src) {
	_grade = src._grade;
	return *this;
}

/* Member function */
const std::string Bureaucrat::getName() {
	return _name;
}

const int Bureaucrat::getGrade() {
	return _grade;
}