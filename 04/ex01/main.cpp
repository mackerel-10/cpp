#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	Animal *animal[8];
	const Animal *j = new Dog(); // Upcasting
	const Animal *i = new Cat(); // Upcasting

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "[ " << i << " ]";
		animal[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 4; i < 8; i++)
	{
		std::cout << "[ " << i << " ]";
		animal[i] = new Cat();
		std::cout << std::endl;
	}

	delete j;
	delete i;

	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::cout << "[ " << i << " ]";
		delete animal[i];
		std::cout << std::endl;
	}


	return 0;
}