#include "Form.hpp"

/* Orthodox Canonical */
Form::Form():
	_name(""), _sign(false), _sign_grade(0), _execute_grade(0){

}

Form::Form(const std::string name, const int sign_grade, const int execute_grade):
	_name(name), _sign(false), _sign_grade(sign_grade), _execute_grade(execute_grade) {
	checkgrade();
}

Form::Form(const Form &src):
	_name(src.getName()), _sign_grade(src.getSign()), _execute_grade(src.getExecuteGrade()){
	*this = src;
}

Form::~Form() {

}

Form &Form::operator=(const Form &src) {
	_sign = src._sign;
	return *this;
}

/* Getter */
const std::string Form::getName() const {
	return _name;
}

const bool Form::getSign() const {
	return _sign;
}

const int Form::getSignGrade() const {
	return _sign_grade;
}

const int Form::getExecuteGrade() const {
	return _execute_grade;
}

/* Member function */
void Form::checkgrade() {
	if (_sign_grade < 1 || _execute_grade < 1)
		throw GradeTooHighException();
	else if (_sign_grade > 150 || _execute_grade > 150)
		throw GradeTooLowException();
}

void Form::beSigned(Bureaucrat &src) {
	if (src.getGrade() < _sign_grade)
		_sign = true;
	else
		_sign = false;
}

bool Form::check_execute(Bureaucrat &src) const {
	if (_sign == false ||
		src.getGrade() > _execute_grade)
	{
		throw GradeTooLowException();
		return false;
	}
	else
		return true;
}

/* Exception */
const char *Form::GradeTooHighException::what() const throw() {
	return "[ Grade is Too High ]";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "[ Grade is Too Low ]";
}

/* Other */
std::ostream & operator<<(std::ostream & os, Form & src) {
	os << std::boolalpha << src.getName() << ": ✔️[" << src.getSignGrade() << "], [" <<
		src.getExecuteGrade() << "], signed [" << src.getSign() << "]";
	return os;
}