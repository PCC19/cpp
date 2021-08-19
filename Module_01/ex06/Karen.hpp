#ifndef KAREN_HPP
# define KAREN_HPP

class Karen 
{

public:
// Constructor & Destructor
	Karen(void);
	~Karen(void);

// Atributes


// Methods
	void complain( std::string level );

private:

// Atributes

// Methods
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	end_of_list(void);

};
#endif
