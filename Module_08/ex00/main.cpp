/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:16:40 by pcunha            #+#    #+#             */
/*   Updated: 2021/09/05 21:17:25 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template < typename T, typename I >
void	print_element( T & container, I iterator )
{
	if (iterator != container.end())
	{
		std::cout <<"Element: " << *iterator << " | index: ";
		std::cout << std::distance(container.begin(), iterator) << std::endl;
	}	
	else
		std::cout << "Element was not found" << std::endl;
}

int main( void )
{
	{
	std::cout << "==================== Vector ==================" << std::endl;

	std::vector<int>::iterator it;
	std::vector<int> test;
	
	test.push_back(0);
	test.push_back(10);
	test.push_back(20);
	test.push_back(30);
	test.push_back(40);
	it = easyFind(test, 20);
	print_element(test, it);
	print_element(test, easyFind(test, 40));
	print_element(test, easyFind(test, 60));
	print_element(test, easyFind(test, 20));
	print_element(test, easyFind(test, 30));
	print_element(test, easyFind(test, 10));
	}
	{
	std::cout << "==================== LIST ==================" << std::endl;

	std::list<int> test;

	test.push_back(200);
	test.push_back(300);
	test.push_front(100);
	test.push_front(0);
	test.push_back(400);
	test.push_back(500);

	print_element(test, easyFind(test, 200));
	print_element(test, easyFind(test, 400));
	print_element(test, easyFind(test, 0));
	print_element(test, easyFind(test, 300));
	print_element(test, easyFind(test, 500));
	print_element(test, easyFind(test, 600));
	}
	return 0;
}
