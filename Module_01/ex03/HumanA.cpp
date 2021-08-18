#include <iostream>
#include "ClassHumanA.hpp"

HumanA::HumanA(void)
{
	std::cout << "Constructor" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor" << std:endl;
}

HumanA::HumanA(const HumanA &obj)
{
	HumanA::operator = (obj);
}

HumanA &HumanA::operator = (const HumanA &obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}
