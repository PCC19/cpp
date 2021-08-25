/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyChar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:10:31 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/25 19:10:34 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCHAR_HPP
#define MYCHAR_HPP

#include "MyScalar.hpp"

class MyChar : public MyScalar
{

	public:

	class CharIsNonPrintableException : public std::exception
	{
		virtual const char* what() const throw();
	};

	public:

		MyChar( void );
		MyChar( std::string value );
		MyChar( MyChar const & src );
		MyChar &	operator=( MyChar const & rhs );
		virtual ~MyChar();

		int		toInt( void );
		float	toFloat( void );
		double	toDouble( void );
		char	toChar( void );

	private:

		char	_value;
};
#endif
