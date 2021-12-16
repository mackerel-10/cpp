#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	private:
		typedef struct s_form {
			std::string name;
			Form *form;
		} t_form;

	public:
		Intern();
		Intern(const Intern& src);
		~Intern();
		Intern & operator=(const Intern& src);

		Form * makeForm(const std::string form_name, std::string target);

		class CustomExcep: public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif //INTERN_HPP
