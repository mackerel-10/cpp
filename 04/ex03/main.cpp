#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() {
	MateriaSource materiasource;
	AMateria *ice;
	AMateria *cure;

	ICharacter *brown = new Character("Brown");
	ICharacter *jack = new Character("Jack");

	// 4개 이상
	for (int i = 0; i < 5; i++) {
		if (i < 2)
			materiasource.learnMateria(new Ice());
		else
			materiasource.learnMateria(new Cure());
	}
	ice = materiasource.createMateria("ice");
	cure = materiasource.createMateria("cure");
	for (int i = 0; i < 5; i++)
		brown->equip(ice);
	for (int i = 0; i < 4; i++)
		brown->unequip(i);
	std::cout << std::endl;

	// [0] ice -> cure -> ice
	brown->equip(ice);
	for (int i = 0; i < 4; i++) {
		std::cout << "[" << i << "] ";
		brown->use(i, *jack);
	}
	std::cout << std::endl;

	brown->equip(ice);
	for (int i = 0; i < 4; i++) {
		std::cout << "[" << i << "] ";
		brown->use(i, *jack);
	}
	std::cout << std::endl;

	brown->unequip(0);
	for (int i = 0; i < 4; i++) {
		std::cout << "[" << i << "] ";
		brown->use(i, *jack);
	}
	std::cout << std::endl;

	brown->equip(cure);
	for (int i = 0; i < 4; i++) {
		std::cout << "[" << i << "] ";
		brown->use(i, *jack);
	}
	std::cout << std::endl;

	delete brown;
	delete jack;
	delete ice;
	delete cure;

	return 0;
}
