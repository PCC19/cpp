/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 01:43:32 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/18 02:54:37 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;
	char c;
	Zombie* horde = new Zombie[N];
	std::string nome;

	i = 0;
	c = 'a';
	while (i < N)
	{
		nome = name + " " + c++;
		horde[i].set_name(nome);
		i++;
	}
	return (horde);
}
