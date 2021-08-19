/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/19 22:48:12 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Karen.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage: karenFilter [DEBUG | INFO | WARNING | ERROR]" << std::endl;
		return (1);
	}

	Karen karen;

	karen.complain(argv[1]);
	return (0);
}
