/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:01:58 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/28 18:01:59 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <climits>

typedef std::vector<int>::iterator iteratorVectorInt;

class Span  
{

	public:

		Span( void );
		Span( unsigned int N );
		Span &	operator=( Span const & rhs );
		Span( Span const & src );
		virtual ~Span( void );

		void				addNumber( int value );
		void				addNumber( iteratorVectorInt begin, iteratorVectorInt end );

		unsigned int		shortestSpan( void );
		unsigned int		longestSpan( void );

	private:

		unsigned int		_n;
		std::vector<int>	_values;

	public:

		class VectorFullException : public std::exception
		{
				const char* what(void) const throw ();
		};

		class LessThanTwoElementsException : public std::exception
		{
				const char* what(void) const throw ();
		};
};
#endif
