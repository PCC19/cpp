/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:37:05 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 21:37:11 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
	
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:

		std::string             _target;
		ShrubberyCreationForm( void );

	public:

		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
		virtual ~ShrubberyCreationForm( void );

		void	execute( Bureaucrat const & executor ) const;
};

#define ASCIITREE "                    .o00o\n\
                   o000000oo\n\
                  00000000000o\n\
                 00000000000000\n\
              oooooo  00000000  o88o\n\
           ooOOOOOOOoo  ```''  888888\n\
         OOOOOOOOOOOO'.qQQQQq. `8888'\n\
        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n\
        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n\
         OOOOOOOOO QQQQQQQQQQ/ /QQ\n\
           OOOOOOOOO `QQQQQQ/ /QQ'\n\
             OO:F_P:O `QQQ/  /Q'\n\
                \\. \\|  // |\n\
                d  \\ |_////\n\
                qP| \\ _' `|Ob\n\
                   \\ / \\  Op\n\
                   |  | O| |\n\
           _       /\\ \\/ /\n\
            `---__/|_\\   //|  __\n\
                  `-'  `-'`-'-'"

#endif
