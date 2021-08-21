#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string s)
{
	std::cout << "ScavTrap Name Constructor" << std::endl;
	ScavTrap::Name = s;
	ScavTrap::Hitpoints = 100;
	ScavTrap::Epoints = 50;
	ScavTrap::Adamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	ScavTrap::operator = (obj);
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
{
	if (this != &obj)
	{
		this->Name = obj.getName();
		this->Hitpoints = obj.getHitpoints();
		this->Epoints = obj.getEpoints();
		this->Adamage = obj.getAdamage();
	}
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << ScavTrap::Name << " attack " << target << ", causing " << ScavTrap::Adamage << " points of damage !" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
	ScavTrap::Hitpoints -= amount;
	std::cout << "ScavTrap " << ScavTrap::Name << " takes " << amount << " points of damage ! ";
	std::cout << "HP:" << ScavTrap::Hitpoints << std::endl;

}
void ScavTrap::beRepaired(unsigned int amount)
{
	ScavTrap::Hitpoints += amount;
	std::cout << "ScavTrap " << ScavTrap::Name << " repairs " << amount << " hitpoint  ! ";
	std::cout << "HP:" << ScavTrap::Hitpoints << std::endl;
}

void ScavTrap::guardGate(void)
{
	ScavTrap::guardMode = 1;
	std::cout << Name << " has entered gate keeper mode !" << std::endl;
}
