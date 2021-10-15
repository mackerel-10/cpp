#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	
	else {
		for (int idx = 1; idx < argc; idx++) {
			std::string str = argv[idx];
			for (size_t size = 0 ; size < str.length(); size++)
				std::cout << (char)std::toupper(str[size]);
		}
		std::cout << std::endl;
	}

	return 0;
}