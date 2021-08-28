/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:35:37 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/28 18:35:40 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>  
{

	public:

		MutantStack( void );
		MutantStack<T> & operator=( MutantStack<T> const & rhs );
		MutantStack( MutantStack<T> const & src );
		virtual ~MutantStack( void );

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin( void );
		iterator end( void );

};
#endif
