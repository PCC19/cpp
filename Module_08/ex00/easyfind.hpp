/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:16:47 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/28 17:16:49 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>

template< typename T >
typename T::iterator easyFind( T & container, int toFind )
{
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), toFind);
	return it;
}
