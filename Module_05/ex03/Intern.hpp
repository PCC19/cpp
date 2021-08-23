/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:20:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 22:20:37 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
	
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp" 

class Intern  
{

	public:

		Intern( void );
		Intern( Intern const & src );
		Intern & operator=( Intern const & rhs );
		virtual ~Intern( void );

		Form *		makeForm( std::string formName, std::string target );
		Form *		makePresidentialPardon( std::string target );
		Form *		makeRobotomyRequest( std::string target );
		Form *		makeShrubberyCreation( std::string target );


		class UnknownFormException : public std::exception
		{
			virtual const char* what() const throw();
		};

};

std::ostream &				operator<<( std::ostream & output, Intern const & rhs );

#endif
