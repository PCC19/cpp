#include "Character.hpp"  
	
Character::Character( void ) : _name("Unnamed"), _actualIdx(0)
{
	std::cout << "Default Character creator." << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL; 
}

Character::Character( std::string name ) : _name(name), _actualIdx(0)
{
	std::cout << _name << " Character created" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL; 
}

Character::Character( Character const & src )
{
	std::cout << _name << " Characater copied" << std::endl;
	*this = src;
}

Character::~Character( void )
{
	std::cout << _name << " Character destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];
}

std::string const &	Character::getName( void ) const {return _name;}
AMateria const &	Character::getInventory( unsigned int index ) const {return *_inventory[index];}
unsigned int	Character::getActualIdx( void ) const {return _actualIdx;}

void	Character::equip( AMateria* m )
{
	if (_actualIdx < 4 && m != NULL)
		_inventory[_actualIdx++] = m;
}

void	Character::unequip( int idx )
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		delete _inventory[idx];
		_inventory[idx] = NULL;
		for (int i = idx + 1; i < 4; i++)
			_inventory[i - 1] = _inventory[i];
		_actualIdx--;
	}
}

void	Character::use( int idx, ICharacter &target )
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

Character & Character::operator=( Character const & rhs )
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] != NULL)
				delete _inventory[i];
			_inventory[i] = NULL;
			if (rhs._inventory[i] != NULL)
				_inventory[i] = rhs._inventory[i]->clone();
		}
		_actualIdx = rhs.getActualIdx();
	}
	return *this;
}
