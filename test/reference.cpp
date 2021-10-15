#include <iostream>

int	main() {
	int	a = 3;
	int	&another_a = a; // 참조자

	another_a = 5;
	std::cout << "a: " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;
}