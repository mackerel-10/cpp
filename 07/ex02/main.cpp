#include <iostream>
#include "Array.hpp"

int main() {
	{	// int
		Array<int> array(3);

		std::cout << "* int *" <<std::endl;

		for (int i = 0; i < array.size(); i++)
			array[i] = i; // operator[] 반환형이 T &여서 i로 수정.

		std::cout << "[size function] " << array.size() << std::endl;

		for (int i = 0; i < array.size(); i++)
			std::cout << "[" << i << "] " << array[i] << std::endl;

		try {
			array[array.size()];
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			array[array.size() + 1];
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{	// std::string
		Array<std::string> array(2);

		array[0] = "Hello";
		array[1] = "CPP Module 07 ex02";

		std::cout << "* std::string *" <<std::endl;

		std::cout << "[size function] " << array.size() << std::endl;

		for (int i = 0; i < array.size(); i++)
			std::cout << "[" << i << "] " << array[i] << std::endl;

		array[0] = "HI";
		for (int i = 0; i < array.size(); i++)
			std::cout << "[" << i << "] " << array[i] << std::endl;

		try {
			array[array.size()];
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			array[array.size() + 1];
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
