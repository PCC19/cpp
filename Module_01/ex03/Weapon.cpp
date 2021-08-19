#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Constructor" << std::endl;
}

Weapon::Weapon(std::string const & s)
{
	std::cout << "Constructor 2" << std::endl;
	Weapon::setType(s);
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor" << std::endl;
}

void				Weapon::setType(std::string const & s)	{Weapon::type = s;}
std::string const &	Weapon::getType(void)					{return Weapon::type;}
