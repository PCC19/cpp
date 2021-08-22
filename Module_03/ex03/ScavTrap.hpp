#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
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

protected:
// Atributes
	int		_Hitpoints;
	int		_Epoints;
	int		_Adamage;

// Methods
	virtual int			getHitpoints(void) const;
	virtual	int			getEpoints(void) const;
	virtual int			getAdamage(void) const;

private:

	bool	guardMode;

// Methods


};
#endif
