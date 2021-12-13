#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource{
	private:
		AMateria *_materia[4]; // 포인터
		int _amount_learn;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource & src);
		virtual ~MateriaSource();
		MateriaSource & operator=(const MateriaSource & src);

		virtual void learnMateria(AMateria *materia);
		virtual AMateria* createMateria(std::string const & type);
};

#endif //MATERIASOURCE_HPP
