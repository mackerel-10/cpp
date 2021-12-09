//
// Created by Sujin Jeon on 2021/12/10.
//

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat & src) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

Cat & Cat::operator = (const Cat & src) {
	Animal::operator = (src);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "[ MEOW!! ]" << std::endl;
}