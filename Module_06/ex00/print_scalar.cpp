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

