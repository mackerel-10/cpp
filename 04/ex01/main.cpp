#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {
	Animal 	*animal[8];
	Brain	*brain;

	std::cout << std::endl;

	for (int i = 0; i < 8; i++) {
		std::cout << "[ " << i << " ]";
		if (i < 4)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}

	std::cout << std::endl;

	brain = animal[0]->getBrain();
	brain->_ideas[0] = "dog";
	std::cout << brain->_ideas[0] << std::endl;
	brain = animal[1]->getBrain();
	std::cout << brain->_ideas[0] << std::endl;

	brain = animal[4]->getBrain();
	brain->_ideas[0] = "cat";
	std::cout << brain->_ideas[0] << std::endl;
	brain = animal[5]->getBrain();
	std::cout << brain->_ideas[0] << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < 8; i++) {
		std::cout << "[ " << i << " ]";
		delete animal[i];
	}

	return 0;
}