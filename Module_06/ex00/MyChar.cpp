#include "MyChar.hpp"  
	
MyChar::MyChar( void )
{
	return ;
}

MyChar::MyChar( std::string value ) : MyScalar(value)
{
	if (isprint(value[0]) == 0)
		throw CharIsNonPrintableException();
	_value = value[0];
}

MyChar::MyChar( MyChar const & src )
{
	*this = src;
}

MyChar & MyChar::operator=( MyChar const & rhs )
{
	if (this != &rhs)
	{
		MyScalar::operator=(rhs);
		_value = rhs._value;
	}
	return *this;
}
	
MyChar::~MyChar( void )
{
	return ;
}

int		MyChar::toInt( void )
{
	return static_cast<int>(_value);
}

float	MyChar::toFloat( void )
{
	int precision = 1;

	std::cout << std::setprecision(precision);
	return static_cast<float>(_value);
}

double	MyChar::toDouble( void )
{
	int precision = 1;
	
	std::cout << std::setprecision(precision);
	return static_cast<double>(_value);
}

char	MyChar::toChar( void )
{
	std::cout << "'";
	return _value;
}


const char * MyChar::CharIsNonPrintableException::what( void ) const throw() {return "The char must be printable.";}
