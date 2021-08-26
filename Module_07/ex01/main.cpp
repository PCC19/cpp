/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:34:31 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/26 20:34:35 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void	is_even (int const & x)
{
	std::cout << x;
	if (x % 2 == 0)
		std::cout << " is even" << std::endl;
	else
		std::cout << " is odd" << std::endl;
}

void	plus_one(int const & x)
{
	std::cout << x << "|" << (x + 1)  << std::endl;
}

void	uppercase_char(char const & x)
{
	std::cout << (char)toupper(x) << std::endl;
}

void	string_len(std::string const & s)
{
	std::cout << s.length() << std::endl;
}


int	main( void )
{
	{
		int array[10] = {7, 9, 11, 13, 2, 4, 5, 12, 10, 1};
	
		iter(array, 10, is_even);
		std::cout << "=================================" << std::endl;
	}
	{
		int array[10] = {7, 9, 11, 13, 2, 4, 5, 12, 10, 1};
	
		iter(array, 5, plus_one);
		std::cout << "=================================" << std::endl;
	}
	{
		char array[5] = {'a', 'b', 'c', 'd', 'e'};
	
		iter(array, 5, uppercase_char);
		std::cout << "=================================" << std::endl;
	}
	{
		std::string array[3] = {"Paulo", "Roberto" , "Cunha"};
	
		iter(array, 3, string_len);
		std::cout << "=================================" << std::endl;
	}
	return (0);
}
