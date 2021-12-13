#include "Cure.hpp"

/* Orthodox Canonical */
Cure::Cure() {
	_type = "cure";
}

Cure::Cure(const Cure &src) {
	*this = src;
}

Cure::~Cure() {

}

Cure & Cure::operator=(const Cure &src) {
	_type = src._type;
	return *this;
}

/* Member Function */
Cure *Cure::clone() const {
	return (new Cure(*this)); // 복사 연사자로 복사.
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
}