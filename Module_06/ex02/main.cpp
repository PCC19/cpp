#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>


Base * generate( void )
{
	srand (time(NULL));
	int random = rand() % 3;

	if (random == 0)
	{
		std::cout << "Object A" << std::endl;
		return new A();
	}
	else if (random == 1)
	{
		std::cout << "Object B" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "Object C" << std::endl;
		return new C();
	}
}

void identify( Base* p )
{
	if (p != NULL)
		std::cout << "Pointer of instance is a class of   : ";
	if (dynamic_cast<A*>(p) != NULL) std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL) std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL) std::cout << "C" << std::endl;
}

void identify( Base& p )
{
	std::cout << "Reference of instance is a class of : ";
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e) {}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(const std::exception& e) {}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(const std::exception& e) {}
}

int	main( void )
{
	Base* instance;

	instance = generate();
	identify(instance);
	identify(*instance);
	delete instance;

	return 0;
}
