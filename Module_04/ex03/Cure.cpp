#include "Cure.hpp"  
	
Cure::Cure( void )
{
	std::cout << "Cure Default constructor" << std::endl;
	_type = "cure";
}

Cure & Cure::operator=( Cure const & rhs )
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

Cure::Cure( Cure const & src )
{
	std::cout << "Cure copy constructor" << std::endl;
	*this = src;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor" << std::endl;
}

Cure* Cure::clone( void ) const
{
	Cure *tmp = new Cure;

	return tmp;
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
