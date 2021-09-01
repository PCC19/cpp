/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/09/01 02:29:01 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	Fixed x(1.1f);
	Fixed y(2.1f);
	Fixed z;

	z = x * 5;
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;
	std::cout << z.toInt() << std::endl;
	std::cout << z.toFloat() << std::endl;

	std::cout << x * 2 << std::endl;
	std::cout << x / 2 << std::endl;
	std::cout << x + 2 << std::endl;
	std::cout << x - 2 << std::endl;



	return (0);
}
