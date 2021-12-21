#include <iostream>
#include "Span.hpp"

#define AMOUNT 10000
int main() {
	{
		Span span(AMOUNT);

		for (int i = 0; i < AMOUNT; i++)
			span.addNumber(rand());

		try {
			span.addNumber(AMOUNT + 1);
		}
		catch(std::exception & e) {
			std::cerr << "addNumber Error: ";
			std::cerr << e.what() << std::endl;
		}

		try {
			std::cout << "[shortestSpan] " << span.shortestSpan() << std::endl;
			std::cout << "[longestSpan] " << span.longestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}


	{	// Subject main example
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try {
			std::cout << "[shortestSpan] " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			std::cout << "[longestSpan] " << sp.longestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}
