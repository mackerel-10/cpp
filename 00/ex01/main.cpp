#include <iostream>

int	main() {
	std::string input;

	while (true) {
		std::getline(std::cin, input);
	
		if (input == "ADD") {
			std::cout << input << std::endl;
		}
		else if (input == "SEARCH") {
			std::cout << input << std::endl;
		} 
		else if (input == "EXIT") {
			std::cout << input << std::endl;
			break ;
		}
	}

	return 0;
}