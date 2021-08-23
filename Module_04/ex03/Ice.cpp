#include "Ice.hpp"  
	
Ice::Ice( void )
{
	std::cout << "Ice Default constructor" << std::endl;
	_type = "ice";
}

Ice::Ice( Ice const & src )
{
	std::cout << "Ice Copy constructor" << std::endl;
	*this = src;
}

Ice & Ice::operator=( Ice const & rhs )
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

Ice::~Ice( void )
{
	std::cout << "Ice Destructor" << std::endl;
	return ;
}

Ice* Ice::clone( void ) const
{
	Ice *tmp = new Ice;

	return tmp;
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
