/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:57:24 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/26 20:57:26 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{    
    {
        Array<int> a(5);
        Array<int> b(5);
		for (int i = 0; i < 5; i++)
		{
			a[i] = i;
			b[i] = i*i;
		}
		std::cout << "n(a): " << a.size() << std::endl;
		std::cout << "n(b): " << b.size() << std::endl;
		for (int i = 0; i < 5; i++)
		{
			std::cout << a[i] << " | ";
			std::cout << b[i] << " | ";
			std::cout << std::endl;
		}
//		a[5] = 100;
		std::cout << "===============================" << std::endl;

    }
		Array<std::string> a(3);
		a[0] = "Paulo";
		a[1] = "Roberto";
		a[2] = "Cunha";
		
		std::cout << "========= Array a =============" << std::endl;
		for (int i = 0; i < 3 ; i++)
		{
			std::cout << a[i] << " " << a[i].length() << std::endl;
		}
		Array<std::string> b(3);
		b = a;
		b[0] = "PAULO!";
		std::cout << "========= Array b =============" << std::endl;
		for (int i = 0; i < 3 ; i++)
		{
			std::cout << b[i] << " " << b[i].length() << std::endl;
		}
		std::cout << "========= Array a =============" << std::endl;
		for (int i = 0; i < 3 ; i++)
		{
			std::cout << a[i] << " " << a[i].length() << std::endl;
		}
	{
	return (0);
}
//
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//        std::cout << numbers[i] << std::endl;
//        std::cout << mirror[i] << "\n" << std::endl;
//    }
//    //SCOPE
//    {
//        Array<int> tmp = numbers;
//        Array<int> test(tmp);
//        std::cout << "***" << std::endl;
//        std::cout << tmp[5] << std::endl;
//        std::cout << test[5] << "\n***" << std::endl;
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    std::cout << std::endl;
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//        std::cout << numbers[i] << "\n" << std::endl;
//    }
//    delete [] mirror;
    return 0;
}
