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

// Atributes


// Methods
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

// Atributes
	int			fixed_point_value;
	const int	frac_bits = 8;

// Methods


};

	std::ostream &operator << (std::ostream &os, const Fixed &f);
#endif
