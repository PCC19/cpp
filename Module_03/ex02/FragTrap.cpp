#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string s)
{
	std::cout << "FragTrap Name Constructor" << std::endl;
	FragTrap::Name = s;
	FragTrap::Hitpoints = 100;
	FragTrap::Epoints = 100;
	FragTrap::Adamage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor" << std::endl;
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

void FragTrap::highFivesGuys(void)
{
	std::cout << Name << " says :  Give me a High Five ?" << std::endl;
}
