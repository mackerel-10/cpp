#include <iostream>
#include "Convert.hpp"

//int main(int argc, char *argv[]) {
int main() {
	Convert convert;
	char argv[] = "\t";

	try {
//		if (argc != 2)
//			throw Convert::InputError();
		convert.convert_input(argv);
		convert.print();
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
