/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:36:56 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 21:36:57 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
	
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:

		std::string					_target;
		PresidentialPardonForm( void );

	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );
		virtual ~PresidentialPardonForm( void );

      	void	execute( Bureaucrat const & executor ) const;
};
#endif
