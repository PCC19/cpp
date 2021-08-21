#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
// Constructor & Destructor
	ScavTrap(void);
	ScavTrap(std::string s);
	~ScavTrap(void);
	ScavTrap(const ScavTrap &obj);
	ScavTrap& operator = (const ScavTrap &obj);   

// Methods

	void guardGate(void);

// Atributes

private:

	bool	guardMode;

// Methods


};
#endif
