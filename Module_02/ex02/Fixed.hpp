/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:30:09 by pcunha            #+#    #+#             */
/*   Updated: 2021/09/01 16:30:24 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed 
{

public:
// Constructor & Destructor
	Fixed(void);
	Fixed(const int n);
	Fixed(const float f);
	~Fixed(void);
	Fixed(const Fixed &obj);
	Fixed& operator = (const Fixed &obj);   
	bool operator > (const Fixed &f) const;
	bool operator >= (const Fixed &f) const;
	bool operator < (const Fixed &f) const;
	bool operator <= (const Fixed &f) const;
	bool operator == (const Fixed &f) const;
	bool operator != (const Fixed &f) const;
	Fixed operator + (const Fixed &f) const;
	Fixed operator - (const Fixed &f) const;
	Fixed operator * (const Fixed &f) const;
	Fixed operator / (const Fixed &f) const;
	Fixed &operator ++ ();
	Fixed &operator -- ();
	Fixed operator ++ (int);
	Fixed operator -- (int);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);

// Atributes


// Methods
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

// Atributes
	int					fixed_point_value;
	static const int	frac_bits = 8;

// Methods


};

	std::ostream &operator << (std::ostream &os, const Fixed &f);
#endif
