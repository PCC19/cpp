/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:07:12 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/26 20:13:33 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main( void )
{
	{
		int a = 3;
		int b = 2;

		swap( a, b );
		std::cout << "a: " << a << ", b: " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	{
		std::string c = "chaine1";
		std::string d = "chaine2";

		swap(c, d);
		std::cout << "c: " << c << ", d: " << d << std::endl;
		std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
		std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	}
	{
		char a = 'p';
		char b = 'c';

		std::cout << "======== Antes Swap =====================" << std::endl;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		swap( a, b );
		std::cout << "======== Depois Swap ====================" << std::endl;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	
	return (0);
}
