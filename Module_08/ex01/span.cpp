/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:02:10 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/28 18:02:11 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"  
	
Span::Span( void ) : _n(0)
{
	return ;
}

Span::Span( unsigned int N ) : _n(N)
{
	return ;
}

Span &	Span::operator=( Span const & rhs )
{
	if (this != &rhs)
	{
		_n = rhs._n;
		_values = rhs._values;
	}
	return *this;
}

Span::Span( Span const & src )
{
	*this = src;
}

Span::~Span( void )
{
	return ;
}

void	Span::addNumber( int value )
{
	if (_values.size() >= _n) throw VectorFullException();
	_values.push_back(value);
}

void	Span::addNumber( iteratorVectorInt begin, iteratorVectorInt end )
{
	if (static_cast<unsigned int>(_values.size() + std::distance(begin, end)) > _n)
		throw VectorFullException();
	_values.insert(_values.end(), begin, end);
}

unsigned int		Span::shortestSpan( void )
{
	unsigned int shortestSpan = UINT_MAX;
	std::vector<int> dif;

	if (_values.size() < 2) throw LessThanTwoElementsException();
	std::sort(_values.begin(), _values.end());
	for (int i = 1; i < static_cast<int>(_values.size()); i++)
	{
		dif.push_back(std::abs(_values[i] - _values[i-1]));
	}
	shortestSpan = *std::min_element(dif.begin(), dif.end());
	return shortestSpan;
}

unsigned int		Span::longestSpan( void )
{
	int	max;
	int	min;

	if (_values.size() < 2) throw LessThanTwoElementsException();
	max = *std::max_element(_values.begin(), _values.end());
	min = *std::min_element(_values.begin(), _values.end());
	return max - min;
}


const char* Span::VectorFullException::what(void) const throw ()
{
	return "Vector is full , cannot add new element";
}

const char* Span::LessThanTwoElementsException::what(void) const throw ()
{
	return "Cannot have less than 2 elements.";
}
