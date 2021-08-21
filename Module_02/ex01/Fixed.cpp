#include "Fixed.hpp"

Fixed::Fixed(void)
{
	Fixed::fixed_point_value = 0;
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	Fixed::fixed_point_value = n << frac_bits;
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	Fixed::fixed_point_value = roundf(f * (1 << frac_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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

std::ostream &operator << (std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}

int		Fixed::getRawBits( void ) const
{
	return (Fixed::fixed_point_value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	Fixed::fixed_point_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)((float)fixed_point_value / (float)(1 << frac_bits)));
}

int		Fixed::toInt( void ) const
{
	return (fixed_point_value >> frac_bits);
}

