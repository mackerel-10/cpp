//
// Created by Sujin Jeon on 2021/12/10.
//

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &src) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &src) {
	Animal::operator = (src);
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "[ BARK!! ]" << std::endl;
}