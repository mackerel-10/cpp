#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int n) {
	return (std::find(container.begin(), container.end(), n)); // 찾지 못하면 마지막을 반환한다(vector.end()).
}

#endif //EASYFIND_HPP
