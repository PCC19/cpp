#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:

		std::string				_target;
		RobotomyRequestForm( void );

	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );
		virtual ~RobotomyRequestForm( void );

      	void	execute( Bureaucrat const & executor ) const;
};
#endif
