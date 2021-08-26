/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:34:25 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/26 20:34:27 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

template < typename T >
void	iter(T *array, size_t length, void (*func)(T const &))
{
	if (array == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif
