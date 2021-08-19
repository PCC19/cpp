#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string init_name, Weapon &init_weapon) : name(init_name), weapon(init_weapon)
{
	std::cout << "Constructor: " << HumanA::name << " has " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor HumanA" << std::endl;
}

void	HumanA::attack()
{
	std::cout << HumanA::name << " attacks with his " << weapon.getType() << std::endl;
}

