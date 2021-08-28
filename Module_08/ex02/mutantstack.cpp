/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:35:44 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/28 18:35:47 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"  
	
template < typename T >
MutantStack<T>::MutantStack( void )
{
	return ;
}

template < typename T >
MutantStack<T> &	MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	return *this;
}

template < typename T >
MutantStack<T>::MutantStack( MutantStack<T> const & src )
{
	*this = src;
}

template < typename T >
MutantStack<T>::~MutantStack( void )
{
	return ;
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin( void )
{
	return this->c.begin();
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::end( void )
{
	return this->c.end();
}

template class MutantStack<int>;
template class MutantStack<std::string>;
