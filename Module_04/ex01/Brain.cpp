#include "Brain.hpp"  
	
Brain::Brain( void )
{
	std::string ideas[5] = { "Ideia 1",
							"Ideia 2",
							"Ideia 3",
							"Ideia 4",
							"Ideia 5" };

	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas[i % 5];
	std::cout << "Brain constructed." << std::endl;
}
	
Brain::~Brain( void )
{
	std::cout << "Brain Destructor." << std::endl;
}

Brain & Brain::operator=( Brain const & rhs )
{
	if (this != &rhs)
	{
		for(int i = 0; i < 100; i++)
			_ideas[i] = rhs.getIdea(i);
	}
	return *this;
}

Brain::Brain( Brain const & src )
{
	*this = src;
	std::cout << "Brain copied." << std::endl;
}

std::string	Brain::getIdea( unsigned int index ) const {return _ideas[index];}

void		Brain::setIdea( unsigned int index, std::string idea )	{_ideas[index] = idea;}
