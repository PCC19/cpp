/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:36:47 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 21:36:49 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>	
#include <cstdlib>	
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form  
{
	private:

		const std::string		_name;
		bool					_isSigned;
		const int				_gradeSign;
		const int				_gradeExecute;

	public:

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class FormIsNotSignedException : public std::exception
		{
			virtual const char* what() const throw();
		};

		Form( std::string name, int gradeSign, int gradeExecute );
		Form( Form const & src);
		Form & operator=( Form const & rhs );
		virtual ~Form();

		const std::string	getName( void ) const;
		bool				getIsSigned( void ) const;
		int					getGradeSign( void ) const;
		int					getGradeExecute( void ) const;
		void				setIsSigned( bool isSigned );

		void				beSigned( Bureaucrat const & buraucrat );
		virtual void		execute( Bureaucrat const & executor ) const;
};

std::ostream &				operator<<( std::ostream & output, Form const & rhs );

#endif
