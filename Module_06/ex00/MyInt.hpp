#ifndef MYINT_HPP
#define MYINT_HPP

#include "MyScalar.hpp"

class MyInt : public MyScalar
{

	public:

		MyInt( void );
		MyInt( std::string value );
		MyInt( MyInt const & src );
		MyInt &	operator=( MyInt const & rhs );
		virtual ~MyInt();

		int			toInt( void );
		float		toFloat( void );
		double		toDouble( void );
		char		toChar( void );

	private:

		int			_value;
};
#endif
