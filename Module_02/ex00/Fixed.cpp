#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	Fixed::fixed_point_value = 0;
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Default Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy Operator Called" << std::endl;
	Fixed::operator = (obj);
}

Fixed &Fixed::operator = (const Fixed &obj)
{
	std::cout << "Assignation Operator Called" << std::endl;

	if (this != &obj)
	{
		this->fixed_point_value = obj.getRawBits();
	}
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (Fixed::fixed_point_value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	Fixed::fixed_point_value = raw;
}
