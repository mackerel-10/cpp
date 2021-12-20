#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>

class Convert {
	private:
		char _char_type;
		int _int_type;
		float _float_type;
		double _double_type;
		bool _impossible_type[4];

	public:
		Convert();
		Convert(const Convert& src);
		~Convert();
		Convert & operator=(const Convert& src);

		void convert_input(std::string src);
		void cast_value(std::string type);
		void print(void);

		class InputError: public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class ConversionImpossible: public std::exception {
		public:
			virtual const char * what() const throw();
		};
};


#endif //EX00_CONVERT_HPP
