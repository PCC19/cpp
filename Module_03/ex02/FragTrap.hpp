#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
// Constructor & Destructor
	FragTrap(void);
	FragTrap(std::string s);
	~FragTrap(void);
	FragTrap(const FragTrap &obj);
	FragTrap& operator = (const FragTrap &obj);   

// Methods
	void highFivesGuys(void);


// Atributes

private:


// Methods


};
#endif
