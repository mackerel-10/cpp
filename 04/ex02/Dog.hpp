#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal {
	private:
		Brain *_brain;

	public:
		Dog();
		Dog(const Dog & src);
		virtual ~Dog();
		Dog & operator = (const Dog & src);

		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;
};

#endif //DOG_HPP
