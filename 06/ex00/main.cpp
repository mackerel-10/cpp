#include <iostream>
#include "Convert.hpp"

//int main(int argc, char *argv[]) {
int main() {
	Convert convert;
	char argv[] = "2147483648";

	try {
//		if (argc != 2)
//			throw Convert::InputError();
		std::string src = argv;
		convert.convert_input(src);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
