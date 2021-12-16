#include "ShrubberyCreationForm.hpp"

/* Orthodox Canonical */
ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", 145, 137), _target("") {

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
	Form("ShurubberyCreationForm", 145, 137), _target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	return *this;
}

/* Member Function */
void ShrubberyCreationForm::execute(Bureaucrat &executor) const {
	Form::check_execute(executor);

	std::ofstream _file;
	const std::string _file_name = _target + "_shrubbery";

	_file.open(_file_name);
	_file << "                                                         ." << std::endl;
	_file << "                                              .         ;" << std::endl;
	_file << "                 .              .              ;%     ;;" << std:: endl;
	_file << "                   ,           ,                :;%  %;" << std::endl;
	_file << "                    :         ;                   :;%;'     .," << std::endl;
	_file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	_file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	_file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	_file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	_file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	_file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	_file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	_file << "                      `@%:.  :;%.         ;@@%;'" << std::endl;
	_file << "                        `@%.  `;@%.      ;@@%;" << std::endl;
	_file << "                          `@%%. `@%%    ;@@%;" << std::endl;
	_file << "                            ;@%. :@%%  %@@%;" << std::endl;
	_file << "                              %@bd%%%bd%%:;" << std::endl;
	_file << "                                #@%%%%%:;;" << std::endl;
	_file << "                                %@@%%%::;" << std::endl;
	_file << "                                %@@@%(o);  . '" << std::endl;
	_file << "                                %@@@o%;:(.,'" << std::endl;
	_file << "                            `.. %@@@o%::;" << std::endl;
	_file << "                               `)@@@o%::;" << std::endl;
	_file << "                                %@@(o)::;" << std::endl;
	_file << "                               .%@@@@%::;" << std::endl;
	_file << "                               ;%@@@@%::;." << std::endl;
	_file << "                              ;%@@@@%%:;;;." << std::endl;
	_file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;

	_file.close();
}