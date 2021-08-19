#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
//	std::cout << "Constructor " << HumanB::name  << std::endl;
}

HumanB::~HumanB(void)
{
//	std::cout << "Destructor" << std::endl;
}


void	HumanB::attack()
{
	std::cout << HumanB::name << " attacks with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	HumanB::weapon = &weapon;

}
