#include "Bureaucrat.hpp"

void		increment( Bureaucrat * bur )
{
	try
	{
		bur->incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << bur->getName() << " : " << e.what() << std::endl;
	}
}

void		decrement( Bureaucrat * bur )
{
	try
	{
		bur->decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << bur->getName() << " : " << e.what() << std::endl;
	}
}

Bureaucrat* createBureaucrat( std::string name, int grade )
{
	try
	{
		return new Bureaucrat(name, grade);
	}
	catch( const std::exception& e )
	{
		std::cout << name << " : " << e.what() << std::endl;
		return NULL;
	}
}

int main( void )
{
	std::cout << "=============== Init Ok ====================" << std::endl;	
	Bureaucrat* correto = createBureaucrat("Paulo", 75);
	Bureaucrat* Jim = createBureaucrat("Jim", 150);
	Bureaucrat* Bob = createBureaucrat("Bob", 1);
	std::cout << "=============== Init NOk ====================" << std::endl;	
	Bureaucrat* ruim = createBureaucrat("ruim", 151);
	Bureaucrat* bom = createBureaucrat("bom", 0);

	std::cout << "=============== Correto ====================" << std::endl;	
	decrement(correto);
	std::cout << *correto << std::endl;
	increment(correto);
	std::cout << *correto << std::endl;

	std::cout << "=============== Jim ========================" << std::endl;	
	decrement(Jim);
	std::cout << *Jim << std::endl;
	increment(Jim);
	std::cout << *Jim << std::endl;

	std::cout << "=============== Bob ========================" << std::endl;	
	increment(Bob);
	std::cout << *Bob << std::endl;
	decrement(Bob);
	std::cout << *Bob << std::endl;


	std::cout << "=============== Destructors ================" << std::endl;	
	delete Jim;
	delete Bob;
	delete ruim;
	delete bom;
	delete correto;

	return (0);
}
