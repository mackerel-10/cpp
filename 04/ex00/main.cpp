//
// Created by Sujin Jeon on 2021/12/10.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal* meta = new Animal(); // upcasting
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << std::endl;

	// Wrong class
	/*
	 * 	업캐스팅을 사용할 때, virtual을 사용해주지 않으면 동적 바인딩이 제대로 되지 않는다.
	 * 	그래서, WrongCat의 makeSound()함수를 사용했음에도 WrongAnimal이 출력된 것이다.
	 *
	 *	동적 바인딩: 파생 클래스에서 가상 함수를 오버라이딩하고 기본 클래스의 포인터로 파생 클래스의 객체를 가리킬 때,
	 *	가상 함수를 호출하면 무조건 파생 클래스에서 오버라이딩한 가상 함수가 호출된다.
	*/
	std::cout << "/* WRONG */" << std::endl;

	const WrongAnimal *base = new WrongAnimal();
	const WrongAnimal *derived = new WrongCat();

	std::cout << derived->getType() << " " << std::endl;

	base->makeSound();
	derived->makeSound();

	delete derived;
	delete base;

	return 0;
}