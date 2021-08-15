#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

class Contact 
{

public:
// Constructor & Destructor
	Contact(void);
	~Contact(void);

// Atributes

// Methods
	void print(void);

	void	set_index(int value);
	void	set_first_name(std::string value);
	void	set_last_name(std::string value);
	void	set_nickname(std::string value);
	void	set_phone_number(std::string value);
	void	set_darkest_secret(std::string value);

	int			get_index(void);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone_number(void);
	std::string	get_darkest_secret(void);

private:

// Atributes
	int			index;
	std::string	first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

// Methods

};
#endif
