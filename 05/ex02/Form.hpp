#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		const int _sign_grade;
		const int _execute_grade;
		bool _sign;
	public:
		Form();
		Form(const std::string name, const int sign_grade, const int execute_grade);
		Form(const Form & src);
		~Form();
		Form & operator=(const Form & src);

		const std::string getName(void) const;
		const int getSignGrade(void) const;
		const int getExecuteGrade(void) const;
		const bool getSign(void) const;

		void beSigned(Bureaucrat & src);
		void checkgrade(void);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream &os, Form & src);

#endif //FORM_HPP
