#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
	private:
		unsigned int _size;
		T *_array;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &src);
		~Array();
		Array<T> & operator=(const Array<T> &src);
		T & operator[](int idx);

		int size(void);
};

#endif //ARRAY_HPP

template <typename T>
Array<T>::Array():
	_size(0), _array(NULL){

}

template <typename T>
Array<T>::Array(unsigned int n):
	_size(n) {
	_array = new T[n];
}

template  <typename T>
Array<T>::Array(const Array<T> &src) {
	*this = src;
}

template <typename T>
Array<T>::~Array() {
	if (_size)
		delete [] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src) {
	// 깊은 복사(Deep copy)
	if (_size)
		delete [] _array;
	_array = new T(src._size);
	for (int i = 0; i < src._size; i++)
		_array[i] = src._array[i];
	return *this;
}

template <typename T>
int Array<T>::size() {
	return _size;
}

template <typename T>
T & Array<T>::operator[](int idx) {
	if (idx >= _size)
		throw std::exception();
	return _array[idx];
}