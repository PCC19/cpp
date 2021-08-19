#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string const & s)
{
	Weapon::setType(s);
}

Weapon::~Weapon(void)
{
}

void				Weapon::setType(std::string const & s)	{Weapon::type = s;}
std::string const &	Weapon::getType(void)					{return Weapon::type;}
