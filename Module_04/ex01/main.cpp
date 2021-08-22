/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:10:36 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 00:00:34 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include "Fly.hpp"

int main()
{
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* m = new Cat();
	const Animal* k = new Fly();
	
	std::cout << "=========== Normal Animals ==========" << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "Dog Type:" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << "Cat Type:" << std::endl;
	std::cout << m->getType() << " " << std::endl;
	std::cout << "Fly Type:" << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << "Cat Sound:" << std::endl;
	m->makeSound(); //will output the cat sound!
	std::cout << "Dog Sound:" << std::endl;
	j->makeSound();
	std::cout << "Fly Sound:" << std::endl;
	k->makeSound();
	std::cout << "Animal Sound:" << std::endl;
	meta->makeSound();
	std::cout << "=====================================" << std::endl;
	delete m;
	delete j;
	delete k;
	delete meta;
}
{
	std::cout << "=========== Animal Array  ============" << std::endl;

	Animal *arrayAnimal[6];
	
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			arrayAnimal[i] = new Dog;
		else
			arrayAnimal[i] = new Cat;
	}
	std::cout << "=====================================" << std::endl;
	for (int i = 0; i< 6; i++)
	{
		std::cout << i << ": " << arrayAnimal[i]->getType() << " :";
		arrayAnimal[i]->makeSound();
	}	
	std::cout << "=====================================" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		delete arrayAnimal[i];
	}	
}

}
