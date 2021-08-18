#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Constructor" << std::endl;
}

Weapon::Weapon(std::string s) : type(s)
{
	std::cout << "Constructor 2" << std::endl;
}


Weapon::~Weapon(void)
{
	std::cout << "Destructor" << std::endl;
}

