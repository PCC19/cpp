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
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void	setName(std::string value);
	void	setHitpoints(int value);
	void	setEpoints(int value);
	void	setAdamage(int value);

	std::string	getName(void) const;
	int			getHitpoints(void) const;
	int			getEpoints(void) const;
	int			getAdamage(void) const;

//	void guardGate(void);

// Atributes

private:

// Atributes
	std::string Name;
	int	Hitpoints = 10;
	int Epoints	= 10;
	int	Adamage = 0;


// Methods


};
#endif
