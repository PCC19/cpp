/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:37:18 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/17 22:44:06 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "ClassZombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie*	zumbi = new Zombie(name);
	return zumbi;
}
