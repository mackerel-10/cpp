#include <iostream>
#include <stack>
#include <list>
#include "mutantstack.hpp"

int main(void) {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "[mtack size] " << mstack.size() << std::endl;
	std::cout << "[mstack top] " << mstack.top() << std::endl;
	std::cout << std::endl;

	mstack.pop();

	std::cout << "[mtack size] " << mstack.size() << std::endl;
	std::cout << "[mstack top] " << mstack.top() << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	{	// Iterator
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		// mstack 내용 출력
		// stack은 LIFO(Last in First out)이라 5부터 먼저 출력
		std::cout << "[mstack] ";
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	{	// Reverse Iterator
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();

		std::cout << "[mstack] ";
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
	}


	return 0;
}
