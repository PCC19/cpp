#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Clap Trap Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string s)
{
	std::cout << "ClapTrap Name Constructor" << std::endl;
	ClapTrap::Name = s;
	ClapTrap::Hitpoints = 10;
	ClapTrap::Epoints = 10;
	ClapTrap::Adamage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClatpTrap Destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	ClapTrap::operator = (obj);
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj)
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

void	ClapTrap::setName(std::string value)		{ClapTrap::Name = value;}
void	ClapTrap::setHitpoints(int value)			{ClapTrap::Hitpoints = value;}
void	ClapTrap::setEpoints(int value)				{ClapTrap::Epoints = value;}
void	ClapTrap::setAdamage(int value)				{ClapTrap::Adamage = value;}

std::string	ClapTrap::getName(void)	const					{return ClapTrap::Name;}
int			ClapTrap::getHitpoints(void) const				{return ClapTrap::Hitpoints;}
int			ClapTrap::getEpoints(void) const				{return ClapTrap::Epoints;}
int			ClapTrap::getAdamage(void) const				{return ClapTrap::Adamage;}



void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << ClapTrap::Name << " attack " << target << ", causing " << ClapTrap::Adamage << " points of damage !" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	ClapTrap::Hitpoints -= amount;
	std::cout << "ClapTrap " << ClapTrap::Name << " takes " << amount << " points of damage ! ";
	std::cout << "HP:" << ClapTrap::Hitpoints << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount)
{
	ClapTrap::Hitpoints += amount;
	std::cout << "ClapTrap " << ClapTrap::Name << " repairs " << amount << " hitpoint  ! ";
	std::cout << "HP:" << ClapTrap::Hitpoints << std::endl;
}

void ClapTrap::nada(void)
{
	std::cout << "Nada !" << std::endl;
}
