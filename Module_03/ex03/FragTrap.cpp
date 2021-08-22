#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string s)
{
	FragTrap::Name = s;
	FragTrap::Hitpoints = 100;
	FragTrap::Epoints = 100;
	FragTrap::Adamage = 30;
	std::cout << "FragTrap Name Constructor: " << FragTrap::Name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor: " << FragTrap::Name<< std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	FragTrap::operator = (obj);
}

FragTrap &FragTrap::operator = (const FragTrap &obj)
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

int			FragTrap::getHitpoints(void) const		{return Hitpoints;}
int			FragTrap::getEpoints(void) const		{return Epoints;}
int			FragTrap::getAdamage(void) const		{return Adamage;}

void FragTrap::highFivesGuys(void)
{
	std::cout << Name << " says :  Give me a High Five ?" << std::endl;
}
