#ifndef HUMANA_H
# define HUMANA_H
#include "Weapon.hpp"

class HumanA 
{

public:
// Constructor & Destructor
HumanA(std::string init_name, Weapon &init_weapon);
~HumanA(void);

// Atributes

// Methods
void	attack();


private:

// Atributes
std::string		name;
Weapon			&weapon;

// Methods


};
#endif
