#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string s)
{
	ScavTrap::Name = s;
	ScavTrap::Hitpoints = 100;
	ScavTrap::Epoints = 50;
	ScavTrap::Adamage = 20;
	ScavTrap::guardMode= 0;
	std::cout << "ScavTrap Name Constructor: " << ScavTrap::Name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap DestructorL: " << ScavTrap::Name<< std::endl;
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

int			ScavTrap::getHitpoints(void) const		{return Hitpoints;}
int			ScavTrap::getEpoints(void) const		{return Epoints;}
int			ScavTrap::getAdamage(void) const		{return Adamage;}

void ScavTrap::guardGate(void)
{
	ScavTrap::guardMode = 1;
	std::cout << Name << " has entered gate keeper mode !" << std::endl;
}
