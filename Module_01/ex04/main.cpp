/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/19 21:29:23 by pcunha           ###   ########.fr       */
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
	std::string find_str;
	std::string replace_str;
	int	i;
	int	j;

	// Input validation
	if (argc != 4)
	{
		std::cout << "usage: ./replace [filename] [find_string] [replace_string]" << std::endl;
		return (1);
	}
	else
	{
		input_filename = std::string(argv[1]);
		output_filename	= upperCase(input_filename) + ".replace";
		find_str = std::string(argv[2]);
		replace_str = std::string(argv[3]);
	
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
					j = line.find(find_str, i);
					if (j == (int)std::string::npos)
						output_file << line[i];
					else
					{
						output_file << replace_str;
						i += replace_str.length();
					}
				}
			}
			input_file.close();
			output_file.close();
		}
	}
	return (0);
}
