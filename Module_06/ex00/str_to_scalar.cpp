/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_scalar.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:10:22 by pcunha            #+#    #+#             */
/*   Updated: 2021/09/06 06:37:13 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyChar.hpp"
#include "MyInt.hpp"
#include "MyFloat.hpp"
#include "MyDouble.hpp"

bool	isChar( std::string str )
{
	if (str.length() != 1)
		return false;
	return true;
}

bool	isInteger( std::string str )
{
	int integer;
	std::stringstream ss(str);

	if (ss >> integer && !(ss >> str))
		return true;
	return false;
}

bool	isDouble( std::string str )
{
	char *ptr;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
	if (str.empty() || str.find('.') == std::string::npos
		|| str.find('e') != std::string::npos)
		return true;
	strtod(str.c_str(), &ptr);
	if (*ptr == '\0')
		return true;
	return false;
}

bool	isFloat( std::string str )
{
	char *ptr;
	size_t len = str.length();
	
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	if (str.empty() || str.find('.') == std::string::npos
		|| str.find('e') != std::string::npos)
		return false;
	strtof(str.c_str(), &ptr);
	if (*ptr == 'f' && str[len - 1] == 'f' && str[len - 2] != 'f')
		return true;
	return false;
}

MyScalar * str_to_scalar( std::string str )
{
	if		(isDouble(str))		return new MyDouble(str);
	else if (isFloat(str))		return new MyFloat(str);
	else if	(isInteger(str))	return new MyInt(str);
	else if (isChar(str))		return new MyChar(str);
	else	throw MyScalar::WrongScalarValueException();
}
