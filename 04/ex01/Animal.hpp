#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal & src);
		virtual ~Animal();
		const Animal & operator = (const Animal & src);

		virtual void makeSound(void) const;
		const std::string & getType() const;
};

#endif //ANIMAL_HPP
