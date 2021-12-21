#include <iostream>
#include <vector>
#include "easyfind.hpp"

template <typename T>
void print(T it, T end) {
	if (it == end)
		std::cout << "[ Not found ]" << std::endl;
	else
		std::cout << *it << std::endl;
}

int main() {
	std::vector<int> v;
	std::vector<int>::iterator it;

	for (int i = 0; i < 50; i++) {
		v.push_back(i);
	}

	it = easyfind(v, 10);
	print(it, v.end());

	it = easyfind(v, 51);
	print(it, v.end());

	return 0;
}
