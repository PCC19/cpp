#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{

public:
// Constructor & Destructor
	ClapTrap(void);
	ClapTrap(std::string s);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &obj);
	ClapTrap& operator = (const ClapTrap &obj);   

// Atributes


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

private:

// Atributes
	std::string Name;
	int	Hitpoints;
	int Epoints;
	int	Adamage;


// Methods


};
#endif
