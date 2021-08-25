#include "MyDouble.hpp"  
	
MyDouble::MyDouble( void )
{
	return ;
}

MyDouble::MyDouble( std::string value ) : MyScalar(value)
{
	_value = strtod(value.c_str(), NULL);
}

MyDouble & MyDouble::operator=( MyDouble const & rhs )
{
	if (this != &rhs)
	{
		MyScalar::operator=(rhs);
		_value = rhs._value;
	}
	return *this;
}

MyDouble::MyDouble( MyDouble const & src )
{
	*this = src;
}
	
MyDouble::~MyDouble( void )
{
	return ;
}

int		MyDouble::toInt( void )
{
	if (_scalar == "-inf" || _scalar == "+inf" || _scalar == "nan"
		|| _value > 2147483647.0 || _value < -2147483648.0)
		throw MyScalar::ImpossibleException();
	return static_cast<int>(_value);
}

float	MyDouble::toFloat( void )
{
	int precision = _scalar.size() - _scalar.find('.') - 1;

	if (roundf(static_cast<float>(_value)) == static_cast<float>(_value))
		precision = 1;
	else if (precision > 6)
		precision = 6;
	std::cout << std::setprecision(precision);
	return static_cast<float>(_value);
}

double	MyDouble::toDouble( void )
{
	int precision = _scalar.size() - _scalar.find('.') - 1;

	if (round(_value) == _value)
		precision = 1;
	else if (precision > 15)
		precision = 15;
	std::cout << std::setprecision(precision);
	return _value;
}

char	MyDouble::toChar( void )
{
	if (_value >= 0.0 && _value <= 127.0)
	{
		if (isprint(_value) == 0)
			throw MyScalar::NonDisplayableException();
	}
	else
		throw MyScalar::ImpossibleException();
	return static_cast<char>(_value);
}

