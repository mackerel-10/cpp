#include "Character.hpp"

/* Orthodox Canonical */
Character::Character() {
	_name = "Default";
	_amount_materia = 0;
	memset(_materia, 0, 4);
}

Character::Character(std::string name) {
	_name = name;
	_amount_materia = 0;
	memset(_materia, 0, 4);
}

Character::Character(const Character &src) {
	*this = src;
}

Character::~Character() {

}

Character &Character::operator=(const Character &src) {
	_name = src.getName();
	return *this;
}

/* Member Function */
const std::string &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *materia) {
	if (_amount_materia == 4)
		std::cout << "[ " << _name << " is fully equipped ]" << std::endl;
	else {
		int idx = 0;

		while (_materia[idx])
			idx++;
		_amount_materia++;
		_materia[idx] = materia;
	}
}

void Character::unequip(int idx) {
	_materia[idx] = NULL;
	_amount_materia--;
}

void Character::use(int idx, ICharacter &target) {
	if (_materia[idx])
		_materia[idx]->use(target);
	else
		std::cout << "[ Unequipped ]" << std::endl;
}