#include "Ice.hpp"

/* Orthodox Canonical */
Ice::Ice() {
	_type = "ice";
}

Ice::Ice(const Ice &src) {
	*this = src;
}

Ice::~Ice() {

}

Ice & Ice::operator=(const Ice &src) {
	_type = src._type;
	return *this;
}

/* Member Function */
Ice *Ice::clone() const {
	return (new Ice(*this)); // 복사 연산자로 복사.
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}