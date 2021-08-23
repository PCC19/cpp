#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:

		std::string			_name;
		AMateria 			*_inventory[4];
		unsigned int		_actualIdx;

	public:

		Character( void );
		Character( std::string name );
		Character( Character const & src );
		Character &	operator=( Character const & rhs );
		virtual ~Character();

		std::string const &	getName( void ) const;
		AMateria const &	getInventory( unsigned int index ) const;
		unsigned int		getActualIdx( void ) const;

		void 				equip( AMateria* m );
		void				unequip( int idx );
		void 				use( int idx, ICharacter& target );
};
#endif
