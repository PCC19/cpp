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
	DiamondTrap::Hitpoints = FragTrap.getHitpoints();
	DiamondTrap::Epoints = ScavTrap.getEpoints();
	DiamondTrap::Adamage = FragTrap.getAdamage();
	std::cout << "DiamondTrap Name Constructor: " << DiamondTrap::Name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor: " << DiamondTrapName << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	DiamondTrap::operator = (obj);
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &obj)
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

void DiamondFrag::attack(std::string const & target)
{
	ScavTrap::attack(target);
}
