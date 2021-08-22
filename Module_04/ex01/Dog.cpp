#include "Dog.hpp"  
	
Dog::Dog( void )
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << _type << " created from the Dog class." << std::endl;
}

Dog::Dog( Dog const & src )
{
	*this = src;
	std::cout << _type << " created by copy from the Dog class." << std::endl;
//	if (_brain == NULL)
//		_brain = new Brain(*src.getBrain());
//	else
		*_brain = *src.getBrain(); 
}

Dog::~Dog( void )
{
	std::cout << _type << " destroyed from the Dog class." << std::endl;
	delete _brain;
}

Dog & Dog::operator=( Dog const & rhs )
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

Brain *	Dog::getBrain( void ) const {return _brain;}

void	Dog::makeSound( void ) const
{
	std::cout << "Au Au!" << std::endl;
}

