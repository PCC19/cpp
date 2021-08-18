#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon 
{

public:
// Constructor & Destructor
	Weapon(std::string const & s);
	Weapon(void);
	~Weapon(void);

// Atributes


// Methods
void					setType(std::string const & s);
std::string const &		getType(void);

private:

// Atributes
	std::string		type;

// Methods

};
#endif
