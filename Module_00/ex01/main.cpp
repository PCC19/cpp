/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 17:01:42 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/15 20:26:45 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "ClassContact.hpp"
#include "ClassPhone_book.hpp"

int	main(void)
{
	Contact	contato;
	Phone_book	pb;

	std::string command;
	command = "";

	while (command != "EXIT")
	{
		std::cout << std::endl << "Digite um commando (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			pb.add();
		if (command == "SEARCH")
			pb.search();
		if (command == "PRINT")
			contato.print();
	}
}
