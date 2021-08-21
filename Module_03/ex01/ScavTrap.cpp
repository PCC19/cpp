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

void	ScavTrap::setName(std::string value)		{ScavTrap::Name = value;}
void	ScavTrap::setHitpoints(int value)			{ScavTrap::Hitpoints = value;}
void	ScavTrap::setEpoints(int value)				{ScavTrap::Epoints = value;}
void	ScavTrap::setAdamage(int value)				{ScavTrap::Adamage = value;}

std::string	ScavTrap::getName(void)	const					{return ScavTrap::Name;}
int			ScavTrap::getHitpoints(void) const				{return ScavTrap::Hitpoints;}
int			ScavTrap::getEpoints(void) const				{return ScavTrap::Epoints;}
int			ScavTrap::getAdamage(void) const				{return ScavTrap::Adamage;}



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

//void guarGate(void)
//{
//	std::cout << Name << " has entered gate keeper mode !" << std::endl;
//}
