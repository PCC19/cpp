#include "WrongAnimal.hpp"  
	
WrongAnimal::WrongAnimal( void ) : _type("")
{
	std::cout << "Default constructor WrongAnimal." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "Copy constructor WrongAnimal." << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor WrongAnimal." << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal grrrrrr !" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return _type;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if (this != &rhs)
		_type = rhs.getType();
	return *this;
}
