#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm: public Form {
	private:
		const std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& src);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm & operator=(const PresidentialPardonForm& src);

		virtual void execute(Bureaucrat & executor) const;
};

#endif //PRESIDENTIALPARDONFORM_HPP
