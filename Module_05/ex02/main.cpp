/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:36:50 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 21:36:51 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
		std::cout << target << " : " << e.what() << std::endl;
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
		std::cout << target << " : " << e.what() << std::endl;
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
		std::cout << target << " : " << e.what() << std::endl;
		return NULL;
	}
}

int main( void )
{
	std::ofstream file;

	std::cout << "=============== Init Ok ====================" << std::endl;	
	Bureaucrat* ruim = createBureaucrat("JOAO RUIM", 147);
	Bureaucrat* bom = createBureaucrat("PAULO BOM", 3);
	std::cout << *bom << std::endl;
	std::cout << *ruim << std::endl;

	std::cout << "=============== Forms OK ====================" << std::endl;	
	Form* sh = createShrubberyCreationForm("Shrub");
	Form* ro = createRobotomyRequestForm("Robotomy");
	Form* pr = createPresidentialPardonForm("Presidential");

	std::cout << "=============== Shrub ===========================" << std::endl;	
	bom->signForm(*sh);
	increment(bom);
	ruim->executeForm(*sh);
	bom->executeForm(*sh);
	std::cout << *bom << std::endl;

	std::cout << "=============== Robotomy ========================" << std::endl;	
	ruim->signForm(*ro);
	decrement(ruim);
	bom->executeForm(*ro);
	std::cout << *ruim << std::endl;

	std::cout << "=============== Pres Pardon =====================" << std::endl;	
	bom->signForm(*pr);
	increment(bom);
	ruim->executeForm(*pr);
	bom->executeForm(*pr);
	std::cout << *bom << std::endl;

	std::cout << "=============== Destructors ================" << std::endl;	
	delete bom;
	delete ruim;
	delete sh;
	delete ro;
	delete pr;

	return (0);
}
