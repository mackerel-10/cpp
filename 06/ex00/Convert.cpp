#include "Convert.hpp"

/* Define */
std::string NAN = "NAN";

/* Orthodox Canonical */
Convert::Convert() {
	_char_type = 0;
	_int_type = 0;
	_float_type = 0;
	_double_type = 0;
}

Convert::Convert(const Convert &src) {
	*this = src;
}

Convert::~Convert() {

}

Convert &Convert::operator=(const Convert &src) {
	_char_type = src._char_type;
	_int_type = src._int_type;
	_float_type = src._float_type;
	_double_type = src._double_type;
	return *this;
}

/* Member Function */
void Convert::convert_input(char *src) {
	// char
	if (isalpha(src[0]) && strlen(src) == 1) {
		_char_type = src[0];
		cast_value("char");
	}

	// int
	// float
	// double

	// Exception
	std::string char_str;
	char_str = src;
	if (char_str.find("nan") || char_str.find("inf"))
		print_extra(src);
	else
		throw InputError();
}

void Convert::cast_value(std::string type) {
	if (type == "char") {
		_int_type = static_cast<int>(_char_type);
		_float_type = static_cast<float>(_char_type);
		_double_type = static_cast<double>(_char_type);
	}
	else if (type == "int") {
		_char_type = static_cast<char>(_int_type);
		_float_type = static_cast<float>(_int_type);
		_double_type = static_cast<double>(_int_type);
	}
	else if (type == "float") {
		_char_type = static_cast<char>(_float_type);
		_int_type = static_cast<int>(_float_type);
		_double_type = static_cast<double>(_float_type);
	}
	else if (type == "double") {
		_char_type = static_cast<char>(_double_type);
		_int_type = static_cast<int>(_double_type);
		_float_type = static_cast<float>(_double_type);
	}
}

void Convert::print() {
	// char
	if (' ' <= _char_type && _char_type <= '~') // 32~126
		std::cout << "char: " << _char_type << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	// int
	std::cout << "int: " << _int_type << std::endl;

	// float
	std::cout << std::fixed; // 소수점 한자리로 고정
	std::cout.precision(1);

	std::cout << "float: " << _float_type << "f" << std::endl;

	// double
	std::cout << "double: " << _double_type << std::endl;
}

void Convert::print_extra(char *src) {
	std::cout << "char: impossible" << std:: endl;
	std::cout << "int: impossible" << std::endl;

	std::cout << "float: " << _float_type;
	if (src == "nan")
		std::cout << "f";
	std::cout << std::endl;

	std::cout << "double: " << _double_type;
}

/* Exception */
const char *Convert::InputError::what() const throw() {
	return "[ Input Error ]";
}