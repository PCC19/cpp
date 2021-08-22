#include "Dog.hpp"  
	
Dog::Dog( void )
{
	_type = "Dog";
	std::cout << _type << " created from the Dog class." << std::endl;
}

Dog::Dog( Dog const & src )
{
	*this = src;
	std::cout << _type << " created by copy from the Dog class." << std::endl;
}

Dog::~Dog( void )
{
	std::cout << _type << " destroyed from the Dog class." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Au Au!" << std::endl;
}

Dog & Dog::operator=( Dog const & rhs )
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}
