/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/22 00:56:50 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main (void)
{
	ClapTrap orc("Orc");

	orc.attack("Troll");
	orc.takeDamage(3);
	orc.beRepaired(1);

	ScavTrap troll("Troll");

	troll.attack("Orc");
	troll.takeDamage(5);
	troll.beRepaired(4);
	troll.guardGate();

	FragTrap ogre("Ogre");
	ogre.attack("Troll");
	ogre.takeDamage(10);
	ogre.beRepaired(8);
	ogre.highFivesGuys();


	return (0);
}
