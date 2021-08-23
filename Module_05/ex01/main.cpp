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

int main( void )
{
	std::cout << "=============== Init Ok ====================" << std::endl;	
	Bureaucrat* ruim = createBureaucrat("ruim", 140);
	Bureaucrat* bom = createBureaucrat("bom", 10);

	std::cout << "=============== Forms OK ====================" << std::endl;	
	Form *facil = createForm("facil", 30, 30);
	Form *dificil = createForm("dificil", 100, 100);
	Form *facil2 = createForm("facil2", 30, 30);
	Form *dificil2 = createForm("dificil2", 100, 100);

	std::cout << "=============== Forms NOK ===================" << std::endl;	
	Form *erro1 = createForm("erro1", 0, 30);
	Form *erro2 = createForm("erro2", 151,30);
	Form *erro3 = createForm("erro3", 30, 0);
	Form *erro4 = createForm("erro4", 30, 151);

	std::cout << "=============== Bom ========================" << std::endl;	
	bom->signForm(*facil);
	bom->signForm(*dificil);

	std::cout << "=============== Ruim ========================" << std::endl;	
	ruim->signForm(*facil2);
	ruim->signForm(*dificil2);


	std::cout << "=============== Destructors ================" << std::endl;	
	delete bom;
	delete ruim;
	delete erro1;
	delete erro2;
	delete erro3;
	delete erro4;
	delete facil;
	delete facil2;
	delete dificil;
	delete dificil2;

	return (0);
}
