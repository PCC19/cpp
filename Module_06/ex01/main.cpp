/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:59:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/25 20:59:37 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t serialize( Data* ptr )
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize( uintptr_t raw )
{
	return reinterpret_cast<Data*>(raw);
}

void	print_data( Data *data )
{
	std::cout << "===================================" << std::endl;
	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Age: " << data->age << std::endl;
	std::cout << "Address: " << data->address << std::endl;
	std::cout << "Grade: " << data->grade << std::endl;
	std::cout << "===================================" << std::endl;
}

int	main( void )
{
	uintptr_t serialized;
	Data* original = NULL;
	Data record = {"Paulo", 45, "Rua Quintana", 100};

	print_data(&record);
	serialized = serialize(&record);
	std::cout << serialized << std::endl;
	original = deserialize(serialized);
	print_data(original);
	return 0;
}
