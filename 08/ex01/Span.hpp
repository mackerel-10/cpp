#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
	private:
		unsigned int _size;
		std::vector<int> _numbers;

	public:
		Span();
		Span(unsigned int size);
		Span(const Span &src);
		~Span();
		Span &operator=(const Span &src);

		void addNumber(int n);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

	class OverSize: public std::exception {
		public:
			const char * what() const throw();
	};
	class NoNumber: public std::exception {
	public:
		const char * what() const throw();
	};
	class OneNumber: public std::exception {
	public:
		const char * what() const throw();
	};
};


#endif //SPAN_HPP
