#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie 
{

public:
// Constructor & Destructor
	Zombie(void);
	Zombie(std::string s);
	~Zombie(void);

// Atributes


// Methods
	void		set_name(std::string value);
	std::string	get_name(void);
	void		announce(void);

private:

// Atributes
	std::string _name;

// Methods


};
#endif
