#include <iostream>
#include "Convert.hpp"

int main(int argc, char *argv[]) {
	Convert convert;
	std::string src;

	try {
		if (argc != 2)
			throw Convert::InputError();
		src = argv[1];
		convert.convert_input(src);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
