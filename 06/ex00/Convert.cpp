#include "Convert.hpp"

/* Orthodox Canonical */
Convert::Convert() {
	_char_type = 0;
	_int_type = 0;
	_float_type = 0;
	_double_type = 0;
	memset(_impossible_type, false, 3);
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
	for (int i = 0; i < 3; i++)
		_impossible_type[i] = src._impossible_type[i];
	return *this;
}

/* Member Function */
void Convert::convert_input(std::string src) {
	// -inf, +inf, nan(double)
	if ((src.find("-inf") != std::string::npos)
		|| (src.find("+inf") != std::string::npos)
		|| (src.find("nan") != std::string::npos))
		print_exception(src);

	// overflow 처리하기엔 double이 범위가 넓어 기본 변환을 double로 처리.
	else if (isalpha(src[0]) && src.length() == 1) { // 'c', 'a' 알파벳 형식으로 들어올 경우 처리.
		_double_type = src[0];
		cast_value();
	}
	else { // 그 외 정수, 실수 형식 그리고 예외 처리.
		int cnt_dot = 0;
		int cnt_f = 0;

		// f 위치가 잘못된 경우 예외 처리
		if (src.find("f") != std::string::npos) {
			int idx = src.find("f");

			if (idx != src.length() - 1)
				throw ConversionImpossible();
		}

		for (int i = 0; i < src.length(); i++) {
			if (isdigit(src[i]) == false && src[i] != '.'
				&& src[i] != 'f')
				throw ConversionImpossible();
			if (src[i] == '.')
				cnt_dot++;
			if (src[i] == 'f')
				cnt_f++;
		}
		if (cnt_dot > 1 || cnt_f > 1)
			throw ConversionImpossible();
		_double_type = std::stod(src);
		cast_value();
	}
}

void Convert::cast_value() {
	// 정적 캐스팅(static casting)
	if (CHAR_MIN <= _double_type && _double_type <= CHAR_MAX)
		_char_type = static_cast<char>(_double_type);
	else
		_impossible_type[0] = true;
	if (INT_MIN <= _double_type && _double_type <= INT_MAX)
		_int_type = static_cast<int>(_double_type);
	else
		_impossible_type[1] = true;
	if (std::numeric_limits<float>::min() <= _double_type &&
		_double_type <= std::numeric_limits<float>::max())
		_float_type = static_cast<float>(_double_type);
	else
		_impossible_type[2] = true;
	print();
}

void Convert::print() {
	// char
	if (_impossible_type[0] == true)
		std::cout << "char: impossible" << std::endl;
	else if (' ' <= _char_type && _char_type <= '~') // 32~126
		std::cout << "char: '" << _char_type << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	// int
	if (_impossible_type[1] == true)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _int_type << std::endl;

	// float
	std::cout << std::fixed; // 소수점 한자리로 고정
	std::cout.precision(1);
	if (_impossible_type[2] == true)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << _float_type << "f" << std::endl;

	// double
	std::cout << "double: " << _double_type << std::endl;
}

void Convert::print_exception(std::string src) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;

	if (src.find("nan") != std::string::npos) {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (src.find("-inf") != std::string::npos) {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (src.find("+inf") != std::string::npos) {
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
}

/* Exception */
const char *Convert::InputError::what() const throw() {
	return "[ Too Many Inputs ]";
}

const char *Convert::ConversionImpossible::what() const throw() {
	return "[ Conversion Impossible ]";
}