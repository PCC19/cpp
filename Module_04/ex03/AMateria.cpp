#include "AMateria.hpp"  
	
AMateria::AMateria( void ) : _type("None")
{
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria( std::string const & type ) : _type(type)
{
	std::cout << _type << " Amateria created" << std::endl;
}

AMateria & AMateria::operator=( AMateria const & rhs )
{
	(void)rhs;

	return *this;
}

AMateria::AMateria( AMateria const & src )
{
	std::cout << _type << " AMateria copied" << std::endl;
	*this = src;
}
	
AMateria::~AMateria( void )
{
	std::cout << _type << " Amateria destructor" << std::endl;
}

std::string const & AMateria::getType( void ) const
{
	return _type;
}

void	AMateria::setType( std::string const & type )
{
	_type = type;
}

void 		AMateria::use( ICharacter& target )
{
	std::cout << "Attack !: " << target.getName();
	std::cout << std::endl;
}

