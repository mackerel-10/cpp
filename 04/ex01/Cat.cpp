#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat & src) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

Cat & Cat::operator = (const Cat & src) {
	_type = src._type;
	*_brain = *(src._brain); // 주소값이 아닌 값만 복사. 깊은 복사.
	return *this;
}

void Cat::makeSound() const {
	std::cout << "[ MEOW!! ]" << std::endl;
}