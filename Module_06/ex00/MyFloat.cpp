#include "MyFloat.hpp"  
	
MyFloat::MyFloat( void )
{
	return ;
}

MyFloat::MyFloat( std::string value ) : MyScalar(value)
{
	_value = strtof(value.c_str(), NULL);
}

MyFloat & MyFloat::operator=( MyFloat const & rhs )
{
	if (this != &rhs)
	{
		MyScalar::operator=(rhs);
		_value = rhs._value;
	}
	return *this;
}

MyFloat::MyFloat( MyFloat const & src )
{
	*this = src;
}
	
MyFloat::~MyFloat( void )
{
	return ;
}

int		MyFloat::toInt( void )
{
	if (_scalar == "-inff" || _scalar == "+inff" || _scalar == "nanf")
		throw MyScalar::ImpossibleException();
	return static_cast<int>(_value);
}

float	MyFloat::toFloat( void )
{
	int precision =_scalar.size() - _scalar.find('.') - 2;

	if (roundf(_value) == _value)
		precision = 1;
	else if (precision > 6)
		precision = 6;
	std::cout << std::setprecision(precision);
	return _value;
}

double	MyFloat::toDouble( void )
{
	int precision =_scalar.size() - _scalar.find('.') - 2;

	if (round(static_cast<double>(_value)) == static_cast<double>(_value))
		precision = 1;
	else if (precision > 15)
		precision = 15;
	std::cout << std::setprecision(precision);
	return static_cast<double>(_value);
}

char	MyFloat::toChar( void )
{
	if (_value >= 0.0f && _value <= 127.0f)
	{
		if (isprint(_value) == 0)
			throw MyScalar::NonDisplayableException();
	}
	else
		throw MyScalar::ImpossibleException();
	std::cout << "'";
	return static_cast<char>(_value);
}
