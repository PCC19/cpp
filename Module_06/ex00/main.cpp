#include "MyInt.hpp"
#include "MyFloat.hpp"
#include "MyDouble.hpp"
#include "MyChar.hpp"

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
