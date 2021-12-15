#include "Bureaucrat.hpp"

/* Orthodox Canonical */
Bureaucrat::Bureaucrat(): _name(""), _grade(0) {

}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade) {
	check_grade(grade);
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

void Bureaucrat::increment_grade() {
	if (check_grade(_grade - 1) == true)
		_grade--;
}

void Bureaucrat::decrement_grade() {
	if (check_grade(_grade + 1) == true)
		_grade++;
}

bool Bureaucrat::check_grade(int grade) {
	if (1 <= grade && grade <= 150)
		return true;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	return false;
}

void Bureaucrat::setGrade(int grade) {
	_grade = grade;
}

/* Exception */
const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "too high ]";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "too low ]";
}

/* Other */
std::ostream & operator<<(std::ostream &os, Bureaucrat &src) {
	os << src.getName() << ", bureaucrat grade " << src.getGrade();
	return os;
}