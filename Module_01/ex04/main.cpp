/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:20:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/19 21:05:14 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

// ./replace filename s1 s2
// output: FILENAME.replace com todas ocorrencias de s1 trocadas por s2

// Pegar inputs da linha de comando
	// checar se inputs estao corretos
		// numero de inputs
// abrir arquivo entrada e saida
// loop
	// ler linha
	// procurar s1
	// deletar s1
	// inserir s2
	// salvar linha
	// repetir
// fechar arquivos

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

	// Input validation
	if (argc != 4)
	{
		std::cout << "usage: ./replace [filename] [find_string] [replace_string]" << std::endl;
		return (1);
	}
	else
	{
		input_filename = std::string(argv[1]);
		output_filename	= upperCase(filename) + ".replace";
	
		ifstream input_file(input_filename);
		ofstream output_file(output_filename);

		if (input_file.is_open())
		{
			while (std::getline(input_file, line))
			{
				// using printf() in all tests for consistency
				printf("%s", line.c_str());
			}
		file.close();
		}
	}
	return (0);
}

}
