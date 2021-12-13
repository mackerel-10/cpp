#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {
	private:
		std::string _name;
		int _amount_materia;
		AMateria *_materia[4];

	public:
		Character();
		Character(std::string name);
		Character(const Character & src);
		virtual ~Character();
		Character & operator=(const Character& src);

		virtual const std::string & getName() const;
		virtual void equip(AMateria *materia);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif //CHARACTER_HPP
