/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 17:01:42 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/14 20:32:04 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClassContact.hpp"
#include "ClassPhone_book.hpp"

int	main(void)
{
	Contact	contato;
	Phone_book	pb;

	std::string command;

	while (1)
	{
		std::cout << std::endl << "Digite um commando (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> command;
		if (command == "EXIT")
			break;
		if (command == "ADD")
			pb.add();
		if (command == "SEARCH")
			// command search
			break;
		if (command == "PRINT")
			contato.print();
	}

}
 // Usar 2 classes:
     // pb
     // contact

 // pb tera 8 elementos de array contact

 // funcao add:
     // adiciona elementos usando % i para numeros maiores que 7 sobrescreverem
     // numeros mais antigos

 // funcao search:
     // fazer impressao formatada do banco de dados
     // width
     // 9 chars

 // funcao exit
     // sai fora do loop infinito 11 // Usar 2 classes:
     // pb
     // contact

 // pb tera 8 elementos de array contact

 // funcao add:
     // adiciona elementos usando % i para numeros maiores que 7 sobrescreverem
     // numeros mais antigos

 // funcao search:
     // fazer impressao formatada do banco de dados
     // width
     // 9 chars

 // funcao exit
     // sai fora do loop infinito
