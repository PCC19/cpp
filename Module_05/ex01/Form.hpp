#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>	
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
};

std::ostream &				operator<<( std::ostream & output, Form const & rhs );

#endif
