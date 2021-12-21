#include <iostream>
#include "iter.hpp"

template <typename T>
void display(int idx, const T &src) {
	std::cout << "[" << idx << "] ";
	std::cout << src << std::endl;
}

int main() {
	{	// int
		int array[] = {1, 2, 3};

		std::cout << "* int *" << std::endl;
		::iter(array, 3, display);
	}

	std::cout << std::endl;

	{	// std::string
		std::string array[] = {
				"Hello",
				"CPP Module",
				"07 ex01"
		};

		std::cout << "* std::string *" << std::endl;
		::iter(array, 3, display);
	}

	return 0;
}
