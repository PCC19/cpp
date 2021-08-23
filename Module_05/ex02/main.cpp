#include "Bureaucrat.hpp"
#include "Form.hpp"

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

Form* createForm(std::string formName, int gradeSign, int gradeExecute )
{
	Form* form;
	
	try
	{
		form = new Form(formName, gradeSign, gradeExecute);
		return form;
	}
	catch(const std::exception& e)
	{
		std::cout << formName << " : " << e.what() << std::endl;
		return NULL;
	}
}

Form* createShrubberyCreationForm( std::string target )
{
	Form* form;

	try
	{
		form = new ShrubberyCreationForm(target);
		return form;
	}
	catch(const std::exception& e)
	{
		std::cout << formName << " : " << e.what() << std::endl;
		return NULL;
	}
}

Form* createPresidentialPardonForm( std::string target )
{
	Form* form;

	try
	{
		form = new PresidentialPardonForm(target);
		return form;
	}
	catch(const std::exception& e)
	{
		std::cout << formName << " : " << e.what() << std::endl;
		return NULL;
	}
}

Form* createRobotomyRequestForm( std::string target )
{
	Form* form;

	try
	{
		form = new RobotomyRequestForm(target);
		return form;
	}
	catch(const std::exception& e)
	{
		std::cout << formName << " : " << e.what() << std::endl;
		return NULL;
	}
}

int main( void )
{
	std::ofstream file;

	std::cout << "=============== Init Ok ====================" << std::endl;	
	Bureaucrat* ruim = createBureaucrat("ruim", 147);
	Bureaucrat* bom = createBureaucrat("bom", 3);

	std::cout << "=============== Forms OK ====================" << std::endl;	
	Form* sh = createShrubberyCreationForm("Shrub");
	Form* ro = createRobotomyRequestForm("Robotomy");
	Form* pr = createPresidentialPardonForm("Presidential");

	std::cout << "=============== Bom ========================" << std::endl;	
	bom->signForm(*sh);
	increment(bom);
	bom->signForm(*sh);
	bom->executeForm(*sh);
	ruim->executeForm(*sh);
	std::cout << *bom << std::endl;

	std::cout << "=============== Ruim ========================" << std::endl;	
	ruim->signForm(*ro);
	decrement(*ruim);
	ruim->executeForm(*ro);
	ruim->executeForm(*ro);
	std::cout << *ruim << std::endl;

	std::cout << "=============== Bom ========================" << std::endl;	
	bom->signForm(*pr);
	increment(bom);
	bom->signForm(*pr);
	bom->executeForm(*pr);
	ruim->executeForm(*pr);
	std::cout << *bom << std::endl;

	std::cout << "=============== Destructors ================" << std::endl;	
	delete bom;
	delete ruim;
	delete sh;
	delete ro;
	delete pr;

	return (0);
}
