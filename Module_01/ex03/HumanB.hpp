#ifndef HUMANB_H
# define HUMANB_H
#include "Weapon.hpp"

class HumanB 
{

public:
// Constructor & Destructor
	HumanB(std::string name);
	~HumanB(void);

// Atributes


// Methods
void	attack();
void	setWeapon(Weapon &weapon);


private:

// Atributes
std::string		name;
Weapon			*weapon;

// Methods


};
#endif
