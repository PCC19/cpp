#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
	
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

		AMateria 		*_sources[4];
		unsigned int	_actualIdx;

	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		MateriaSource &	operator=( MateriaSource const & rhs );
		virtual ~MateriaSource();

		unsigned int 	getCurrIdx( void ) const;

		void 			learnMateria( AMateria* source );
		AMateria *		createMateria( std::string const & type );
};
#endif
