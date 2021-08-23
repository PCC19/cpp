/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:36:33 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 21:36:35 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
	
Bureaucrat::Bureaucrat( void )
{
	std::cout << "Default Bureaucrat constructor" << std::endl;
}
	
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	std::cout << "Bureaucrat constructor" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src._name)
{
	*this = src;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if (this != &rhs)
		_grade = rhs._grade;
	return *this;
}

const std::string	Bureaucrat::getName( void ) const {return _name;}

int	Bureaucrat::getGrade( void ) const {return _grade;}

void Bureaucrat::incrementGrade( void )
{
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade( void )
{
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;
}


std::ostream &	operator<<( std::ostream & output, Bureaucrat const & rhs )
{
	output << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return output;
}

const char * Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return "Error: The maximum grade is 1.";
}

const char * Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return "Error: The minimum grade is 150.";
}

void Bureaucrat::signForm( Form & form )
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << "." << std::endl;
		form.setIsSigned(true);
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because : " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm( Form const & form )
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << _name << " cannot execute " << form.getName() << " because : ";
		std::cerr << e.what() << '\n';
	}
}