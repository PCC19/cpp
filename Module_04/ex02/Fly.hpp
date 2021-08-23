#ifndef FlY_HPP
#define FlY_HPP

#include "Animal.hpp"

class Fly : public Animal
{

	public:

		Fly( void );
		Fly( Fly const & src );
		virtual ~Fly( void );
		Fly &	operator=( Fly const & rhs );

		void	makeSound( void ) const;

};
#endif
