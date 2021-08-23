#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat  
{
	private:

		const std::string	_name;
		int					_grade;
		Bureaucrat( void );

	public:

		Bureaucrat (std::string name, int grade);
		Bureaucrat & operator = (Bureaucrat const & rhs);
		Bureaucrat (Bureaucrat const & src);
		virtual ~Bureaucrat( void );

		const std::string	getName( void ) const;
		int					getGrade( void ) const;

		void				incrementGrade( void );
		void				decrementGrade( void );

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};

};

std::ostream &				operator<<( std::ostream & output, Bureaucrat const & rhs );

#endif
