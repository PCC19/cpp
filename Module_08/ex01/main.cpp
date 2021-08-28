/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:01:52 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/28 18:01:54 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

static void	print_longest_span( Span & test )
{
	try
	{
		std::cout << "Longest span  : " << test.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

static void	print_shortest_span( Span & test )
{
	try
	{
		std::cout << "Shortest span : " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

static void	testVectorEmpty( void )
{
	std::cout << "-------------- Empty Vector  --------------" << std::endl;

	Span test(5);

	print_longest_span(test); //Exception
	print_shortest_span(test);//Exception

	std::cout << std::endl;
}

static void	testVectorOneElement( void )
{
	std::cout << "---------- Vector One Element ----------" << std::endl;

	Span test(5);

	test.addNumber(42);

	print_longest_span(test); //Exception
	print_shortest_span(test);//Exception

	std::cout << std::endl;
}

static void	testVectorTwoElement( void )
{
	std::cout << "---------- Vector Two Element ----------" << std::endl;

	Span test(5);

	test.addNumber(21);
	test.addNumber(42);

	print_longest_span(test); //21
	print_shortest_span(test);//21

	std::cout << std::endl;
}

static void	testVectorTenPositiveElement( void )
{
	std::cout << "---------- Test Vector Ten Element ----------" << std::endl;

	Span test(10);
	int myInts[] = {2, 4, 8, 10, 12, 14, 16, 18, 20, 22};
	std::vector<int> vector(myInts, myInts + sizeof(myInts) / sizeof(int));

	test.addNumber(vector.begin(), vector.end());

	print_longest_span(test);	//20
	print_shortest_span(test); //2

	std::cout << std::endl;
}


static void	testVectorTenThousandElement( void )
{
	std::cout << "------ Vector Ten Thousand Element ------" << std::endl;
	srand(time(NULL));

	Span test(10000);
	std::vector<int> vector(10000);

	for (iteratorVectorInt it = vector.begin(); it != vector.end(); it++)
		*it = rand() % INT_MAX;
	test.addNumber(vector.begin(), vector.end());

	print_longest_span(test);//random
	print_shortest_span(test);//random

	std::cout << std::endl;
}


static void	testVectorWithCopyElement( void )
{
	std::cout << "------- Test Vector With Copy Element -------" << std::endl;

	Span test(10);
	int myInts[] = {0, 3, 6, 9, 12, 15, 18, 21, 24, 27 };
	std::vector<int> vector(myInts, myInts + sizeof(myInts) / sizeof(int));

	test.addNumber(vector.begin(), vector.end());

	Span copy1(test);
	Span copy2 = test;

	std::cout << "Copy1" << std::endl;
	print_longest_span(copy1);//27
	print_shortest_span(copy1);//3
	std::cout << "------------" << std::endl;
	std::cout << "Copy2" << std::endl;
	print_longest_span(copy2);//27
	print_shortest_span(copy2);//3

	std::cout << std::endl;
}

static void	testVectorFull( void )
{
	std::cout << "------------- Vector Full -------------" << std::endl;

	Span test(5);
	std::vector<int> vector(10, 42);

	try
	{
		test.addNumber(vector.begin(), vector.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
}

int main( void )
{
	testVectorFull();
	testVectorEmpty();
	testVectorOneElement();
	testVectorTwoElement();
	testVectorTenPositiveElement();
	testVectorTenThousandElement();
	testVectorWithCopyElement();
	return 0;
}
