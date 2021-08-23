/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:36:53 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 21:36:54 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"  
	
PresidentialPardonForm::PresidentialPardonForm( std::string target )
	: Form("presidential pardon", 25, 5), _target(target)
{
	std::cout << "PresidentialPardon constructor" << std::endl;
	return;
}


PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src )
	: Form(src)
{
	*this = src;
	std::cout << "PresidentialPardon copy" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "PresidentialPardon desstructor" << std::endl;
	return ;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (getIsSigned() == false)
		throw FormIsNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Mr President." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if (this != &rhs)
	{
		_target = rhs._target;
		Form::operator=(rhs);
	}
	return *this;
}
