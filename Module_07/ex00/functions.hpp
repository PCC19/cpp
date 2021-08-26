/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:07:07 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/26 20:07:08 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>
#include <string>

template < typename T >
void			swap( T & a, T & b )
{
	T tmp = a;
	a = b;
	b = tmp;
}

template < typename T >
T const &		min( T const & a, T const & b )
{
	if (b <= a)
		return b;
	return a;
}

template < typename T >
T const &		max( T const & a, T const & b )
{
	if (b >= a)
		return b;
	return a;
}

#endif
