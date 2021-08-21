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
	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);

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
