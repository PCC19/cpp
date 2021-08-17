/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/17 22:44:26 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "ClassZombie.hpp"

Zombie* newZombie( std::string name );

int main (void)
{
	Zombie zumbi;
	zumbi.set_name("zzz");
	std::cout << zumbi.get_name() << std::endl;
	zumbi.announce();

	Zombie zumbi2("paulo");
	zumbi2.announce();

	Zombie *john = newZombie("joao");
	john->announce();
	delete john;


	return (0);
}
