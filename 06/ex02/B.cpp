#include "B.hpp"

B::B() {

}

B::B(const B& src) {
	*this = src;
}

B::~B() {

}

B & B::operator=(const B& src) {
	return *this;
}
