/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/18 03:04:58 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int main (void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string& stringREF = s;

	std::cout << "PTR: " << *stringPTR << std::endl;
	std::cout << "REF: " << stringREF << std::endl;
	return (0);
}
