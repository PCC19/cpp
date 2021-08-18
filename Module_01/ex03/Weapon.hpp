#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon 
{

public:
// Constructor & Destructor
	Weapon(std::string s);
	Weapon(void);
	~Weapon(void);

// Atributes


// Methods
void			setType(std::string s)	{type = s;}
std::string		getType(void)			{return type;}

private:

// Atributes
	std::string	type;

// Methods

};
#endif
