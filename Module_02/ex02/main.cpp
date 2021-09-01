/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/09/01 16:31:08 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "============ PDF tests ==============" << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "============ Operators tests ==============" << std::endl;
	Fixed x(1.1f);
	Fixed y(2.1f);

	std::cout << "x: " << x << std::endl;
	std::cout << "x int: " << x.toInt() << std::endl;
	std::cout << "x float: " << x.toFloat() << std::endl;
	std::cout << "------------------------\n";
	std::cout << "y: " << y << std::endl;
	std::cout << "y int: " << y.toInt() << std::endl;
	std::cout << "y float: " << y.toFloat() << std::endl;
	std::cout << "------------------------\n";
	std::cout << "x > y ? " << (x > y) << std::endl;
	std::cout << "x >= y ? " << (x >= y) << std::endl;
	std::cout << "x < y ? " << (x < y) << std::endl;
	std::cout << "x <= y ? " << (x <= y) << std::endl;
	std::cout << "------------------------\n";
	std::cout << "max (x ,y): " << Fixed::max( x, y) << std::endl;
	std::cout << "min (x ,y): " << Fixed::min( x, y) << std::endl;
	std::cout << "------------------------\n";
	std::cout << "x + y: " << (x + y) << std::endl;
	std::cout << "x - y: " << (x - y) << std::endl;
	std::cout << "x * y: " << (x * y) << std::endl;
	std::cout << "x / y: " << (x / y) << std::endl;




	return (0);
}
