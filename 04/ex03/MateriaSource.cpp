#include "MateriaSource.hpp"

/* Orthodox Canonical */
MateriaSource::MateriaSource() {
	memset(_materia, 0, 4);
	_amount_learn = 0;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	*this = src;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_materia[i])
			delete _materia[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
	for (int i = 0; i < 4; i++)
		_materia[i] = src._materia[i]->clone();
	_amount_learn = src._amount_learn;
	return *this;
}

/* Member function */

// Learn materia.
void MateriaSource::learnMateria(AMateria *materia) {
	if (_amount_learn == 4) {
		std::cout << "[ Fully learned ]" << std::endl;
		delete materia;
	}
	else {
		_materia[_amount_learn] = materia;
		_amount_learn++;
	}
}

// Must be learned previously.
// If not it returned NULL.
AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++) {
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return NULL;
}