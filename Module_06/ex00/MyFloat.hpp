/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyFloat.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:10:56 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/25 19:10:57 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYFLOAT_HPP
#define MYFLOAT_HPP

#include "MyScalar.hpp"

class MyFloat : public MyScalar
{

	public:

		MyFloat( void );
		MyFloat( std::string value );
		MyFloat( MyFloat const & src );
		MyFloat &	operator=( MyFloat const & rhs );
		virtual ~MyFloat();

		int		toInt( void );
		float	toFloat( void );
		double	toDouble( void );
		char	toChar( void );

	private:

		float	_value;
};
#endif
