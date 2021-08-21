#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed 
{

public:
// Constructor & Destructor
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &obj);
	Fixed& operator = (const Fixed &obj);   

// Atributes


// Methods
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

// Atributes
	int			fixed_point_value;
	const int	frac_bits = 8;

// Methods


};
#endif
