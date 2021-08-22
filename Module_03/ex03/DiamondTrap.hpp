#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

public:
// Constructor & Destructor
	DiamondTrap(void);
	DiamondTrap(std::string s);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap &obj);
	DiamondTrap& operator = (const DiamondTrap &obj);   

// Methods
	void attack(std::string const & target);
	void whoAmI(void);


// Atributes

private:

// Atributes
	std::string	_Name;


// Methods


};
#endif
