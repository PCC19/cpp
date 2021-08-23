#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

		Brain	*_brain;	

	public:

		Dog( void );
		Dog( Dog const & src );
		Dog &	operator=( Dog const & rhs );
		virtual ~Dog( void );

		void	makeSound( void ) const;
		Brain *	getBrain( void ) const;


};
#endif
