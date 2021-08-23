/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:36:59 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 21:37:00 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"  
	
RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: Form("robotomy request", 72, 45), _target(target)
{
	std::cout <<"Robotomy constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src )
	: Form(src)
{
	*this = src;
	std::cout << "Robotomy copy" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "Robotomy destructor" << std::endl;
	return ;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	std::srand(time(NULL));
	if (getIsSigned() == false)
		throw FormIsNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw GradeTooLowException();
	std::cout << "* Loud and unbearable drilling noises *" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " has not been robotomized successfully." << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (this != &rhs)
	{
		_target = rhs._target;
		Form::operator=(rhs);
	}
	return *this;
}
