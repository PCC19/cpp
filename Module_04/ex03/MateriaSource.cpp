#include "MateriaSource.hpp"  
	
MateriaSource::MateriaSource( void ) : _actualIdx(0)
{
	std::cout << "MateriaSource default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_sources[i] = NULL; 
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = src;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_sources[i] != NULL)
				delete _sources[i];
			_sources[i] = NULL;
			if (rhs._sources[i] != NULL)
				_sources[i] = rhs._sources[i]->clone();
		}
		_actualIdx = rhs.getCurrIdx();
	}
	return *this;
}
	
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_sources[i] != NULL)
			delete _sources[i];
}

unsigned int	MateriaSource::getCurrIdx( void ) const
{
	return _actualIdx;
}

void	MateriaSource::learnMateria( AMateria* source )
{
	if (source != NULL && _actualIdx < 4)
		_sources[_actualIdx++] = source;
}

AMateria *	MateriaSource::createMateria( std::string const & type )
{
	for (unsigned int i = 0; i < _actualIdx; i++)
		if (_sources[i]->getType() == type)
			return _sources[i]->clone();
	return 0;
}

