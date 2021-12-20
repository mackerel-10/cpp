#include "C.hpp"

C::C() {

}

C::C(const C& src) {
	*this = src;
}

C::~C() {

}

C & C::operator=(const C& src) {
	return *this;
}
