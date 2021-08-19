/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/18 02:56:26 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main (void)
{
	Zombie	*zumbis;
	int		i;
	int		N;

	N = 5;
	zumbis = zombieHorde(N, "zumbisissss");
	i = -1;
	while (++i < N) zumbis[i].announce();

	delete [] zumbis;
}
