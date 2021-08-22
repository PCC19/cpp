#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	Hitpoints = _Hitpoints = 100;
	Epoints = _Epoints = 50;
	Adamage = _Adamage = 20;
	guardMode = 0;
	std::cout << "ScavTrap Name Constructor: " << Name << std::endl;
}

ScavTrap::ScavTrap(std::string s) : ClapTrap(s)
{
	Hitpoints = _Hitpoints = 100;
	Epoints = _Epoints = 50;
	Adamage = _Adamage = 20;
	guardMode = 0;
	std::cout << "ScavTrap Name Constructor: " << s << std::endl;
	std::cout << "\tScavTrap Stats: " << std::endl;
	std::cout << "\tHP: " << ScavTrap::Hitpoints << std::endl;
	std::cout << "\tEP: " << ScavTrap::Epoints << std::endl;
	std::cout << "\tAD: " << ScavTrap::Adamage << std::endl;
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

int			ScavTrap::getHitpoints(void) const		{return _Hitpoints;}
int			ScavTrap::getEpoints(void) const		{return _Epoints;}
int			ScavTrap::getAdamage(void) const		{return _Adamage;}

void ScavTrap::guardGate(void)
{
	ScavTrap::guardMode = 1;
	std::cout << "I've entered gate keeper mode !" << std::endl;
}
