#include "Animal.hpp"  
	
Animal::Animal( void ) : _type("")
{
	std::cout << _type << "Default Animal constructor." << std::endl;
}

Animal::Animal( Animal const & src )
{
	std::cout << _type << "Animal Copy constructor." << std::endl;
	*this = src;
}

Animal::~Animal( void )
{
	std::cout << _type << " Animal Destructor called." << std::endl;
}

Animal & Animal::operator=( Animal const & rhs )
{
	if (this != &rhs)
		_type = rhs.getType();
	return *this;
}


std::string Animal::getType( void ) const
{
	return _type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "(sound of silence)" << std::endl;
}
