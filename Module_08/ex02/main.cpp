/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:35:51 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/28 18:35:52 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

static void	test_int( void )
{
	std::cout << "========= INT ============" << std::endl;
		
	MutantStack<int> mstack;
	
	mstack.push(21);
	mstack.push(42);
	mstack.push(63);
	mstack.push(85);
	mstack.push(106);
	std::cout << "Size of mstack : " << mstack.size() << std::endl;
	std::cout << "Top of mstack  : " << mstack.top() << std::endl;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	std::cout << "=========== Iterator loop ================" << std::endl;
	int i = 0;
	while (it != ite)
	{
		std::cout << "i: " << i << " Iterator : " << *it << std::endl;
		++it;
		i++;
	}
	std::cout << std::endl;

	std::cout << "==========================================" << std::endl;
	mstack.pop();
	std::cout << "Pop ! Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Top of mstack  : " << mstack.top() << std::endl;

}

static void test_string (void)
{
	std::cout << "========= STRING ============" << std::endl;
		
	MutantStack<std::string> mstack;
	
	mstack.push("Cunha");
	mstack.push("Thomazelli");
	mstack.push("Roberto");
	mstack.push("Paulo");
	mstack.push("dfjldkfjldjkf");
	std::cout << "Size of mstack : " << mstack.size() << std::endl;
	std::cout << std::endl;
	std::cout << "Top of mstack  : " << mstack.top() << std::endl;
	
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	
	std::cout << "=========== Iterator loop ================" << std::endl;
	int i = 0;
	while (it != ite)
	{
		std::cout << "i: " << i << " Iterator : " << *it << std::endl;
		++it;
		i++;
	}
	std::cout << std::endl;
	std::cout << "==========================================" << std::endl;

	mstack.pop();
	std::cout << "Pop ! Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Pop ! Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Pop ! Top of mstack  : " << mstack.top() << std::endl;

}

int main()
{
	test_int();
	test_string();
}
