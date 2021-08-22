#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	Hitpoints = _Hitpoints = 100;
	Epoints = _Epoints = 100;
	Adamage = _Adamage = 30;
	std::cout << "FragTrap Def Name Constructor: " << Name << std::endl;
}

FragTrap::FragTrap(std::string s) : ClapTrap(s)
{
	Hitpoints = _Hitpoints = 100;
	Epoints = _Epoints = 100;
	Adamage = _Adamage = 30;
	std::cout << "FragTrap Name Constructor: " << s << std::endl;
	std::cout << "\tFragTrap Stats: " << std::endl;
	std::cout << "\tHP: " << FragTrap::Hitpoints << std::endl;
	std::cout << "\tEP: " << FragTrap::Epoints << std::endl;
	std::cout << "\tAD: " << FragTrap::Adamage << std::endl;
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

int			FragTrap::getHitpoints(void) const		{return FragTrap::_Hitpoints;}
int			FragTrap::getEpoints(void) const		{return FragTrap::_Epoints;}
int			FragTrap::getAdamage(void) const		{return FragTrap::_Adamage;}

void FragTrap::highFivesGuys(void)
{
	std::cout << Name << " says :  Give me a High Five ?" << std::endl;
}
