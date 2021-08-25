/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyScalar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:10:16 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/25 19:10:19 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyScalar.hpp"  
	
MyScalar::MyScalar( void )
{
	return ;
}

MyScalar::MyScalar( std::string scalar ) : _scalar(scalar)
{
	return ;
}
	
MyScalar::MyScalar( MyScalar const & src )
{
	*this = src;
}

MyScalar::~MyScalar( void )
{
	return ;
}

std::string	MyScalar::getScalar( void ) const {return _scalar;}

MyScalar & MyScalar::operator=( MyScalar const & rhs )
{
	if (this != &rhs)
		_scalar = rhs._scalar;
	return *this;
}

const char * MyScalar::NonDisplayableException::what( void ) const throw() {return "Non displayable";}

const char * MyScalar::ImpossibleException::what( void ) const throw() {return "impossible";}

const char * MyScalar::WrongScalarValueException::what( void ) const throw() {return "Not char, int, float or double.";}
