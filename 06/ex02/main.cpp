/* dynamic_cast */

#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// randomly instanciates A, B or C and returns the instance as a Base pointer.
Base * generate(void) {
	Base *base;
	int select = rand() % 3;

	if (select == 0)
		base = new A();
	else if (select == 1)
		base = new B();
	else
		base = new C();
	return base;
}

// Display "A", "B" or "C" according to the real type of p.
// 동적 캐스팅 시랲시 null pointer를 반환한다.
// 이를 이용한 조건문
void identify(Base* p) {
	std::cout << "[Pointer] ";

	A *a;
	B *b;
	C *c;

	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
}

// You should never use a pointer inside this function that displays "A", "B" or "C" according to the real type of p.
// 동적 캐스팅 실패시 예외를 throw한다.
void identify(Base& p) {
	std::cout << "[Reference] ";

	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e) {

	}

	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e) {

	}

	try {
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e) {

	}
}

int main() {
	Base *p;

	for (int i = 0; i < 10; i++) {
		std::cout << "[" << i << "]";
		p = generate();
		identify(p);
		identify(*p);
		delete p;
		std::cout << std::endl;
	}

	return 0;
}
