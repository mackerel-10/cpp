//
// Created by Sujin Jeon on 2021/12/10.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Default constructor called" << std::endl;
	_type = "Cat";
}

WrongCat::WrongCat(const WrongCat &src) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &src) {
	_type = src.getType();
	return *this;
}

void WrongCat::makeSound() {
	std::cout << "[ MEOW!! ]" << std::endl;
}
