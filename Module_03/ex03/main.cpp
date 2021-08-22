/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/22 20:45:30 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main (void)
{
	std::cout << "=======================\n";
	ClapTrap orc("Orc");

	orc.attack("Troll");
	orc.takeDamage(3);
	orc.beRepaired(1);

	std::cout << "=======================\n";
	ScavTrap troll("Troll");
	troll.attack("Orc");
	troll.takeDamage(5);
	troll.beRepaired(4);
	troll.guardGate();

	std::cout << "=======================\n";
	FragTrap ogre("Ogre");
	ogre.attack("Troll");
	ogre.takeDamage(10);
	ogre.beRepaired(8);
	ogre.highFivesGuys();

	std::cout << "=======================\n";
	DiamondTrap dragon("Dragon!");
	dragon.attack("Troll");
	dragon.takeDamage(20);
	dragon.beRepaired(50);
	dragon.whoAmI();
	dragon.guardGate();
	dragon.highFivesGuys();


	std::cout << "=======================\n";


	return (0);
}
