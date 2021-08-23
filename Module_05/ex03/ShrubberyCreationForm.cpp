#include "ShrubberyCreationForm.hpp"  
	
ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: Form("shrubbery creation", 145, 137), _target(target)
{
	std::cout << "Shruberry constructor" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src )
	: Form(src)
{
	std::cout << "Shruberry copy" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "Shruberry destructor" << std::endl;
	return ;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	std::ofstream	file;
	
	if (getIsSigned() == false)
		throw FormIsNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw GradeTooLowException();
	file.open((_target + "_shrubbery").c_str());
	if (file.is_open() == true)
	{
		file << ASCIITREE;
		file.close();
	}
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if (this != &rhs)
	{
		_target = rhs._target;
		Form::operator=(rhs);
	}
	return *this;
}
