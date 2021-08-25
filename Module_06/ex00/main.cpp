/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:09:54 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/25 19:09:56 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyInt.hpp"
#include "MyFloat.hpp"
#include "MyDouble.hpp"
#include "MyChar.hpp"

MyScalar * str_to_scalar( std::string str);
void	print_scalar( MyScalar * convert );

int	main( int argc, char *argv[] )
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert [number]." << std::endl;
		return 1;
	}
	try
	{
		std::string str = argv[1];
		MyScalar* scalar = str_to_scalar(str);
		print_scalar(scalar);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
