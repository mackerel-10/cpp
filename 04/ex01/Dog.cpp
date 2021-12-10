#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &src) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

Dog & Dog::operator=(const Dog &src) {
	_type = src._type;
	*_brain = *(src._brain); // 주소값이 아닌 값만 복사. 깊은 복사.
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "[ BARK!! ]" << std::endl;
}