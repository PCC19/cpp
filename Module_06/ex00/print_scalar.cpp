/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_scalar.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:10:00 by pcunha            #+#    #+#             */
/*   Updated: 2021/09/05 16:05:23 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyInt.hpp"
#include "MyFloat.hpp"
#include "MyDouble.hpp"
#include "MyChar.hpp"

void	print_scalar( MyScalar * convert )
{
	std::cout << std::fixed;
	try
	{
		std::cout << "char:   " << convert->toChar() << "'" << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl;}
	try
	{
		std::cout << "int:    " << convert->toInt() << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl;}
	try
	{
		std::cout << "float:  " << convert->toFloat() << "f" << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl;}
	try
	{
		std::cout << "double: " << convert->toDouble() << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl;}
}

