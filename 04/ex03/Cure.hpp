#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria {
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &src);
		virtual ~Cure();
		Cure & operator=(const Cure &src);

		virtual Cure* clone() const;
		virtual void use(ICharacter & target);
};



#endif //CURE_HPP
