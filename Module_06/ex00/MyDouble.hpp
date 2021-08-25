#ifndef MYDOUBLE_HPP
#define MYDOUBLE_HPP

#include "MyScalar.hpp"

class MyDouble : public MyScalar
{

	public:

		MyDouble( void );
		MyDouble( std::string value );
		MyDouble( MyDouble const & src );
		MyDouble & operator=( MyDouble const & rhs );
		virtual ~MyDouble();

		int		toInt( void );
		float	toFloat( void );
		double	toDouble( void );
		char	toChar( void );

	private:

		double	_value;
};
#endif
