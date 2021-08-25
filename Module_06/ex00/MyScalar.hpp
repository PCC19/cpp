/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyScalar.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:10:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/25 19:10:10 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSCALAR_HPP
#define MYSCALAR_HPP
	
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <string>
#include <cmath>

class MyScalar  
{

	public:

	class NonDisplayableException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class ImpossibleException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class WrongScalarValueException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	public:

		MyScalar( void );
		MyScalar( std::string scalar );
		MyScalar( MyScalar const & src );
		MyScalar &	operator=( MyScalar const & rhs );
		virtual ~MyScalar( void );

		std::string		getScalar( void ) const;

		virtual	int		toInt( void ) = 0;
		virtual	float	toFloat( void ) = 0;
		virtual	double	toDouble( void ) = 0;
		virtual	char	toChar( void ) = 0;

	protected:

		std::string 	_scalar;
	
};

#endif
