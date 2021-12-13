#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria {
	public:
		Ice();
		Ice(const Ice &src);
		virtual ~Ice();
		Ice & operator=(const Ice &src);

		virtual Ice* clone() const;
		virtual void use(ICharacter & target);
};

#endif //ICE_HPP
