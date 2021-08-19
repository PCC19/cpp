#ifndef CLASSPHONE_BOOK_H
# define CLASSPHONE_BOOK_H
#include "ClassContact.hpp"

class Phone_book 
{

public:
// Constructor & Destructor
	Phone_book(void);
	~Phone_book(void);

// Atributes
	int	idx;
	Contact contacts[8];

// Methods
	void		add(void);
	void		search(void);
	bool		is_number(const std::string& s);
	void		get_index();
	void		print_header();
	std::string	trunc_string(std::string s);

private:

// Atributes

// Methods

};
#endif
