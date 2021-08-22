#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	Name = "Unamed";
	ClapTrap::setName(Name + "_clap_name");
	std::cout << "DiamondTrap "<< Name << " created." << std::endl;
	std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string s) : ClapTrap(s + "_clap_name")
{
	DiamondTrap::Name = s;

	DiamondTrap::Hitpoints = FragTrap::getHitpoints();
	DiamondTrap::Epoints = ScavTrap::getEpoints();
	DiamondTrap::Adamage = FragTrap::getAdamage();
	std::cout << "DiamondTrap Name Constructor: " << DiamondTrap::Name << std::endl;
	std::cout << "\tDiamondTrap Stats: " << std::endl;
	std::cout << "\tHP: " << DiamondTrap::Hitpoints << std::endl;
	std::cout << "\tEP: " << DiamondTrap::Epoints << std::endl;
	std::cout << "\tAD: " << DiamondTrap::Adamage << std::endl;

}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor: " << DiamondTrap::Name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	DiamondTrap::operator = (obj);
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &obj)
{
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
		Name = obj.Name;
	}
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am DiamondTrap " << DiamondTrap::Name << " and ClaptTrap " << ClapTrap::Name << " !" << std::endl;
}
