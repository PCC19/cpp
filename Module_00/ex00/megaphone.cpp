/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:28:52 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/11 17:18:29 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (argv[i] != 0)
		{
			while (*argv[i] != 0)
			{
				*argv[i] = toupper(*argv[i]);
				std::cout << *argv[i];
				argv[i]++;
			}
			argv++;
		}
		std::cout << '\n';
	}
	return (0);
}
