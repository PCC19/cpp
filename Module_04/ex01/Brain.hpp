#ifndef BRAIN_HPP
#define BRAIN_HPP
	
#include <iostream>
#include <string>

class Brain  
{
	private:

		std::string	_ideas[100];

	public:

		Brain( void );
		Brain( Brain const & src );
		virtual ~Brain( void );

		Brain & 	operator=( Brain const & rhs );

		std::string getIdea( unsigned int index ) const;
		void		setIdea( unsigned int index, std::string idea );
};
#endif
