#include "Animal.hpp"

Animal::Animal(): _type("") {
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << "Animal Constructor called" << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal & Animal::operator = (const Animal &src) {
	_type = src._type;
	return *this;
}

const std::string & Animal::getType() const {
	return _type;
}
