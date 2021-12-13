#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}

Brain & Brain::operator=(const Brain &src) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
	return *this;
}