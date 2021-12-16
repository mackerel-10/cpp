#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form {
	private:
		const std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & src);

		virtual void execute(Bureaucrat & executor) const;
};


#endif //SHRUBBERYCREATIONFORM_HPP
