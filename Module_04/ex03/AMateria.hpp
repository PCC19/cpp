#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria  
{
	protected:

		std::string 		_type;

	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & src );
		AMateria &operator=( AMateria const & rhs );
		virtual ~AMateria( void );

		std::string const & getType( void ) const;
		void				setType( std::string const & type );

		virtual AMateria* 	clone( void ) const = 0;
		virtual void 		use( ICharacter& target );
};
#endif
