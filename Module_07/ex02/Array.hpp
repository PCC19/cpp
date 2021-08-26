/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:57:30 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/26 20:57:31 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <cstdlib>

template< typename T >
class Array  
{
	public:

		Array< T >( void ) : _size(0), _array(new T[0]()) { return; }

		Array< T >( unsigned int n ) : _size(n), _array(new T[n]()) { return; }

		Array< T >( Array< T > const & src )
		{
			_array = new T[src._size];
			*this = src;
		}

		~Array< T >( void ) { delete [] _array; }

		unsigned int	size( void ) const { return _size; }

		Array< T > &	operator=( Array const & rhs )
		{
			delete [] _array;
			_size = rhs._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
			return *this;
		}

		T &				operator[]( int index )
		{
			if (index < 0 || index >= static_cast<int>(_size))
				throw OutOfLimitsException();
			return _array[index];
		}

		class OutOfLimitsException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Element out of the limits.";
			}
		};

	private:
		
		unsigned int	_size;
		T *				_array;
};

#endif
