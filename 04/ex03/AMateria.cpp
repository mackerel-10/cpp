#include "AMateria.hpp"

/* Orthodox Canonical */
AMateria::AMateria() {
	_type = "Default";
}

AMateria::AMateria(std::string const &type){
	_type = type;
}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria::~AMateria(){

}

AMateria & AMateria::operator=(const AMateria &src) {
	_type = src._type;
	return *this;
}

/* Member Function */
const std::string &AMateria::getType() const {
	return _type;
}