/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/18 03:52:46 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"
//#include "HumanA.hpp"
//#include "HumanB.hpp"

int main (void)
{
		Weapon	club = Weapon("crude spiked club.");
		std::cout << club.getType() << std::endl;
		return (0);
	
//	{
//		Weapon	club = Weapon("crude spiked club.");
//
//		HumanA bob("Bob", club);
//		bob.attack();
//		club.setType("some other type of club");
//		bob.attack();
//	}
//	{
//		Weapon club = Weapon("crude spiked club");
//
//		HumanB jim("Jim");
//		jim.setWeapon(club);
//		jim.attack();
//		club.setType("some other type of club");
//		jim.attack();
//	}
}