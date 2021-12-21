#include "Span.hpp"

/* Orthodox Canonical */
Span::Span():
	_size(0) {

}

Span::Span(unsigned int size):
	_size(size) {

}

Span::Span(const Span &src) {
	*this = src;
}

Span::~Span() {

}

Span &Span::operator=(const Span &src) {
	_size = src._size;
	_numbers = src._numbers;
	return *this;
}

/* Member Function */
void Span::addNumber(int n) {
	if (_size == _numbers.size())
		throw OverSize();

	_numbers.push_back(n);
}

unsigned int Span::shortestSpan() {
	if (_numbers.size() == 0)
		throw NoNumber();
	else if (_numbers.size() == 1)
		throw OneNumber();

	std::sort(_numbers.begin(), _numbers.end());

	unsigned int ret = _numbers[1] - _numbers[0];
	for (std::vector<int>::iterator it = _numbers.begin() + 1; it != (_numbers.end() - 1); it++) {
		if (*(it + 1) - *it < ret)
			ret = *(it + 1) - *it;
	}
	return ret;
}

unsigned int Span::longestSpan() {
	if (_numbers.size() == 0)
		throw NoNumber();
	else if (_numbers.size() == 1)
		throw OneNumber();

	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	std::sort(_numbers.begin(), _numbers.end());
	min = _numbers.begin();
	max = _numbers.end() - 1;
	return (*max - *min);
}

/* Exception */
const char *Span::OverSize::what() const throw() {
	return "[ FULL ]";
}

const char *Span::NoNumber::what() const throw() {
	return "[ No Number ]";
}

const char *Span::OneNumber::what() const throw() {
	return "[ Only One Number ]";
}