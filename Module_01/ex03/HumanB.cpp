#include <iostream>
#include "ClassHumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << "Constructor" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor" << std:endl;
}

HumanB::HumanB(const HumanB &obj)
{
	HumanB::operator = (obj);
}

HumanB &HumanB::operator = (const HumanB &obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}
