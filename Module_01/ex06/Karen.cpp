#include <iostream>
#include <string>
#include "Karen.hpp"

Karen::Karen(void)
{
	return;
}

Karen::~Karen(void)
{
	return;
}

void	Karen::debug(void)
{
	std::cout << "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::end_of_list(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::complain(std::string level)
{
	int			i;
	std::string s[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*func[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::end_of_list};
	
	i = 0;
	while(i < 4 && s[i] != level) i++;
	switch (i)
	{
		case 0:
			(this->*(func[0]))();
		case 1:
			(this->*(func[1]))();
		case 2:
			(this->*(func[2]))();
		case 3:
			(this->*(func[3]))();
			break;
		default:
			(this->*(func[4]))();
			break;
	}
}
