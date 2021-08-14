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
	int	n_contacts;
	int	idx;
	Contact contacts[8];

// Methods
	void	add(void);
	bool	is_number(const std::string& s);
	void	get_index();
	void	search(void);

private:

// Atributes

// Methods


};
#endif
