#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C: public Base {
	public:
		C();
		C(const C& src);
		virtual ~C();
		C & operator=(const C& src);
};

#endif //C_HPP
