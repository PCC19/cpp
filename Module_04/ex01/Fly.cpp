#include "Fly.hpp"  
	
Fly::Fly( void )
{
	_type = "Fly";
	std::cout << _type << " was created from the Fly class." << std::endl;
}

Fly::Fly( Fly const & src )
{
	*this = src;
	std::cout << _type << " was copied from the Fly class." << std::endl;
}

Fly::~Fly( void )
{
	std::cout << _type << " was destroyed from the Fly class." << std::endl;
}

Fly & Fly::operator=( Fly const & rhs )
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

void	Fly::makeSound( void ) const
{
	std::cout << "Zum Zum Zum!" << std::endl;
}

