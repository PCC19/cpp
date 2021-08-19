/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/19 21:59:58 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

// ./replace filename s1 s2
// output: FILENAME.replace com todas ocorrencias de s1 trocadas por s2

std::string upperCase(std::string& s)
{
	char* buf = new char[s.length()]; s.copy(buf, s.length());
	for(int i = 0; i < (int)s.length(); i++)
		buf[i] = std::toupper(buf[i]);
	std::string r(buf, s.length());
	delete [] buf;
	return (r);
}

int main (int argc, char **argv)
{
	std::string input_filename;
	std::string output_filename;
	std::string line;
	std::string s1;
	std::string s2;
	int	i;
	int	j;

	if (argc != 4)
	{
		std::cout << "usage: ./replace [filename] [s1ing] [s2ing]" << std::endl;
		return (1);
	}
	else
	{
		input_filename = std::string(argv[1]);
		output_filename	= upperCase(input_filename) + ".replace";
		s1 = std::string(argv[2]);
		s2 = std::string(argv[3]);
	
		std::ifstream input_file;
		input_file.open(input_filename.c_str());
		std::ofstream output_file;
		output_file.open(output_filename.c_str());

		j = 0;
		if (input_file.is_open() && output_file.is_open())
		{
			while (std::getline(input_file, line))
			{
				i = -1;
				while (line[++i])
				{
					j = line.find(s1, i);
					if (j == i)
					{
						output_file << s2;
						i += (s2.length() - 1);
					}
					else
						output_file << line[i];
				}
				output_file << std::endl;
			}
			input_file.close();
			output_file.close();
		}
	}
	return (0);
}
