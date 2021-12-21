#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T array[], int array_length, void (* f)(int, const T &)) {
	for (int idx = 0; idx < array_length; idx++)
		f(idx, array[idx]);
}

#endif //ITER_HPP
