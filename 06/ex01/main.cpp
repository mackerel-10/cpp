#include <iostream>

typedef struct data {
	std::string data;
} Data;

// return the parameter in an integer type.
uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}


// return the raw data you created using “serialize” to a Data structure.
Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data *src = new Data;
	Data *dst;
	uintptr_t raw;

	src->data = "hello";
	std::cout << &src->data << "/ " << src->data << std::endl;

	raw = serialize(src);
	dst = deserialize(raw);

	std::cout << &dst->data << "/ " << dst->data << std::endl;

	delete src;
	return 0;
}
