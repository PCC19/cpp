/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:30:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/09/01 02:26:27 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	Fixed::fixed_point_value = 0;
}

Fixed::Fixed(int n)
{
	Fixed::fixed_point_value = n << frac_bits;
}

Fixed::Fixed(float f)
{
	Fixed::fixed_point_value = roundf(f * (1 << frac_bits));
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed &obj)
{
	Fixed::operator = (obj);
}

Fixed &Fixed::operator = (const Fixed &obj)
{
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

bool Fixed::operator > (const Fixed &f) const
{
	return (fixed_point_value > f.fixed_point_value);
}

bool Fixed::operator < (const Fixed &f) const
{
	return (fixed_point_value < f.fixed_point_value);
}

bool Fixed::operator >= (const Fixed &f) const
{
	return (fixed_point_value >= f.fixed_point_value);
}

bool Fixed::operator <= (const Fixed &f) const
{
	return (fixed_point_value <= f.fixed_point_value);
}

bool Fixed::operator == (const Fixed &f) const
{
	return (fixed_point_value == f.fixed_point_value);
}

bool Fixed::operator != (const Fixed &f) const
{
	return (fixed_point_value != f.fixed_point_value);
}

Fixed	Fixed::operator + (const Fixed &f) const
{
	Fixed temp;
	temp.setRawBits(fixed_point_value + f.fixed_point_value);
	return (temp);
}

Fixed	Fixed::operator - (const Fixed &f) const
{
	Fixed temp;
	temp.setRawBits(fixed_point_value - f.fixed_point_value);
	return (temp);
}

Fixed	Fixed::operator * (const Fixed &f) const
{
	Fixed temp;
	temp.setRawBits(fixed_point_value * (f.getRawBits() >> frac_bits));
	return (temp);
}

Fixed	Fixed::operator / (const Fixed &f) const
{
	Fixed temp;
	temp.setRawBits((fixed_point_value << frac_bits) / f.getRawBits());
	return (temp);
}

Fixed &Fixed::operator ++ ()
{
	++this->fixed_point_value;
	return (*this);
}

Fixed &Fixed::operator -- ()
{
	--this->fixed_point_value;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp(*this);
	operator ++();
	return (temp);
}

Fixed Fixed::operator -- (int)
{
	Fixed temp(*this);
	operator --();
	return (temp);
} 

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return (f2);
	else
		return (f1);
}
