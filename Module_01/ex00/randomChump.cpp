/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:46:18 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/17 22:49:32 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "ClassZombie.hpp"

void randomChump( std::string name )
{
	Zombie	stack_zumbi(name);
	stack_zumbi.announce();

}
