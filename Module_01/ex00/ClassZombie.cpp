#include <iostream>
#include "ClassZombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Goodbye " << _name << std::endl;
}

void		Zombie::set_name(std::string value)		{_name = value;}
std::string	Zombie::get_name(void)					{return(_name);}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
