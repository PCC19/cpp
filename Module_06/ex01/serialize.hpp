/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:59:41 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/25 20:59:45 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	std::string name;
	int			age;
	std::string	address;
	int			grade;
};

Data*			deserialize(uintptr_t raw);
uintptr_t		serialize(Data* ptr);

#endif
