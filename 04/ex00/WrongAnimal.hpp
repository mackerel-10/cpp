#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal & src);
		virtual ~WrongAnimal();
		const WrongAnimal & operator = (const WrongAnimal & src);

		void makeSound(void) const;
		const std::string & getType() const;
};


#endif //WRONGANIMAL_HPP
