#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain &src);
		virtual ~Brain();
		Brain & operator=(const Brain &src);
};

#endif //BRAIN_HPP
