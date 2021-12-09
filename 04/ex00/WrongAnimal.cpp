#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	_type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

const WrongAnimal & WrongAnimal::operator = (const WrongAnimal &src) {
	_type = src._type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "[ WRONGANIMAL!! ]" << std::endl;
}

const std::string & WrongAnimal::getType() const {
	return _type;
}