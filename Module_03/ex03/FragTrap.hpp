#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{

public:
// Constructor & Destructor
	FragTrap(void);
	FragTrap(std::string s);
	~FragTrap(void);
	FragTrap(const FragTrap &obj);
	FragTrap& operator = (const FragTrap &obj);   

//Methods
	void highFivesGuys(void);

protected:
//Atributes
	int		_Hitpoints;
	int		_Epoints;
	int		_Adamage;
	
//Methods
	virtual int			getHitpoints(void) const;
	virtual int			getEpoints(void) const;
	virtual int			getAdamage(void) const;



private:


};
#endif
