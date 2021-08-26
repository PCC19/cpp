/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:07:12 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/26 20:07:15 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main( void )
{
	{
		int a = 21;
		int b = 42;

		std::cout << "======== Antes Swap =====================" << std::endl;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		swap( a, b );
		std::cout << "======== Depois Swap ====================" << std::endl;
		std::cout << "a: " << a << ", b: " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
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
	{
		std::string a = "paulo";
		std::string b = "cunha";

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
