/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/21 22:13:28 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap orc("Orc");

	orc.attack("Troll");
	orc.takeDamage(3);
	orc.beRepaired(1);

	ClapTrap troll("Troll");

	troll.attack("Orc");
	troll.takeDamage(5);
	troll.beRepaired(4);

	return (0);
}
