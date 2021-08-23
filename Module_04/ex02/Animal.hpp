#ifndef ANIMAL_HPP
#define ANIMAL_HPP
	
#include <iostream>
#include <string>

class Animal  
{

	protected:
// Atributes
		std::string		_type;

	public:
// Constructors & Destructors
		Animal( void );
		Animal( Animal const & src );
		virtual ~Animal( void );
		Animal &		operator=( Animal const & rhs );
// Methods
		virtual void	makeSound( void ) const = 0; // <<<------------
		std::string		getType( void ) const;

};
#endif
