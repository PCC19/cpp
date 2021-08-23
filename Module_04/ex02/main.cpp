/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:10:36 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/23 17:05:57 by pcunha           ###   ########.fr       */
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
	std::cout << "=====================================" << std::endl;
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* m = new Cat();
	const Animal* k = new Fly();
	
	std::cout << "=====================================" << std::endl;
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
	//meta->makeSound();
	std::cout << "=====================================" << std::endl;
	delete m;
	delete j;
	delete k;
	//delete meta;
}
{
	std::cout << "=====================================" << std::endl;
	std::cout << "=========== Animal Array  ===========" << std::endl;
	std::cout << "=====================================" << std::endl;

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


{
		std::cout << "=====================================" << std::endl;
		std::cout << "=========== Deep Copy ===============" << std::endl;
		std::cout << "=====================================" << std::endl;
		Dog *original_dog = new Dog;
		Cat *original_cat = new Cat;
		Fly	mosca;
		std::cout << "=====================================" << std::endl;
		Dog copy_dog(*original_dog);
		Cat copy_cat  = *original_cat;
		std::cout << "=====================================" << std::endl;
		std::cout << original_dog->getType() << " original idea : " << original_dog->getBrain()->getIdea(0) << std::endl;
		std::cout << original_dog->getType() << " original idea : " << original_dog->getBrain()->getIdea(1) << std::endl;
		std::cout << original_dog->getType() << " original idea : " << original_dog->getBrain()->getIdea(2) << std::endl;
		std::cout << original_cat->getType() << " original idea : " << original_cat->getBrain()->getIdea(3) << std::endl;
		std::cout << original_cat->getType() << " original idea : " << original_cat->getBrain()->getIdea(4) << std::endl;
		std::cout << "=====================================" << std::endl;
		delete original_dog;
		delete original_cat;
		std::cout << "=====================================" << std::endl;
		std::cout << copy_dog.getType() << " copy idea : " << copy_dog.getBrain()->getIdea(0) << std::endl;
		std::cout << copy_dog.getType() << " copy idea : " << copy_dog.getBrain()->getIdea(1) << std::endl;
		std::cout << copy_dog.getType() << " copy idea : " << copy_dog.getBrain()->getIdea(2) << std::endl;
		std::cout << copy_cat.getType() << " copy idea : " << copy_cat.getBrain()->getIdea(3) << std::endl;
		std::cout << copy_cat.getType() << " copy idea : " << copy_cat.getBrain()->getIdea(4) << std::endl;
		std::cout << "=====================================" << std::endl;
		//mosca.getBrain(); // Mosca does not have brain:w

	}
}
