/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyInt.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:10:51 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/25 19:10:53 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyInt.hpp"  
	
MyInt::MyInt( void )
{
	return ;
}

MyInt::MyInt( std::string value ) : MyScalar(value)
{
	std::stringstream ss(value);

	ss >> _value;
}

MyInt & MyInt::operator=( MyInt const & rhs )
{
	if (this != &rhs)
	{
		MyScalar::operator=(rhs);
		_value = rhs._value;
	}
	return *this;
}

MyInt::MyInt( MyInt const & src )
{
	*this = src;
}
	
MyInt::~MyInt( void )
{
	return ;
}

int		MyInt::toInt( void )
{
	return _value;
}

float	MyInt::toFloat( void )
{
	std::cout << std::setprecision(1);;
	return static_cast<float>(_value);
}

double	MyInt::toDouble( void )
{
	std::cout << std::setprecision(1);
	return static_cast<double>(_value);
}

char	MyInt::toChar( void )
{
	if (_value >= 0 && _value <= 127)
	{
		if (isprint(_value) == 0)
			throw MyScalar::NonDisplayableException();
	}
	else
		throw MyScalar::ImpossibleException();
	std::cout << "'";
	return static_cast<char>(_value);
}
