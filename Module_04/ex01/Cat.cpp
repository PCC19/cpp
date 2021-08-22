#include "Cat.hpp"  
	
Cat::Cat( void )
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << _type << " created from the Cat class." << std::endl;
}

Cat::Cat( Cat const & src )
{
	*this = src;
	std::cout << _type << " created by copy from the Cat class." << std::endl;
	if (_brain == NULL)
		_brain = new Brain(*src.getBrain());
	else
		*_brain = *src.getBrain(); 
}

Cat::~Cat( void )
{
	delete _brain;
	std::cout << _type << " destroyed from the Cat class." << std::endl;
}

Cat & Cat::operator=( Cat const & rhs )
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

Brain *	Cat::getBrain( void ) const {return _brain;}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaaaaaaauuu !" << std::endl;
}

