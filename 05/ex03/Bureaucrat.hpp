#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat& src);

		const std::string getName(void);
		const int getGrade(void);
		void setGrade(int grade);
		bool check_grade(int grade);
		void increment_grade(void);
		void decrement_grade(void);
		void signForm(Form & form);
		void executeForm(Form const & form);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream &os, Bureaucrat &src);

#endif //BUREAUCRAT_HPP
