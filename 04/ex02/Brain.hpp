#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	public:
		Brain();
		Brain(const Brain &src);
		virtual ~Brain();
		Brain & operator=(const Brain &src);

		std::string	_ideas[100];
};

#endif //BRAIN_HPP
