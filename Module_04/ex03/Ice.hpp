#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice( void );
		Ice( Ice const & src );
		Ice &	operator=( Ice const & rhs );
		virtual ~Ice( void );

		Ice*	clone( void ) const;
		void	use( ICharacter& target );


};
#endif
