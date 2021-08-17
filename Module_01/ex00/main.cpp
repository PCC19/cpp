/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/17 23:03:40 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

int main (void)
{
	Zombie zumbi;

	zumbi.set_name("zumbi_da_stack 1");				// sai no return
	zumbi.announce();

	randomChump("zumbi_da_stack 2");				// sai apos funcao

	Zombie *john = newZombie("zumbi_do_heap");		//sai no delete
	john->announce();

	Zombie zumbi2("paulo");							//sai no return
	zumbi2.announce();

	delete john;

	return (0);
}
